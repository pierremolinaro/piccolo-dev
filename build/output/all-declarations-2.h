#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedRETLWTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedRETLWTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedRETLWTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ComputedRETLWTerminator (const class cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uintlist readProperty_mLiteralValues (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ComputedRETLWTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_uintlist & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ComputedRETLWTerminator extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ComputedRETLWTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedRETLWTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_uintlist & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uintlist mProperty_mLiteralValues ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedRETLWTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedRETLWTerminator (const GGS_location & in_mInstructionLocation,
                                                    const GGS_uintlist & in_mLiteralValues,
                                                    const GGS_bool & in_mUsesRCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedRETLWTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (const class GGS_ipic_31__38_ComputedRETLWTerminator & inSource) ;

  public: GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ComputedRETLWTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ComputedRETLWTerminator bang_ipic_31__38_ComputedRETLWTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ComputedRETLWTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum conditionalBranchMode
//--------------------------------------------------------------------------------------------------

class GGS_conditionalBranchMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_conditionalBranchMode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_native,
    enum_ipicBRA,
    enum_ipicGOTO
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_conditionalBranchMode extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_conditionalBranchMode class_func_ipicBRA (LOCATION_ARGS) ;

  public: static class GGS_conditionalBranchMode class_func_ipicGOTO (LOCATION_ARGS) ;

  public: static class GGS_conditionalBranchMode class_func_native (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_conditionalBranchMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isIpicBRA (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIpicGOTO (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNative (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditionalBranchMode ;

//--------------------------------------------------------------------------------------------------
//   enum conditional_5F_branch
//--------------------------------------------------------------------------------------------------

class GGS_conditional_5F_branch : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_conditional_5F_branch (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_bz,
    enum_bnz,
    enum_bn,
    enum_bnn,
    enum_bc,
    enum_bnc,
    enum_bov,
    enum_bnov
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_conditional_5F_branch extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_conditional_5F_branch class_func_bc (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bn (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnc (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnn (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnov (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnz (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bov (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bz (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_conditional_5F_branch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isBc (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBn (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBnc (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBnn (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBnov (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBnz (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBov (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBz (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditional_5F_branch ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ConditionalJumpTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ConditionalJumpTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ConditionalJumpTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ConditionalJumpTerminator (const class cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;

  public: class GGS_lstring readProperty_mTargetLabelWhenTrue (void) const ;

  public: class GGS_conditionalBranchMode readProperty_mBranchModeOnTrueLabel (void) const ;

  public: class GGS_lstring readProperty_mTargetLabelWhenFalse (void) const ;

  public: class GGS_conditionalBranchMode readProperty_mBranchModeOnFalseLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ConditionalJumpTerminator init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_conditional_5F_branch & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_conditionalBranchMode & inOperand3,
                                                                                         const class GGS_lstring & inOperand4,
                                                                                         const class GGS_conditionalBranchMode & inOperand5,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ConditionalJumpTerminator extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ConditionalJumpTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ConditionalJumpTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ConditionalJumpTerminator_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_conditional_5F_branch & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_conditionalBranchMode & inOperand3,
                                                                                   const class GGS_lstring & inOperand4,
                                                                                   const class GGS_conditionalBranchMode & inOperand5,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GGS_lstring mProperty_mTargetLabelWhenTrue ;
  public: GGS_conditionalBranchMode mProperty_mBranchModeOnTrueLabel ;
  public: GGS_lstring mProperty_mTargetLabelWhenFalse ;
  public: GGS_conditionalBranchMode mProperty_mBranchModeOnFalseLabel ;


//--- Default constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (const GGS_location & in_mInstructionLocation,
                                                      const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                      const GGS_lstring & in_mTargetLabelWhenTrue,
                                                      const GGS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                      const GGS_lstring & in_mTargetLabelWhenFalse,
                                                      const GGS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ConditionalJumpTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (const class GGS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

  public: GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ConditionalJumpTerminator bang_ipic_31__38_ConditionalJumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ConditionalJumpTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedBraTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedBraTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedBraTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ComputedBraTerminator (const class cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ComputedBraTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_lstringlist & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ComputedBraTerminator extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedBraTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ComputedBraTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedBraTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedBraTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstringlist & inOperand1,
                                                                   const class GGS_bool & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedBraTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedBraTerminator (const GGS_location & in_mInstructionLocation,
                                                  const GGS_lstringlist & in_mTargetLabels,
                                                  const GGS_bool & in_mUsesRCALL,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedBraTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedBraTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedBraTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ComputedBraTerminator_2E_weak (const class GGS_ipic_31__38_ComputedBraTerminator & inSource) ;

  public: GGS_ipic_31__38_ComputedBraTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ComputedBraTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ComputedBraTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ComputedBraTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ComputedBraTerminator bang_ipic_31__38_ComputedBraTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ComputedBraTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ComputedBraTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedBraTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ipic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_registerEqualsToW,
    enum_registerGreaterThanW,
    enum_registerLowerThanW
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_RegisterComparison extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_RegisterComparison class_func_registerEqualsToW (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38_RegisterComparison class_func_registerGreaterThanW (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38_RegisterComparison class_func_registerLowerThanW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RegisterComparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isRegisterEqualsToW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRegisterGreaterThanW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRegisterLowerThanW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_AbstractConditionTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_AbstractConditionTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_AbstractConditionTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_AbstractConditionTerminator (const class cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const ;

  public: class GGS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_AbstractConditionTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                               const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_AbstractConditionTerminator extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18AbstractConditionTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_AbstractConditionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_AbstractConditionTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                         const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getOptimizedTerminators
  public: virtual void method_getOptimizedTerminators (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SingleInstructionTerminator & arg_outOptimizedTrueTerminator,
           class GGS_ipic_31__38_SingleInstructionTerminator & arg_outOptimizedFalseTerminator,
           class GGS_bool & arg_outIdenticalTerminators,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  public: GGS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionFalse ;


//--- Default constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (const GGS_location & in_mInstructionLocation,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_AbstractConditionTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_AbstractConditionTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (const class GGS_ipic_31__38_AbstractConditionTerminator & inSource) ;

  public: GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & operator = (const class GGS_ipic_31__38_AbstractConditionTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_AbstractConditionTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_AbstractConditionTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_AbstractConditionTerminator bang_ipic_31__38_AbstractConditionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_AbstractConditionTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_AbstractConditionTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_AbstractConditionTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_registerExpression struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyString ;
  public: inline GGS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_bool mProperty_mNeedsBSR ;
  public: inline GGS_bool readProperty_mNeedsBSR (void) const {
    return mProperty_mNeedsBSR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMNeedsBSR (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsBSR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                                  const GGS_uint & in_mRegisterAddress,
                                                                  const GGS_bool & in_mNeedsBSR) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression & operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpression init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RegisterComparisonTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_RegisterComparisonTerminator (const class cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_ipic_31__38_RegisterComparison readProperty_mComparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RegisterComparisonTerminator init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                       const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                       const class GGS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RegisterComparisonTerminator extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18RegisterComparisonTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterComparisonTerminator_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                 const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                 const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                 const class GGS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_ipic_31__38_RegisterComparison mProperty_mComparison ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (const GGS_location & in_mInstructionLocation,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                        const GGS_ipic_31__38_RegisterComparison & in_mComparison,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RegisterComparisonTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (const class GGS_pic_31__38_RegisterComparisonTerminator & inSource) ;

  public: GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & operator = (const class GGS_pic_31__38_RegisterComparisonTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_RegisterComparisonTerminator_2E_weak init_nil (void) {
    GGS_pic_31__38_RegisterComparisonTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_RegisterComparisonTerminator bang_pic_31__38_RegisterComparisonTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_RegisterComparisonTerminator unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_RegisterComparisonTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparisonTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_IncDecRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_IncDecRegisterTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_IncDecRegisterTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_IncDecRegisterTerminator (const class cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_IncDecRegisterTerminator init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                        const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                        const class GGS_bool & inOperand4,
                                                                                        const class GGS_bool & inOperand5,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_IncDecRegisterTerminator extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18IncDecRegisterTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_IncDecRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                  const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                  const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                  const class GGS_bool & inOperand4,
                                                                                  const class GGS_bool & inOperand5,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38_IncDecRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_IncDecRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                     const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                     const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                     const GGS_bool & in_mIncrement,
                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_IncDecRegisterTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (const class GGS_ipic_31__38_IncDecRegisterTerminator & inSource) ;

  public: GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & operator = (const class GGS_ipic_31__38_IncDecRegisterTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_IncDecRegisterTerminator bang_ipic_31__38_IncDecRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_IncDecRegisterTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_TestRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_TestRegisterTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_TestRegisterTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_TestRegisterTerminator (const class cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_TestRegisterTerminator init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                             const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                             const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_TestRegisterTerminator extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_TestRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18TestRegisterTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_TestRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                       const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_pic_31__38_TestRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_TestRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                  const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                  const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_TestRegisterTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_TestRegisterTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_TestRegisterTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_TestRegisterTerminator_2E_weak (const class GGS_pic_31__38_TestRegisterTerminator & inSource) ;

  public: GGS_pic_31__38_TestRegisterTerminator_2E_weak & operator = (const class GGS_pic_31__38_TestRegisterTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_TestRegisterTerminator_2E_weak init_nil (void) {
    GGS_pic_31__38_TestRegisterTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_TestRegisterTerminator bang_pic_31__38_TestRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_TestRegisterTerminator unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_TestRegisterTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_TestRegisterTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_TestRegisterTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BitTestTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_BitTestTerminator (const class cPtr_pic_31__38_BitTestTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BitTestTerminator init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                            const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                            const class GGS_uint & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BitTestTerminator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18BitTestTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                      const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                      const class GGS_uint & inOperand4,
                                                                      Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_BitTestTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestTerminator (const GGS_location & in_mInstructionLocation,
                                             const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                             const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                             const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                             const GGS_uint & in_mBitNumber,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BitTestTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_BitTestTerminator_2E_weak (const class GGS_pic_31__38_BitTestTerminator & inSource) ;

  public: GGS_pic_31__38_BitTestTerminator_2E_weak & operator = (const class GGS_pic_31__38_BitTestTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_BitTestTerminator_2E_weak init_nil (void) {
    GGS_pic_31__38_BitTestTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_BitTestTerminator bang_pic_31__38_BitTestTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_BitTestTerminator unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_BitTestTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BitTestTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_InstructionWithNoOperandKind
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionWithNoOperandKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_InstructionWithNoOperandKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRWDT,
    enum_DAW,
    enum_NOP,
    enum_POP,
    enum_PUSH,
    enum_RESET,
    enum_SLEEP
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionWithNoOperandKind extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_CLRWDT (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_DAW (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_NOP (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_POP (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_PUSH (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_RESET (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDAW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPOP (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPUSH (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRESET (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_InstructionWithNoOperand reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_InstructionWithNoOperand : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_InstructionWithNoOperand (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_InstructionWithNoOperand (const class cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_InstructionWithNoOperand init_21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_InstructionWithNoOperand extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18InstructionWithNoOperand class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_InstructionWithNoOperand : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_InstructionWithNoOperand_init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38_InstructionWithNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_InstructionWithNoOperand (const GGS_location & in_mInstructionLocation,
                                                     const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_InstructionWithNoOperand_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_InstructionWithNoOperand_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (const class GGS_ipic_31__38_InstructionWithNoOperand & inSource) ;

  public: GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & operator = (const class GGS_ipic_31__38_InstructionWithNoOperand & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_InstructionWithNoOperand_2E_weak init_nil (void) {
    GGS_ipic_31__38_InstructionWithNoOperand_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_InstructionWithNoOperand bang_ipic_31__38_InstructionWithNoOperand_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_InstructionWithNoOperand unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_InstructionWithNoOperand_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_InstructionWithNoOperand_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18_intermediate_registerExpression isEqualToRegister' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEqualToRegister (const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                                  const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDWF,
    enum_ADDWFC,
    enum_ANDWF,
    enum_COMF,
    enum_DECF,
    enum_INCF,
    enum_IORWF,
    enum_MOVF,
    enum_RLCF,
    enum_RLNCF,
    enum_RRCF,
    enum_RRNCF,
    enum_SUBFWB,
    enum_SUBWF,
    enum_SUBWFB,
    enum_SWAPF,
    enum_XORWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_ADDWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_ADDWFC (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_ANDWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_COMF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_DECF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_INCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_IORWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_MOVF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RLCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RLNCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RRCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RRNCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SUBFWB (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SUBWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SUBWFB (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SWAPF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isADDWFC (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRLCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRLNCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRRCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRRNCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBFWB (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBWFB (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_bool & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FDA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GGS_bool & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum FA_5F_sequential_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_MOVWF,
    enum_MULWF,
    enum_NEGF,
    enum_SETF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_MULWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_NEGF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_SETF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSETF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyString ;
  public: inline GGS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_string & in_mAssemblyString,
                                                                                      const GGS_uint & in_mRegisterAddress) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication init_21__21_ (const class GGS_string & inOperand0,
                                                                                                          const class GGS_uint & inOperand1,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication extractObject (const GGS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mSourceRegisterDescription (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mDestinationRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mSourceRegisterDescription ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mDestinationRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum literal_5F_instruction_5F_opcode
//--------------------------------------------------------------------------------------------------

class GGS_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDLW,
    enum_ANDLW,
    enum_IORLW,
    enum_MOVLW,
    enum_MULLW,
    enum_SUBLW,
    enum_XORLW
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literal_5F_instruction_5F_opcode extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literal_5F_instruction_5F_opcode class_func_ADDLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_ANDLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_IORLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_MOVLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_MULLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_SUBLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMULLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                       const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                       const class GGS_uint & inOperand2,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                 const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                 const class GGS_uint & inOperand2,
                                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                const GGS_uint & in_mLiteralValue,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation bang_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mFSRindex (void) const ;

  public: class GGS_uint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_luint & inOperand1,
                                                                                           const class GGS_uint & inOperand2,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_LFSR class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_luint & inOperand1,
                                                                                     const class GGS_uint & inOperand2,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mFSRindex ;
  public: GGS_uint mProperty_mValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_luint & in_mFSRindex,
                                                                    const GGS_uint & in_mValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR bang_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum bit_5F_oriented_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_BCF,
    enum_BSF,
    enum_BTG
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bit_5F_oriented_5F_op extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bit_5F_oriented_5F_op class_func_BCF (LOCATION_ARGS) ;

  public: static class GGS_bit_5F_oriented_5F_op class_func_BSF (LOCATION_ARGS) ;

  public: static class GGS_bit_5F_oriented_5F_op class_func_BTG (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBSF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBTG (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FBA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GGS_uint & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_uint & in_mBitNumber,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_JSR : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR (const class cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_JSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_jumpInstructionKind & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_JSR : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_JSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_jumpInstructionKind & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                    const GGS_lstring & in_mTargetLabel,
                                                    const GGS_jumpInstructionKind & in_mKind,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR bang_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_luint & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_MOVLB class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_luint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_luint & in_mBankIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBlankValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_uint & inOperand1,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBlankValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_uint & in_mBlankValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBlankValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_BLANK class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBlankValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_uint & in_mBlankValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK bang_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum tableAccessOption
//--------------------------------------------------------------------------------------------------

class GGS_tableAccessOption : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_tableAccessOption (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_simpleAccess,
    enum_postIncrement,
    enum_postDecrement,
    enum_preIncrement
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableAccessOption extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tableAccessOption class_func_postDecrement (LOCATION_ARGS) ;

  public: static class GGS_tableAccessOption class_func_postIncrement (LOCATION_ARGS) ;

  public: static class GGS_tableAccessOption class_func_preIncrement (LOCATION_ARGS) ;

  public: static class GGS_tableAccessOption class_func_simpleAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isPostDecrement (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPostIncrement (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPreIncrement (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSimpleAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableAccessOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_tableAccessOption & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_tableAccessOption & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_tableAccessOption & in_mOption,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_tableAccessOption & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_tableAccessOption & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_tableAccessOption & in_mOption,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_luint & inOperand1,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_luint & in_mOccurrenceFactor,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA init_21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_luint & inOperand1,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_luint & in_mOccurrenceFactor,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

  public: class GGS_uint readProperty_mOffset (void) const ;

  public: class GGS_uint readProperty_mRightShift (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             const class GGS_uint & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_MOV_LABEL_W class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_uint & inOperand2,
                                                                                       const class GGS_uint & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;
  public: GGS_uint mProperty_mOffset ;
  public: GGS_uint mProperty_mRightShift ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_lstring & in_mLabel,
                                                                  const GGS_uint & in_mOffset,
                                                                  const GGS_uint & in_mRightShift,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38_SequentialInstructionList readProperty_mTargetInstructions (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                        const class GGS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                        const class GGS_bool & inOperand2,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall extractObject (const GGS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                  const class GGS_bool & inOperand2,
                                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38_SequentialInstructionList mProperty_mTargetInstructions ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                 const GGS_bool & in_mUsesRCALL,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall bang_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak extractObject (const GGS_object & inObject,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_condition_5F_skip_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38_SequentialInstruction readProperty_mEmbeddedInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction init_21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_condition_skip_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_condition_5F_skip_5F_instruction_init_21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                              Compiler * inCompiler) ;


//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38_SequentialInstruction mProperty_mEmbeddedInstruction ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (const class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) ;

  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & operator = (const class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction bang_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                  const class GGS_bool & inOperand2,
                                                                                                  const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                  const class GGS_uint & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_skip_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                            const class GGS_bool & inOperand2,
                                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                            const class GGS_uint & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                   const GGS_bool & in_mSkipIfSet,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_uint & in_mBitNumber,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CPFSEQ,
    enum_CPFSGT,
    enum_CPFSLT,
    enum_TSTFSZ
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code readProperty_mCompareInstruction (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                      const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                      const class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_skip_instruction_compare_register class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                const class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code mProperty_mCompareInstruction ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                           const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                           const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) ;

  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & operator = (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum skip_5F_instruction_5F_FDA_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_DECFSZ,
    enum_DCFSNZ,
    enum_INCFSZ,
    enum_INFSNZ
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_DCFSNZ (LOCATION_ARGS) ;

  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_INFSNZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isDCFSNZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                          const class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                          const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                          const class GGS_bool & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_skip_instruction_FDA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_FDA_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                    const class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                    const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                    const class GGS_bool & inOperand4,
                                                                                    Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                           const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                           const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                           const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           const GGS_bool & in_m_5F_W_5F_isDestination,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & operator = (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForBlockOptimization map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForBlockOptimization final {

  public: DownEnumerator_symbolTableForBlockOptimization (const class GGS_symbolTableForBlockOptimization & inMap) ;

  public: ~ DownEnumerator_symbolTableForBlockOptimization (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;

  public: class GGS_symbolTableForBlockOptimization_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_symbolTableForBlockOptimization (const DownEnumerator_symbolTableForBlockOptimization &) = delete ;
  private: DownEnumerator_symbolTableForBlockOptimization & operator = (const DownEnumerator_symbolTableForBlockOptimization &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForBlockOptimization final {
  public: UpEnumerator_symbolTableForBlockOptimization (const class GGS_symbolTableForBlockOptimization & inMap)  ;

  public: ~ UpEnumerator_symbolTableForBlockOptimization (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
  public: class GGS_symbolTableForBlockOptimization_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_symbolTableForBlockOptimization (const UpEnumerator_symbolTableForBlockOptimization &) = delete ;
  private: UpEnumerator_symbolTableForBlockOptimization & operator = (const UpEnumerator_symbolTableForBlockOptimization &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForBlockOptimization : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_symbolTableForBlockOptimization (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_symbolTableForBlockOptimization (void) ;

//--- Handle copy
  public: GGS_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inSource) ;
  public: GGS_symbolTableForBlockOptimization & operator = (const GGS_symbolTableForBlockOptimization & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_symbolTableForBlockOptimization_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForBlockOptimization init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForBlockOptimization extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForBlockOptimization class_func_mapWithMapToOverride (const class GGS_symbolTableForBlockOptimization & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDefinitionBlockIndexForKey (class GGS_uint constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mDefinitionBlockIndexForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_symbolTableForBlockOptimization getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_symbolTableForBlockOptimization_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForBlockOptimization ;
  friend class DownEnumerator_symbolTableForBlockOptimization ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForBlockOptimization_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForBlockOptimization_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDefinitionBlockIndex ;
  public: inline GGS_uint readProperty_mDefinitionBlockIndex (void) const {
    return mProperty_mDefinitionBlockIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForBlockOptimization_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionBlockIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionBlockIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForBlockOptimization_2E_element (const GGS_lstring & in_lkey,
                                                          const GGS_uint & in_mDefinitionBlockIndex) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForBlockOptimization_2E_element (const GGS_symbolTableForBlockOptimization_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForBlockOptimization_2E_element & operator = (const GGS_symbolTableForBlockOptimization_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForBlockOptimization_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForBlockOptimization_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForBlockOptimization.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForBlockOptimization_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForBlockOptimization_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForBlockOptimization_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForBlockOptimization_2E_element_3F_ (const GGS_symbolTableForBlockOptimization_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForBlockOptimization_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForBlockOptimization_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForBlockOptimization_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForClusterOrdering map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForClusterOrdering final {

  public: DownEnumerator_symbolTableForClusterOrdering (const class GGS_symbolTableForClusterOrdering & inMap) ;

  public: ~ DownEnumerator_symbolTableForClusterOrdering (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mCluster (LOCATION_ARGS) const ;

  public: class GGS_symbolTableForClusterOrdering_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_symbolTableForClusterOrdering (const DownEnumerator_symbolTableForClusterOrdering &) = delete ;
  private: DownEnumerator_symbolTableForClusterOrdering & operator = (const DownEnumerator_symbolTableForClusterOrdering &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForClusterOrdering final {
  public: UpEnumerator_symbolTableForClusterOrdering (const class GGS_symbolTableForClusterOrdering & inMap)  ;

  public: ~ UpEnumerator_symbolTableForClusterOrdering (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mCluster (LOCATION_ARGS) const ;
  public: class GGS_symbolTableForClusterOrdering_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_symbolTableForClusterOrdering (const UpEnumerator_symbolTableForClusterOrdering &) = delete ;
  private: UpEnumerator_symbolTableForClusterOrdering & operator = (const UpEnumerator_symbolTableForClusterOrdering &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_symbolTableForClusterOrdering (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_symbolTableForClusterOrdering (void) ;

//--- Handle copy
  public: GGS_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inSource) ;
  public: GGS_symbolTableForClusterOrdering & operator = (const GGS_symbolTableForClusterOrdering & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_symbolTableForClusterOrdering_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForClusterOrdering init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForClusterOrdering extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForClusterOrdering class_func_mapWithMapToOverride (const class GGS_symbolTableForClusterOrdering & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMClusterForKey (class GGS_uint constinArgument0,
                                         class GGS_string constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mClusterForKey (const class GGS_string & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_symbolTableForClusterOrdering getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_symbolTableForClusterOrdering_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForClusterOrdering ;
  friend class DownEnumerator_symbolTableForClusterOrdering ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForClusterOrdering_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mCluster ;
  public: inline GGS_uint readProperty_mCluster (void) const {
    return mProperty_mCluster ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForClusterOrdering_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCluster (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCluster = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForClusterOrdering_2E_element (const GGS_lstring & in_lkey,
                                                        const GGS_uint & in_mCluster) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForClusterOrdering_2E_element (const GGS_symbolTableForClusterOrdering_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForClusterOrdering_2E_element & operator = (const GGS_symbolTableForClusterOrdering_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForClusterOrdering_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForClusterOrdering_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForClusterOrdering.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForClusterOrdering_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForClusterOrdering_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForClusterOrdering_2E_element_3F_ (const GGS_symbolTableForClusterOrdering_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForClusterOrdering_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForClusterOrdering_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForClusterOrdering_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_stringlist mProperty_mList ;
  public: inline GGS_stringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMapDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchOverflowMapDictionary_2E_element (const GGS_string & in_key,
                                                      const GGS_stringlist & in_mList) ;

//--------------------------------- Copy constructor
  public: GGS_branchOverflowMapDictionary_2E_element (const GGS_branchOverflowMapDictionary_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchOverflowMapDictionary_2E_element & operator = (const GGS_branchOverflowMapDictionary_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchOverflowMapDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                          const class GGS_stringlist & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMapDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: branchOverflowMapDictionary.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_branchOverflowMapDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMapDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_branchOverflowMapDictionary_2E_element_3F_ (const GGS_branchOverflowMapDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_branchOverflowMapDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_branchOverflowMapDictionary_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMapDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_branchOverflowMapDictionary final {
  public: DownEnumerator_branchOverflowMapDictionary (const class GGS_branchOverflowMapDictionary & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_stringlist current_mList (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_branchOverflowMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_branchOverflowMapDictionary (const DownEnumerator_branchOverflowMapDictionary &) = delete ;
  private: DownEnumerator_branchOverflowMapDictionary & operator = (const DownEnumerator_branchOverflowMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_branchOverflowMapDictionary final {
  public: UpEnumerator_branchOverflowMapDictionary (const class GGS_branchOverflowMapDictionary & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mList (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchOverflowMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_branchOverflowMapDictionary (const UpEnumerator_branchOverflowMapDictionary &) = delete ;
  private: UpEnumerator_branchOverflowMapDictionary & operator = (const UpEnumerator_branchOverflowMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary dict
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary final : public GenericDictionary <GGS_string, GGS_branchOverflowMapDictionary_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_branchOverflowMapDictionary (void) = default ;

//--------------------------------- Build
  protected: static GGS_branchOverflowMapDictionary builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchOverflowMapDictionary init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMapDictionary extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_stringlist & inOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_branchOverflowMapDictionary_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string constinArgument0,
                              class GGS_stringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_string constinArgument0,
                                 class GGS_stringlist & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMListForKey (class GGS_stringlist constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_string constinArgument0,
                                 class GGS_stringlist & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_mListForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_branchOverflowMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_branchOverflowMapDictionary ;
  friend class DownEnumerator_branchOverflowMapDictionary ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMap struct
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_branchOverflowMapDictionary mProperty_dictionary ;
  public: inline GGS_branchOverflowMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_branchOverflowMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchOverflowMap (const GGS_branchOverflowMapDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_branchOverflowMap (const GGS_branchOverflowMap & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchOverflowMap & operator = (const GGS_branchOverflowMap & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchOverflowMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@branchOverflowMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_stringlist extensionGetter_listForKey (const class GGS_branchOverflowMap & inObject,
                                                 const class GGS_string & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForRelativesResolution map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForRelativesResolution final {

  public: DownEnumerator_symbolTableForRelativesResolution (const class GGS_symbolTableForRelativesResolution & inMap) ;

  public: ~ DownEnumerator_symbolTableForRelativesResolution (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mLabelAddress (LOCATION_ARGS) const ;

  public: class GGS_symbolTableForRelativesResolution_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_symbolTableForRelativesResolution (const DownEnumerator_symbolTableForRelativesResolution &) = delete ;
  private: DownEnumerator_symbolTableForRelativesResolution & operator = (const DownEnumerator_symbolTableForRelativesResolution &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForRelativesResolution final {
  public: UpEnumerator_symbolTableForRelativesResolution (const class GGS_symbolTableForRelativesResolution & inMap)  ;

  public: ~ UpEnumerator_symbolTableForRelativesResolution (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLabelAddress (LOCATION_ARGS) const ;
  public: class GGS_symbolTableForRelativesResolution_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_symbolTableForRelativesResolution (const UpEnumerator_symbolTableForRelativesResolution &) = delete ;
  private: UpEnumerator_symbolTableForRelativesResolution & operator = (const UpEnumerator_symbolTableForRelativesResolution &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_symbolTableForRelativesResolution (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_symbolTableForRelativesResolution (void) ;

//--- Handle copy
  public: GGS_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inSource) ;
  public: GGS_symbolTableForRelativesResolution & operator = (const GGS_symbolTableForRelativesResolution & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_symbolTableForRelativesResolution_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForRelativesResolution init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForRelativesResolution extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForRelativesResolution class_func_mapWithMapToOverride (const class GGS_symbolTableForRelativesResolution & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelAddressForKey (class GGS_uint constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mLabelAddressForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_symbolTableForRelativesResolution getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_symbolTableForRelativesResolution_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForRelativesResolution ;
  friend class DownEnumerator_symbolTableForRelativesResolution ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForRelativesResolution_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mLabelAddress ;
  public: inline GGS_uint readProperty_mLabelAddress (void) const {
    return mProperty_mLabelAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForRelativesResolution_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForRelativesResolution_2E_element (const GGS_lstring & in_lkey,
                                                            const GGS_uint & in_mLabelAddress) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForRelativesResolution_2E_element (const GGS_symbolTableForRelativesResolution_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForRelativesResolution_2E_element & operator = (const GGS_symbolTableForRelativesResolution_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForRelativesResolution_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_uint & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForRelativesResolution_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForRelativesResolution.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForRelativesResolution_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForRelativesResolution_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForRelativesResolution_2E_element_3F_ (const GGS_symbolTableForRelativesResolution_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForRelativesResolution_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForRelativesResolution_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForRelativesResolution_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @codeList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_codeList final {
  public: DownEnumerator_codeList (const class GGS_codeList & inList) ;

  public: ~ DownEnumerator_codeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_codeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_codeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_codeList (const DownEnumerator_codeList &) = delete ;
  private: DownEnumerator_codeList & operator = (const DownEnumerator_codeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_codeList final {
  public: UpEnumerator_codeList (const class GGS_codeList & inList)  ;

  public: ~ UpEnumerator_codeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_codeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_codeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_codeList (const UpEnumerator_codeList &) = delete ;
  private: UpEnumerator_codeList & operator = (const UpEnumerator_codeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @codeList list
//--------------------------------------------------------------------------------------------------

class GGS_codeList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_codeList_2E_element> mArray ;

//--- Default constructor
  public: GGS_codeList (void) ;

//--- Destructor
  public: virtual ~ GGS_codeList (void) = default ;

//--- Copy
  public: GGS_codeList (const GGS_codeList &) = default ;
  public: GGS_codeList & operator = (const GGS_codeList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_codeList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_codeList subList (const int32_t inStart,
                                 const int32_t inLength,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_codeList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mAssemblyCode,
                                                 const class GGS_uintlist & in_mBinaryCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_codeList init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_codeList extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_codeList class_func_listWithValue (const class GGS_string & inOperand0,
                                                              const class GGS_uintlist & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_codeList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_uintlist & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_codeList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_codeList add_operation (const GGS_codeList & inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_uintlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_uintlist constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_uintlist & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_uintlist & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_uintlist & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAssemblyCodeAtIndex (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMBinaryCodeAtIndex (class GGS_uintlist constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_uintlist & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_uintlist & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mAssemblyCodeAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_uintlist getter_mBinaryCodeAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_codeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_codeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_codeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_codeList ;
  friend class DownEnumerator_codeList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @codeList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_codeList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyCode ;
  public: inline GGS_string readProperty_mAssemblyCode (void) const {
    return mProperty_mAssemblyCode ;
  }

  public: GGS_uintlist mProperty_mBinaryCode ;
  public: inline GGS_uintlist readProperty_mBinaryCode (void) const {
    return mProperty_mBinaryCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_codeList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyCode (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyCode = inValue ;
  }

  public: inline void setter_setMBinaryCode (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBinaryCode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_codeList_2E_element (const GGS_string & in_mAssemblyCode,
                                   const GGS_uintlist & in_mBinaryCode) ;

//--------------------------------- Copy constructor
  public: GGS_codeList_2E_element (const GGS_codeList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_codeList_2E_element & operator = (const GGS_codeList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_codeList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                       const class GGS_uintlist & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_codeList_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38__5F_dataAddressMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38__5F_dataAddressMap final {

  public: DownEnumerator_pic_31__38__5F_dataAddressMap (const class GGS_pic_31__38__5F_dataAddressMap & inMap) ;

  public: ~ DownEnumerator_pic_31__38__5F_dataAddressMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mDataAddress (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38__5F_dataAddressMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38__5F_dataAddressMap (const DownEnumerator_pic_31__38__5F_dataAddressMap &) = delete ;
  private: DownEnumerator_pic_31__38__5F_dataAddressMap & operator = (const DownEnumerator_pic_31__38__5F_dataAddressMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38__5F_dataAddressMap final {
  public: UpEnumerator_pic_31__38__5F_dataAddressMap (const class GGS_pic_31__38__5F_dataAddressMap & inMap)  ;

  public: ~ UpEnumerator_pic_31__38__5F_dataAddressMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDataAddress (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38__5F_dataAddressMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38__5F_dataAddressMap (const UpEnumerator_pic_31__38__5F_dataAddressMap &) = delete ;
  private: UpEnumerator_pic_31__38__5F_dataAddressMap & operator = (const UpEnumerator_pic_31__38__5F_dataAddressMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataAddressMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_pic_31__38__5F_dataAddressMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_pic_31__38__5F_dataAddressMap (void) ;

//--- Handle copy
  public: GGS_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inSource) ;
  public: GGS_pic_31__38__5F_dataAddressMap & operator = (const GGS_pic_31__38__5F_dataAddressMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_pic_31__38__5F_dataAddressMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38__5F_dataAddressMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38__5F_dataAddressMap extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38__5F_dataAddressMap class_func_mapWithMapToOverride (const class GGS_pic_31__38__5F_dataAddressMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDataAddressForKey (class GGS_uint constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mDataAddressForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38__5F_dataAddressMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38__5F_dataAddressMap ;
  friend class DownEnumerator_pic_31__38__5F_dataAddressMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38__5F_dataAddressMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataAddressMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDataAddress ;
  public: inline GGS_uint readProperty_mDataAddress (void) const {
    return mProperty_mDataAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38__5F_dataAddressMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDataAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38__5F_dataAddressMap_2E_element (const GGS_lstring & in_lkey,
                                                        const GGS_uint & in_mDataAddress) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38__5F_dataAddressMap_2E_element (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38__5F_dataAddressMap_2E_element & operator = (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38__5F_dataAddressMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38__5F_dataAddressMap_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: pic18_dataAddressMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_pic_31__38__5F_dataAddressMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_pic_31__38__5F_dataAddressMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction (const class cPtr_baseline_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_init_21_ (const class GGS_location & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction (const GGS_location & in_mInstructionLocation,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_2E_weak (const class GGS_baseline_5F_instruction & inSource) ;

  public: GGS_baseline_5F_instruction_2E_weak & operator = (const class GGS_baseline_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction bang_baseline_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_instructionList final {
  public: DownEnumerator_baseline_5F_instructionList (const class GGS_baseline_5F_instructionList & inList) ;

  public: ~ DownEnumerator_baseline_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_instructionList (const DownEnumerator_baseline_5F_instructionList &) = delete ;
  private: DownEnumerator_baseline_5F_instructionList & operator = (const DownEnumerator_baseline_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_instructionList final {
  public: UpEnumerator_baseline_5F_instructionList (const class GGS_baseline_5F_instructionList & inList)  ;

  public: ~ UpEnumerator_baseline_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_instructionList (const UpEnumerator_baseline_5F_instructionList &) = delete ;
  private: UpEnumerator_baseline_5F_instructionList & operator = (const UpEnumerator_baseline_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @baseline_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_baseline_5F_instructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_baseline_5F_instructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_baseline_5F_instructionList (void) = default ;

//--- Copy
  public: GGS_baseline_5F_instructionList (const GGS_baseline_5F_instructionList &) = default ;
  public: GGS_baseline_5F_instructionList & operator = (const GGS_baseline_5F_instructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_baseline_5F_instructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_baseline_5F_instructionList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_baseline_5F_instructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instructionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instructionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instructionList class_func_listWithValue (const class GGS_baseline_5F_instruction & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_baseline_5F_instructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_baseline_5F_instruction & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_baseline_5F_instructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_baseline_5F_instructionList add_operation (const GGS_baseline_5F_instructionList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_baseline_5F_instruction constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_baseline_5F_instruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_baseline_5F_instruction & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_baseline_5F_instruction & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_baseline_5F_instruction & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_baseline_5F_instruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_baseline_5F_instruction & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_baseline_5F_instruction & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_instructionList ;
  friend class DownEnumerator_baseline_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_instruction mProperty_mInstruction ;
  public: inline GGS_baseline_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_baseline_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_instructionList_2E_element (const GGS_baseline_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_instructionList_2E_element (const GGS_baseline_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_instructionList_2E_element & operator = (const GGS_baseline_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instructionList_2E_element init_21_ (const class GGS_baseline_5F_instruction & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FD : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_FD (const class cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FD : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bool & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                              const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bool & in_m_5F_W_5F_isDestination,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FD_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_FD_2E_weak (const class GGS_baseline_5F_instruction_5F_FD & inSource) ;

  public: GGS_baseline_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_FD bang_baseline_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_FD unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_F : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_F (const class cPtr_baseline_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                    const class GGS_registerExpression & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_F : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                              const class GGS_registerExpression & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                             const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GGS_registerExpression & in_mRegisterExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_F_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_F_2E_weak (const class GGS_baseline_5F_instruction_5F_F & inSource) ;

  public: GGS_baseline_5F_instruction_5F_F_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_F bang_baseline_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_F unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FB : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_FB (const class cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FB : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bitNumberExpression & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                              const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bitNumberExpression & in_mBitNumber,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FB_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_FB_2E_weak (const class GGS_baseline_5F_instruction_5F_FB & inSource) ;

  public: GGS_baseline_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_FB bang_baseline_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_FB unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_CALL : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_CALL (const class cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_CALL extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_CALL : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_CALL_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_CALL_2E_weak (const class GGS_baseline_5F_instruction_5F_CALL & inSource) ;

  public: GGS_baseline_5F_instruction_5F_CALL_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_CALL_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_CALL bang_baseline_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_CALL unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JSR : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_JSR (const class cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_JSR init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_JSR extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JSR : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_JSR_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JSR_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_JSR_2E_weak (const class GGS_baseline_5F_instruction_5F_JSR & inSource) ;

  public: GGS_baseline_5F_instruction_5F_JSR_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_JSR_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_JSR bang_baseline_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_JSR unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_GOTO : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_GOTO (const class cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_GOTO extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_GOTO : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_GOTO_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_GOTO_2E_weak (const class GGS_baseline_5F_instruction_5F_GOTO & inSource) ;

  public: GGS_baseline_5F_instruction_5F_GOTO_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_GOTO_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_GOTO bang_baseline_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_GOTO unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JUMP : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_JUMP (const class cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_JUMP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_JUMP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JUMP : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_JUMP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JUMP_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_JUMP_2E_weak (const class GGS_baseline_5F_instruction_5F_JUMP & inSource) ;

  public: GGS_baseline_5F_instruction_5F_JUMP_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_JUMP_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_JUMP bang_baseline_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_JUMP unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND init_21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                      Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                         const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (const class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) ;

  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND bang_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_TRIS : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_TRIS (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_TRIS (const class cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_TRIS init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_TRIS extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_TRIS class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_TRIS : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_TRIS_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOperand ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_TRIS_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_TRIS_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_TRIS_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_TRIS_2E_weak (const class GGS_baseline_5F_instruction_5F_TRIS & inSource) ;

  public: GGS_baseline_5F_instruction_5F_TRIS_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_TRIS & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_TRIS_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_TRIS_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_TRIS bang_baseline_5F_instruction_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_TRIS unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_TRIS_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_TRIS_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_TRIS_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_literalOperation : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                   const class GGS_immediatExpression & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                             const class GGS_immediatExpression & inOperand2,
                                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                            const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                            const GGS_immediatExpression & in_mImmediatExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_literalOperation_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (const class GGS_baseline_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_literalOperation bang_baseline_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_MNOP : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_MNOP (const class cPtr_baseline_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_luint & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_MNOP : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_luint & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                const GGS_luint & in_mOccurrenceFactor,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_MNOP_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_MNOP_2E_weak (const class GGS_baseline_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_baseline_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_MNOP bang_baseline_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_MNOP unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FOREVER : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_FOREVER (const class cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_FOREVER init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_baseline_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FOREVER extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FOREVER : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_baseline_5F_instructionList & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                   const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                   const GGS_location & in_mEndOfInstructionList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FOREVER_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FOREVER_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (const class GGS_baseline_5F_instruction_5F_FOREVER & inSource) ;

  public: GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_FOREVER & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_FOREVER_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_FOREVER_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_FOREVER bang_baseline_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_FOREVER unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_FOREVER_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FOREVER_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_lstring & inOperand1,
                                                                                               const class GGS_immediatExpression & inOperand2,
                                                                                               const class GGS_immediatExpression & inOperand3,
                                                                                               const class GGS_baseline_5F_instructionList & inOperand4,
                                                                                               const class GGS_location & inOperand5,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_immediatExpression & inOperand2,
                                                                                         const class GGS_immediatExpression & inOperand3,
                                                                                         const class GGS_baseline_5F_instructionList & inOperand4,
                                                                                         const class GGS_location & inOperand5,
                                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GGS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mLowerBoundExpression,
                                                            const GGS_immediatExpression & in_mUpperBoundExpression,
                                                            const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction readProperty_mInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instruction & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_baseline_5F_instruction & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                               const GGS_baseline_5F_instruction & in_mInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON bang_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_BitTest : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_IF_5F_BitTest init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_baseline_5F_instruction & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_registerExpression & inOperand3,
                                                                                        const class GGS_bitNumberExpression & inOperand4,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_BitTest extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instruction & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_registerExpression & inOperand3,
                                                                                  const class GGS_bitNumberExpression & inOperand4,
                                                                                  Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getBaseCode
  public: virtual void method_getBaseCode (class GGS_uint & arg_outBaseCode,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getMnemonic
  public: virtual void method_getMnemonic (class GGS_string & arg_outMnemonic,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                         const GGS_baseline_5F_instruction & in_mInstruction,
                                                         const GGS_bool & in_mSkipIfSet,
                                                         const GGS_registerExpression & in_mRegisterExpression,
                                                         const GGS_bitNumberExpression & in_mBitNumber,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (const class GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest bang_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_IncDec : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec (const class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_IF_5F_IncDec init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_baseline_5F_instruction & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_registerExpression & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_IncDec extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_baseline_5F_instruction & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_registerExpression & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                        const GGS_baseline_5F_instruction & in_mInstruction,
                                                        const GGS_bool & in_mIncrement,
                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (const class GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec bang_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_conditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_conditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_conditionExpression (const class cPtr_baseline_5F_conditionExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_conditionExpression init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_conditionExpression extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_conditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_conditionExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_conditionExpression : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_conditionExpression_init (Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_conditionExpression (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_conditionExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_conditionExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_conditionExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_conditionExpression_2E_weak (const class GGS_baseline_5F_conditionExpression & inSource) ;

  public: GGS_baseline_5F_conditionExpression_2E_weak & operator = (const class GGS_baseline_5F_conditionExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_conditionExpression_2E_weak init_nil (void) {
    GGS_baseline_5F_conditionExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_conditionExpression bang_baseline_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_conditionExpression unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_conditionExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_conditionExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_conditionExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_incDecRegisterInCondition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_incDecRegisterInCondition init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_incDecRegisterInCondition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_incDecRegisterInCondition_init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                           const class GGS_bool & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_bool & inOperand3,
                                                                           Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_baseline_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_incDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                      const GGS_bool & in_mIncrement,
                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                      const GGS_bool & in_mBranchIfZero,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_incDecRegisterInCondition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_incDecRegisterInCondition_2E_weak (const class GGS_baseline_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_baseline_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_baseline_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_incDecRegisterInCondition bang_baseline_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_incDecRegisterInCondition unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_negateCondition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_negateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_negateCondition (const class cPtr_baseline_5F_negateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_conditionExpression readProperty_mCondition (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_negateCondition init_21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_negateCondition extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_negateCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_negateCondition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_negateCondition_init_21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mCondition ;


//--- Default constructor
  public: cPtr_baseline_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_negateCondition (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_negateCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_negateCondition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_negateCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_negateCondition_2E_weak (const class GGS_baseline_5F_negateCondition & inSource) ;

  public: GGS_baseline_5F_negateCondition_2E_weak & operator = (const class GGS_baseline_5F_negateCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_negateCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_negateCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_negateCondition bang_baseline_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_negateCondition unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_negateCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_negateCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_negateCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_andCondition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_andCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_andCondition (const class cPtr_baseline_5F_andCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_conditionExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_baseline_5F_conditionExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_andCondition init_21__21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                            const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_andCondition extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_andCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_andCondition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_andCondition_init_21__21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                      const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mLeftExpression ;
  public: GGS_baseline_5F_conditionExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_baseline_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_andCondition (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                         const GGS_baseline_5F_conditionExpression & in_mRightExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_andCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_andCondition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_andCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_andCondition_2E_weak (const class GGS_baseline_5F_andCondition & inSource) ;

  public: GGS_baseline_5F_andCondition_2E_weak & operator = (const class GGS_baseline_5F_andCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_andCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_andCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_andCondition bang_baseline_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_andCondition unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_andCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_andCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_andCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                              const class GGS_bitNumberExpression & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                        const class GGS_bitNumberExpression & inOperand1,
                                                                                        Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GGS_registerExpression & in_mRegisterExpression,
                                                                           const GGS_bitNumberExpression & in_mBitNumber,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & operator = (const class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak init_nil (void) {
    GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_structured_5F_if : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_structured_5F_if (const class cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_conditionExpression readProperty_mIfCondition (void) const ;

  public: class GGS_baseline_5F_instructionList readProperty_mThenInstructionList (void) const ;

  public: class GGS_baseline_5F_instructionList readProperty_mElseInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfElsePartLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_structured_5F_if init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                                                           const class GGS_baseline_5F_instructionList & inOperand2,
                                                                                           const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                           const class GGS_location & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_structured_5F_if extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_structured_5F_if : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                                                     const class GGS_baseline_5F_instructionList & inOperand2,
                                                                                     const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                     const class GGS_location & inOperand4,
                                                                                     Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mIfCondition ;
  public: GGS_baseline_5F_instructionList mProperty_mThenInstructionList ;
  public: GGS_baseline_5F_instructionList mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElsePartLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                            const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                            const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                            const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                            const GGS_location & in_mEndOfElsePartLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_structured_5F_if_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (const class GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) ;

  public: GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_structured_5F_if bang_baseline_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_structured_5F_if unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_partList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_partList final {
  public: DownEnumerator_baseline_5F_partList (const class GGS_baseline_5F_partList & inList) ;

  public: ~ DownEnumerator_baseline_5F_partList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_partList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_partList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_partList (const DownEnumerator_baseline_5F_partList &) = delete ;
  private: DownEnumerator_baseline_5F_partList & operator = (const DownEnumerator_baseline_5F_partList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_partList final {
  public: UpEnumerator_baseline_5F_partList (const class GGS_baseline_5F_partList & inList)  ;

  public: ~ UpEnumerator_baseline_5F_partList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_partList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_partList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_partList (const UpEnumerator_baseline_5F_partList &) = delete ;
  private: UpEnumerator_baseline_5F_partList & operator = (const UpEnumerator_baseline_5F_partList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @baseline_partList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_partList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_baseline_5F_partList_2E_element> mArray ;

//--- Default constructor
  public: GGS_baseline_5F_partList (void) ;

//--- Destructor
  public: virtual ~ GGS_baseline_5F_partList (void) = default ;

//--- Copy
  public: GGS_baseline_5F_partList (const GGS_baseline_5F_partList &) = default ;
  public: GGS_baseline_5F_partList & operator = (const GGS_baseline_5F_partList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_baseline_5F_partList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_baseline_5F_partList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_baseline_5F_partList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_conditionExpression & in_mCondition,
                                                 const class GGS_baseline_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_partList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_partList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_partList class_func_listWithValue (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                          const class GGS_baseline_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_baseline_5F_partList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                   const class GGS_baseline_5F_instructionList & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_baseline_5F_partList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_baseline_5F_partList add_operation (const GGS_baseline_5F_partList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_baseline_5F_conditionExpression constinArgument0,
                              class GGS_baseline_5F_instructionList constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_baseline_5F_conditionExpression constinArgument0,
                                     class GGS_baseline_5F_instructionList constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_baseline_5F_conditionExpression & outArgument0,
                                class GGS_baseline_5F_instructionList & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_baseline_5F_conditionExpression & outArgument0,
                               class GGS_baseline_5F_instructionList & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_baseline_5F_conditionExpression & outArgument0,
                                     class GGS_baseline_5F_instructionList & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMConditionAtIndex (class GGS_baseline_5F_conditionExpression constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfPartLocationAtIndex (class GGS_location constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_baseline_5F_instructionList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_baseline_5F_conditionExpression & outArgument0,
                             class GGS_baseline_5F_instructionList & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_baseline_5F_conditionExpression & outArgument0,
                            class GGS_baseline_5F_instructionList & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_conditionExpression getter_mConditionAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfPartLocationAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_partList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_partList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_partList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_partList ;
  friend class DownEnumerator_baseline_5F_partList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_partList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_partList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_partList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mCondition ;
  public: inline GGS_baseline_5F_conditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfPartLocation ;
  public: inline GGS_location readProperty_mEndOfPartLocation (void) const {
    return mProperty_mEndOfPartLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_partList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GGS_baseline_5F_conditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_baseline_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_partList_2E_element (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                               const GGS_baseline_5F_instructionList & in_mInstructionList,
                                               const GGS_location & in_mEndOfPartLocation) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_partList_2E_element (const GGS_baseline_5F_partList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_partList_2E_element & operator = (const GGS_baseline_5F_partList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_partList_2E_element init_21__21__21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                       const class GGS_baseline_5F_instructionList & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_partList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_partList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_do_5F_while : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_do_5F_while (const class cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructionList (void) const ;

  public: class GGS_baseline_5F_partList readProperty_mWhilePartList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_do_5F_while init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instructionList & inOperand1,
                                                                                  const class GGS_location & inOperand2,
                                                                                  const class GGS_baseline_5F_partList & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_do_5F_while extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_do_while class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_do_5F_while : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_baseline_5F_instructionList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_baseline_5F_partList & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GGS_baseline_5F_partList mProperty_mWhilePartList ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                       const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                       const GGS_location & in_mEndOfRepeatedInstructionList,
                                                       const GGS_baseline_5F_partList & in_mWhilePartList,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_do_5F_while_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (const class GGS_baseline_5F_instruction_5F_do_5F_while & inSource) ;

  public: GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_do_5F_while bang_baseline_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_instruction_5F_do_5F_while unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_routineDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_routineDefinitionList final {
  public: DownEnumerator_baseline_5F_routineDefinitionList (const class GGS_baseline_5F_routineDefinitionList & inList) ;

  public: ~ DownEnumerator_baseline_5F_routineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_routineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_routineDefinitionList (const DownEnumerator_baseline_5F_routineDefinitionList &) = delete ;
  private: DownEnumerator_baseline_5F_routineDefinitionList & operator = (const DownEnumerator_baseline_5F_routineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_routineDefinitionList final {
  public: UpEnumerator_baseline_5F_routineDefinitionList (const class GGS_baseline_5F_routineDefinitionList & inList)  ;

  public: ~ UpEnumerator_baseline_5F_routineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_routineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_routineDefinitionList (const UpEnumerator_baseline_5F_routineDefinitionList &) = delete ;
  private: UpEnumerator_baseline_5F_routineDefinitionList & operator = (const UpEnumerator_baseline_5F_routineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @baseline_routineDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_routineDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_baseline_5F_routineDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_baseline_5F_routineDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_baseline_5F_routineDefinitionList (void) = default ;

//--- Copy
  public: GGS_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList &) = default ;
  public: GGS_baseline_5F_routineDefinitionList & operator = (const GGS_baseline_5F_routineDefinitionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_baseline_5F_routineDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_baseline_5F_routineDefinitionList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_baseline_5F_routineDefinitionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mPage,
                                                 const class GGS_bool & in_mIsNoReturn,
                                                 const class GGS_baseline_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_routineDefinitionList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_routineDefinitionList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_routineDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                       const class GGS_location & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_baseline_5F_routineDefinitionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_luint & inOperand1,
                                   const class GGS_bool & inOperand2,
                                   const class GGS_baseline_5F_instructionList & inOperand3,
                                   const class GGS_location & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_baseline_5F_routineDefinitionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_baseline_5F_routineDefinitionList add_operation (const GGS_baseline_5F_routineDefinitionList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_luint constinArgument1,
                              class GGS_bool constinArgument2,
                              class GGS_baseline_5F_instructionList constinArgument3,
                              class GGS_location constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_luint constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_baseline_5F_instructionList constinArgument3,
                                     class GGS_location constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_luint & outArgument1,
                                class GGS_bool & outArgument2,
                                class GGS_baseline_5F_instructionList & outArgument3,
                                class GGS_location & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_luint & outArgument1,
                               class GGS_bool & outArgument2,
                               class GGS_baseline_5F_instructionList & outArgument3,
                               class GGS_location & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_luint & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_baseline_5F_instructionList & outArgument3,
                                     class GGS_location & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_baseline_5F_instructionList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMPageAtIndex (class GGS_luint constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineNameAtIndex (class GGS_lstring constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_luint & outArgument1,
                             class GGS_bool & outArgument2,
                             class GGS_baseline_5F_instructionList & outArgument3,
                             class GGS_location & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_luint & outArgument1,
                            class GGS_bool & outArgument2,
                            class GGS_baseline_5F_instructionList & outArgument3,
                            class GGS_location & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mPageAtIndex (const class GGS_uint & constinOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRoutineNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_routineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_routineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_routineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_routineDefinitionList ;
  friend class DownEnumerator_baseline_5F_routineDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_routineDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_routineDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: inline GGS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GGS_luint mProperty_mPage ;
  public: inline GGS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfRoutineLocation ;
  public: inline GGS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_routineDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMPage (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_baseline_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_lstring & in_mRoutineName,
                                                            const GGS_luint & in_mPage,
                                                            const GGS_bool & in_mIsNoReturn,
                                                            const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfRoutineLocation) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_routineDefinitionList_2E_element & operator = (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_routineDefinitionList_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_luint & inOperand1,
                                                                                            const class GGS_bool & inOperand2,
                                                                                            const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                            const class GGS_location & inOperand4,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_routineDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configFieldMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_configFieldMap final {

  public: DownEnumerator_configFieldMap (const class GGS_configFieldMap & inMap) ;

  public: ~ DownEnumerator_configFieldMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mRegisterName (LOCATION_ARGS) const ;

  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;

  public: class GGS_configFieldMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configFieldMap (const DownEnumerator_configFieldMap &) = delete ;
  private: DownEnumerator_configFieldMap & operator = (const DownEnumerator_configFieldMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configFieldMap final {
  public: UpEnumerator_configFieldMap (const class GGS_configFieldMap & inMap)  ;

  public: ~ UpEnumerator_configFieldMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
  public: class GGS_configFieldMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configFieldMap (const UpEnumerator_configFieldMap &) = delete ;
  private: UpEnumerator_configFieldMap & operator = (const UpEnumerator_configFieldMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_configFieldMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_configFieldMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_configFieldMap (void) ;

//--- Handle copy
  public: GGS_configFieldMap (const GGS_configFieldMap & inSource) ;
  public: GGS_configFieldMap & operator = (const GGS_configFieldMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_configFieldMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configFieldMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configFieldMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configFieldMap class_func_mapWithMapToOverride (const class GGS_configFieldMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_luint constinArgument2,
                                 class GGS_lstring constinArgument3,
                                 class GGS_fieldSettingMap constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDescriptionForKey (class GGS_lstring constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMFieldSettingMapForKey (class GGS_fieldSettingMap constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMMaskValueForKey (class GGS_luint constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterNameForKey (class GGS_lstring constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_luint & outArgument2,
                                 class GGS_lstring & outArgument3,
                                 class GGS_fieldSettingMap & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mDescriptionForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap getter_mFieldSettingMapForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mMaskValueForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRegisterNameForKey (const class GGS_string & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_configFieldMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_configFieldMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configFieldMap ;
  friend class DownEnumerator_configFieldMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configFieldMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configFieldMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mRegisterName ;
  public: inline GGS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GGS_luint mProperty_mMaskValue ;
  public: inline GGS_luint readProperty_mMaskValue (void) const {
    return mProperty_mMaskValue ;
  }

  public: GGS_lstring mProperty_mDescription ;
  public: inline GGS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

  public: GGS_fieldSettingMap mProperty_mFieldSettingMap ;
  public: inline GGS_fieldSettingMap readProperty_mFieldSettingMap (void) const {
    return mProperty_mFieldSettingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configFieldMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterName = inValue ;
  }

  public: inline void setter_setMMaskValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaskValue = inValue ;
  }

  public: inline void setter_setMDescription (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

  public: inline void setter_setMFieldSettingMap (const GGS_fieldSettingMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldSettingMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configFieldMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lstring & in_mRegisterName,
                                         const GGS_luint & in_mMaskValue,
                                         const GGS_lstring & in_mDescription,
                                         const GGS_fieldSettingMap & in_mFieldSettingMap) ;

//--------------------------------- Copy constructor
  public: GGS_configFieldMap_2E_element (const GGS_configFieldMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configFieldMap_2E_element & operator = (const GGS_configFieldMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configFieldMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_luint & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         const class GGS_fieldSettingMap & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configFieldMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: configFieldMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_configFieldMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_configFieldMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_configFieldMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_configFieldMap_2E_element_3F_ (const GGS_configFieldMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_configFieldMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_configFieldMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configFieldMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_conditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_conditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_conditionExpression (const class cPtr_midrange_5F_conditionExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_conditionExpression init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_conditionExpression extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_conditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_conditionExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_conditionExpression : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_conditionExpression_init (Compiler * inCompiler) ;


//--- Extension method buildIPICinstructionForCondition
  public: virtual void method_buildIPICinstructionForCondition (const class GGS_uint arg_inTotalBankCount,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method computeInstructionCountForCondition
  public: virtual void method_computeInstructionCountForCondition (const class GGS_bool arg_inComplementaryBranch,
           class GGS_uint & arg_outInstructionCount,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_midrange_5F_conditionExpression (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionCountForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                              const class GGS_bool constin_inComplementaryBranch,
                                                              class GGS_uint & out_outInstructionCount,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const class GGS_pic_31__38_MacroMap constin_inMacroMap,
                                          class GGS_stringset & io_ioUsedRoutines,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_MacroMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_MacroMap final {

  public: DownEnumerator_pic_31__38_MacroMap (const class GGS_pic_31__38_MacroMap & inMap) ;

  public: ~ DownEnumerator_pic_31__38_MacroMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_MacroMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_MacroMap (const DownEnumerator_pic_31__38_MacroMap &) = delete ;
  private: DownEnumerator_pic_31__38_MacroMap & operator = (const DownEnumerator_pic_31__38_MacroMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_MacroMap final {
  public: UpEnumerator_pic_31__38_MacroMap (const class GGS_pic_31__38_MacroMap & inMap)  ;

  public: ~ UpEnumerator_pic_31__38_MacroMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_MacroMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_MacroMap (const UpEnumerator_pic_31__38_MacroMap &) = delete ;
  private: UpEnumerator_pic_31__38_MacroMap & operator = (const UpEnumerator_pic_31__38_MacroMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_pic_31__38_MacroMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_pic_31__38_MacroMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_pic_31__38_MacroMap (void) ;

//--- Handle copy
  public: GGS_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inSource) ;
  public: GGS_pic_31__38_MacroMap & operator = (const GGS_pic_31__38_MacroMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_pic_31__38_MacroMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_MacroMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_MacroMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_MacroMap class_func_mapWithMapToOverride (const class GGS_pic_31__38_MacroMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstringlist constinArgument1,
                                 class GGS_pic_31__38_InstructionList constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMConstantNameListForKey (class GGS_lstringlist constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListForKey (class GGS_pic_31__38_InstructionList constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstringlist & outArgument1,
                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mConstantNameListForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_MacroMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_pic_31__38_MacroMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_MacroMap ;
  friend class DownEnumerator_pic_31__38_MacroMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInvocationGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_blockInvocationGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_blockInvocationGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInvocationGraph init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInvocationGraph extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_string inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS_stringlist & outArgument0,
                                     class GGS_lstringlist & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS_stringlist & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 class GGS_stringlist & outArgument2,
                                                 class GGS_lstringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS_stringlist & outArgument0,
                                              class GGS_lstringlist & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS_stringlist & outArgument0,
                                            class GGS_lstringlist & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS_stringlist & outArgument0,
                                       class GGS_lstringlist & outArgument1,
                                       class GGS_stringlist & outArgument2,
                                       class GGS_lstringlist & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                            const class GGS_stringset & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_blockInvocationGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_blockInvocationGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                   const class GGS_stringset & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInvocationGraph ;

