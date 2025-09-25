#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

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

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class_func_new (const class GGS_location & inOperand0,
                                                                                                      const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                      const class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDCFSNZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                      const class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                      const class GGS_bool & inOperand4,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: static class GGS_symbolTableForBlockOptimization class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_symbolTableForBlockOptimization class_func_mapWithMapToOverride (const class GGS_symbolTableForBlockOptimization & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionBlockIndexForKey (class GGS_uint constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mDefinitionBlockIndexForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForBlockOptimization getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForBlockOptimization_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForBlockOptimization_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_uint & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: static class GGS_symbolTableForClusterOrdering class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_symbolTableForClusterOrdering class_func_mapWithMapToOverride (const class GGS_symbolTableForClusterOrdering & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClusterForKey (class GGS_uint constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mClusterForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForClusterOrdering getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForClusterOrdering_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForClusterOrdering_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_uint & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_branchOverflowMapDictionary_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                  const class GGS_stringlist & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_branchOverflowMapDictionary class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_stringlist & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_branchOverflowMapDictionary_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string constinArgument0,
                                               class GGS_stringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_string constinArgument0,
                                                  class GGS_stringlist & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMListForKey (class GGS_stringlist constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_string constinArgument0,
                                                  class GGS_stringlist & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mListForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_branchOverflowMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- GALGAS class functions
  public: static class GGS_branchOverflowMap class_func_new (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const class GGS_uint constin_inAddress,
                                                            const class GGS_string constin_inBlockLabel,
                                                            const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            class GGS_branchOverflowMap & io_ioOverflowMap,
                                                            Compiler * inCompiler
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
  public: static class GGS_symbolTableForRelativesResolution class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_symbolTableForRelativesResolution class_func_mapWithMapToOverride (const class GGS_symbolTableForRelativesResolution & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelAddressForKey (class GGS_uint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLabelAddressForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForRelativesResolution getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForRelativesResolution_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForRelativesResolution ;
  friend class DownEnumerator_symbolTableForRelativesResolution ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const class GGS_uint constin_inAddress,
                                                           const class GGS_string constin_inBlockLabel,
                                                           const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const class GGS_string constin_inNextBlockLabel,
                                                           class GGS_branchOverflowMap & io_ioOverflowMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const class GGS_uint constin_inAddress,
                                                                    const class GGS_string constin_inBlockLabel,
                                                                    const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const class GGS_string constin_inNextBlockLabel,
                                                                    class GGS_uint & io_ioConversionCount,
                                                                    class GGS_string & io_ioListFileContents,
                                                                    class GGS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForRelativesResolution_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_codeList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_codeList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_codeList class_func_listWithValue (const class GGS_string & inOperand0,
                                                              const class GGS_uintlist & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_codeList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_uintlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_codeList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_codeList add_operation (const GGS_codeList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_uintlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uintlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_uintlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_uintlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_uintlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssemblyCodeAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBinaryCodeAtIndex (class GGS_uintlist constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_uintlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_uintlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAssemblyCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mBinaryCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- GALGAS class functions
  public: static class GGS_codeList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                               const class GGS_uintlist & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: static class GGS_pic_31__38__5F_dataAddressMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38__5F_dataAddressMap class_func_mapWithMapToOverride (const class GGS_pic_31__38__5F_dataAddressMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataAddressForKey (class GGS_uint constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mDataAddressForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38__5F_dataAddressMap getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38__5F_dataAddressMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_uint & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SequentialInstruction generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const class GGS_uint constin_inAddress,
                                       const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const class GGS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       class GGS_codeList & out_outCode,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateTerminatorCode (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const class GGS_uint constin_inAddress,
                                                 const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GGS_string constin_inNextBlockLabel,
                                                 class GGS_codeList & out_outCode,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isEqualToTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const class GGS_ipic_31__38_AbstractBlockTerminator constin_inTerminator,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_terminatorDisplay (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const class GGS_string constin_inNextBlockLabel,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_terminatorSize (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GGS_string constin_inNextBlockLabel,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const class GGS_uint constin_inAddress,
                                                                     const class GGS_string constin_inBlockLabel,
                                                                     const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     class GGS_uint & io_ioConversionCount,
                                                                     class GGS_string & io_ioListFileContents,
                                                                     class GGS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringlist callExtensionGetter_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
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
// Phase 1: @declaredRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_declaredRoutineMap final {

  public: DownEnumerator_declaredRoutineMap (const class GGS_declaredRoutineMap & inMap) ;

  public: ~ DownEnumerator_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;

  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;

  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;

  public: class GGS_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_declaredRoutineMap (const DownEnumerator_declaredRoutineMap &) = delete ;
  private: DownEnumerator_declaredRoutineMap & operator = (const DownEnumerator_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declaredRoutineMap final {
  public: UpEnumerator_declaredRoutineMap (const class GGS_declaredRoutineMap & inMap)  ;

  public: ~ UpEnumerator_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_declaredRoutineMap (const UpEnumerator_declaredRoutineMap &) = delete ;
  private: UpEnumerator_declaredRoutineMap & operator = (const UpEnumerator_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_declaredRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_declaredRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_declaredRoutineMap (void) ;

//--- Handle copy
  public: GGS_declaredRoutineMap (const GGS_declaredRoutineMap & inSource) ;
  public: GGS_declaredRoutineMap & operator = (const GGS_declaredRoutineMap & inSource) ;

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
  protected: void performInsert (const class GGS_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declaredRoutineMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredRoutineMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declaredRoutineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_declaredRoutineMap class_func_mapWithMapToOverride (const class GGS_declaredRoutineMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint constinArgument1,
                                                  class GGS_luint constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  class GGS_pic_31__38_InstructionList constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankForKey (class GGS_luint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankForKey (class GGS_luint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint & outArgument1,
                                                  class GGS_luint & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  class GGS_bool & outArgument4,
                                                  class GGS_pic_31__38_InstructionList & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mPreservesBankForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRequiredBankForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mReturnedBankForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_declaredRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_declaredRoutineMap ;
  friend class DownEnumerator_declaredRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declaredRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_luint mProperty_mRequiredBank ;
  public: inline GGS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GGS_luint mProperty_mReturnedBank ;
  public: inline GGS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GGS_bool mProperty_mPreservesBank ;
  public: inline GGS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declaredRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_luint & in_mRequiredBank,
                                             const GGS_luint & in_mReturnedBank,
                                             const GGS_bool & in_mPreservesBank,
                                             const GGS_bool & in_mIsNoReturn,
                                             const GGS_pic_31__38_InstructionList & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_declaredRoutineMap_2E_element (const GGS_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declaredRoutineMap_2E_element & operator = (const GGS_declaredRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declaredRoutineMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_luint & inOperand1,
                                                                                 const class GGS_luint & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand5,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declaredRoutineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_luint & inOperand1,
                                                                         const class GGS_luint & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         const class GGS_bool & inOperand4,
                                                                         const class GGS_pic_31__38_InstructionList & inOperand5,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: declaredRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_declaredRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_declaredRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_declaredRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_declaredRoutineMap_2E_element_3F_ (const GGS_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_declaredRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_declaredRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_declaredRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@pic18PiccoloInstruction performInlining'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInlining (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const class GGS_stringset constin_inInlinedRoutineSet,
                                          const class GGS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const class GGS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          class GGS_pic_31__38_InstructionList & io_ioInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const class GGS_uint constin_inAccessBankSplitOffset,
                                                   const class GGS_routineMap constin_inRoutineMap,
                                                   const class GGS_registerTable constin_inRegisterTable,
                                                   const class GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const class GGS_constantMap constin_inConstantMap,
                                                   class GGS_uint & io_ioCurrentBank,
                                                   const class GGS_bool constin_inShouldPreserveBSR,
                                                   class GGS_stringset & io_ioUsedRegisters,
                                                   class GGS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const class GGS_uint constin_inAccessBankSplitOffset,
                                  class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const class GGS_routineMap constin_inRoutineMap,
                                  const class GGS_registerTable constin_inRegisterTable,
                                  const class GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const class GGS_constantMap constin_inConstantMap,
                                  const class GGS_pic_31__38_MacroMap constin_inMacroMap,
                                  class GGS_uint & io_ioLocalLabelIndex,
                                  class GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  class GGS_lstring & io_ioBlockLabel,
                                  class GGS_string & io_ioListFileContents,
                                  class GGS_uint & io_ioCurrentBank,
                                  const class GGS_bool constin_inShouldPreserveBSR,
                                  const class GGS_routineKind constin_inRoutineKind,
                                  class GGS_stringset & io_ioUsedRegisters,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInstructionBlockMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockInstructionBlockMap final {

  public: DownEnumerator_blockInstructionBlockMap (const class GGS_blockInstructionBlockMap & inMap) ;

  public: ~ DownEnumerator_blockInstructionBlockMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;

  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;

  public: class GGS_blockInstructionBlockMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockInstructionBlockMap (const DownEnumerator_blockInstructionBlockMap &) = delete ;
  private: DownEnumerator_blockInstructionBlockMap & operator = (const DownEnumerator_blockInstructionBlockMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockInstructionBlockMap final {
  public: UpEnumerator_blockInstructionBlockMap (const class GGS_blockInstructionBlockMap & inMap)  ;

  public: ~ UpEnumerator_blockInstructionBlockMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
  public: class GGS_blockInstructionBlockMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockInstructionBlockMap (const UpEnumerator_blockInstructionBlockMap &) = delete ;
  private: UpEnumerator_blockInstructionBlockMap & operator = (const UpEnumerator_blockInstructionBlockMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockInstructionBlockMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockInstructionBlockMap (void) ;

//--- Handle copy
  public: GGS_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inSource) ;
  public: GGS_blockInstructionBlockMap & operator = (const GGS_blockInstructionBlockMap & inSource) ;

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
  protected: void performInsert (const class GGS_blockInstructionBlockMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInstructionBlockMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInstructionBlockMap extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInstructionBlockMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_blockInstructionBlockMap class_func_mapWithMapToOverride (const class GGS_blockInstructionBlockMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_pic_31__38_InstructionList constinArgument1,
                                                  class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                  class GGS_location constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionForKey (class GGS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockForKey (class GGS_location constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_pic_31__38_InstructionList & outArgument1,
                                                  class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                  class GGS_location & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionForKey (const class GGS_string & constinOperand0,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfBlockForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_blockInstructionBlockMap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_blockInstructionBlockMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockInstructionBlockMap ;
  friend class DownEnumerator_blockInstructionBlockMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInstructionBlockMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: inline GGS_abstractBlockTerminationForBlockInstruction readProperty_mBlockTerminaisonForBlockInstruction (void) const {
    return mProperty_mBlockTerminaisonForBlockInstruction ;
  }

  public: GGS_location mProperty_mEndOfBlock ;
  public: inline GGS_location readProperty_mEndOfBlock (void) const {
    return mProperty_mEndOfBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockInstructionBlockMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMBlockTerminaisonForBlockInstruction (const GGS_abstractBlockTerminationForBlockInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
  }

  public: inline void setter_setMEndOfBlock (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockInstructionBlockMap_2E_element (const GGS_lstring & in_lkey,
                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                   const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                   const GGS_location & in_mEndOfBlock) ;

//--------------------------------- Copy constructor
  public: GGS_blockInstructionBlockMap_2E_element (const GGS_blockInstructionBlockMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockInstructionBlockMap_2E_element & operator = (const GGS_blockInstructionBlockMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInstructionBlockMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                               const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInstructionBlockMap_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInstructionBlockMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                               const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockInstructionBlockMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockInstructionBlockMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockInstructionBlockMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockInstructionBlockMap_2E_element_3F_ (const GGS_blockInstructionBlockMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockInstructionBlockMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockInstructionBlockMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_blockInstructionBlockMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInitialBankSelectionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockInitialBankSelectionMap final {

  public: DownEnumerator_blockInitialBankSelectionMap (const class GGS_blockInitialBankSelectionMap & inMap) ;

  public: ~ DownEnumerator_blockInitialBankSelectionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;

  public: class GGS_string current_mSourceBlock (LOCATION_ARGS) const ;

  public: class GGS_blockInitialBankSelectionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockInitialBankSelectionMap (const DownEnumerator_blockInitialBankSelectionMap &) = delete ;
  private: DownEnumerator_blockInitialBankSelectionMap & operator = (const DownEnumerator_blockInitialBankSelectionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockInitialBankSelectionMap final {
  public: UpEnumerator_blockInitialBankSelectionMap (const class GGS_blockInitialBankSelectionMap & inMap)  ;

  public: ~ UpEnumerator_blockInitialBankSelectionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public: class GGS_string current_mSourceBlock (LOCATION_ARGS) const ;
  public: class GGS_blockInitialBankSelectionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockInitialBankSelectionMap (const UpEnumerator_blockInitialBankSelectionMap &) = delete ;
  private: UpEnumerator_blockInitialBankSelectionMap & operator = (const UpEnumerator_blockInitialBankSelectionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockInitialBankSelectionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockInitialBankSelectionMap (void) ;

//--- Handle copy
  public: GGS_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inSource) ;
  public: GGS_blockInitialBankSelectionMap & operator = (const GGS_blockInitialBankSelectionMap & inSource) ;

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
  protected: void performInsert (const class GGS_blockInitialBankSelectionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInitialBankSelectionMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInitialBankSelectionMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInitialBankSelectionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_blockInitialBankSelectionMap class_func_mapWithMapToOverride (const class GGS_blockInitialBankSelectionMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialBankSelectionForKey (class GGS_uint constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceBlockForKey (class GGS_string constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mInitialBankSelectionForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSourceBlockForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_blockInitialBankSelectionMap getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_blockInitialBankSelectionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockInitialBankSelectionMap ;
  friend class DownEnumerator_blockInitialBankSelectionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInitialBankSelectionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mInitialBankSelection ;
  public: inline GGS_uint readProperty_mInitialBankSelection (void) const {
    return mProperty_mInitialBankSelection ;
  }

  public: GGS_string mProperty_mSourceBlock ;
  public: inline GGS_string readProperty_mSourceBlock (void) const {
    return mProperty_mSourceBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockInitialBankSelectionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialBankSelection (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialBankSelection = inValue ;
  }

  public: inline void setter_setMSourceBlock (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockInitialBankSelectionMap_2E_element (const GGS_lstring & in_lkey,
                                                       const GGS_uint & in_mInitialBankSelection,
                                                       const GGS_string & in_mSourceBlock) ;

//--------------------------------- Copy constructor
  public: GGS_blockInitialBankSelectionMap_2E_element (const GGS_blockInitialBankSelectionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockInitialBankSelectionMap_2E_element & operator = (const GGS_blockInitialBankSelectionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInitialBankSelectionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_uint & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInitialBankSelectionMap_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInitialBankSelectionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_uint & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockInitialBankSelectionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockInitialBankSelectionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockInitialBankSelectionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockInitialBankSelectionMap_2E_element_3F_ (const GGS_blockInitialBankSelectionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockInitialBankSelectionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockInitialBankSelectionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_blockInitialBankSelectionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           class GGS_stringset & io_ioVisitedBlockSet,
                                           const class GGS_blockInstructionBlockMap constin_inBlockMap,
                                           const class GGS_string constin_inCurrentBlockName,
                                           const class GGS_uint constin_inInitialBlockSetting,
                                           class GGS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           class GGS_bool & io_ioContinuesInSequence,
                                           class GGS_bool & io_ioContinueAccessibilityExploration,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const class GGS_uint constin_inAccessBankSplitOffset,
                                        const class GGS_uint constin_inCurrentBank,
                                        const class GGS_registerTable constin_inRegisterTable,
                                        const class GGS_constantMap constin_inConstantMap,
                                        class GGS_uint & io_ioLocalLabelIndex,
                                        class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        class GGS_stringset & io_ioUsedRegisters,
                                        const class GGS_string constin_inLabelForBlock,
                                        class GGS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (class cPtr_pic_31__38_ConditionExpression * inObject,
                                           const class GGS_uint constin_inAccessBankSplitOffset,
                                           const class GGS_uint constin_inCurrentBank,
                                           const class GGS_registerTable constin_inRegisterTable,
                                           const class GGS_constantMap constin_inConstantMap,
                                           class GGS_uint & io_ioLocalLabelIndex,
                                           class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const class GGS_lstring constin_inConditionTrueLabel,
                                           const class GGS_lstring constin_inConditionFalseLabel,
                                           class GGS_stringset & io_ioUsedRegisters,
                                           class GGS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                             const class GGS_string constin_inBlockLabel,
                                             class GGS_bool & io_ioOptimizationDone,
                                             class GGS_string & io_ioListFileContents,
                                             class GGS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optimizeFlagStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_optimizeFlagStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mRemoveEmptyRoutine ;
  public: inline GGS_bool readProperty_mRemoveEmptyRoutine (void) const {
    return mProperty_mRemoveEmptyRoutine ;
  }

  public: GGS_bool mProperty_mJSRtoRETLWreplacedByMOVLW ;
  public: inline GGS_bool readProperty_mJSRtoRETLWreplacedByMOVLW (void) const {
    return mProperty_mJSRtoRETLWreplacedByMOVLW ;
  }

  public: GGS_bool mProperty_mJSRfollowedByRETreplacedByJUMP ;
  public: inline GGS_bool readProperty_mJSRfollowedByRETreplacedByJUMP (void) const {
    return mProperty_mJSRfollowedByRETreplacedByJUMP ;
  }

  public: GGS_bool mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  public: inline GGS_bool readProperty_mMOVLWfollowedByRETreplacedByRETLW (void) const {
    return mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  }

  public: GGS_bool mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  public: inline GGS_bool readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (void) const {
    return mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  }

  public: GGS_bool mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  public: inline GGS_bool readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (void) const {
    return mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  }

  public: GGS_bool mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  public: inline GGS_bool readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (void) const {
    return mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optimizeFlagStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRemoveEmptyRoutine (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRemoveEmptyRoutine = inValue ;
  }

  public: inline void setter_setMJSRtoRETLWreplacedByMOVLW (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoRETLWreplacedByMOVLW = inValue ;
  }

  public: inline void setter_setMJSRfollowedByRETreplacedByJUMP (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRfollowedByRETreplacedByJUMP = inValue ;
  }

  public: inline void setter_setMMOVLWfollowedByRETreplacedByRETLW (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMOVLWfollowedByRETreplacedByRETLW = inValue ;
  }

  public: inline void setter_setMJSRtoOneInstructionRoutineReplacedByInstruction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction = inValue ;
  }

  public: inline void setter_setMJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction = inValue ;
  }

  public: inline void setter_setMJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optimizeFlagStruct (const GGS_bool & in_mRemoveEmptyRoutine,
                                  const GGS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                  const GGS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                  const GGS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                  const GGS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                  const GGS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                  const GGS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;

//--------------------------------- Copy constructor
  public: GGS_optimizeFlagStruct (const GGS_optimizeFlagStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optimizeFlagStruct & operator = (const GGS_optimizeFlagStruct & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optimizeFlagStruct init_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_bool & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_bool & inOperand3,
                                                                          const class GGS_bool & inOperand4,
                                                                          const class GGS_bool & inOperand5,
                                                                          const class GGS_bool & inOperand6,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optimizeFlagStruct extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optimizeFlagStruct class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_bool & inOperand2,
                                                              const class GGS_bool & inOperand3,
                                                              const class GGS_bool & inOperand4,
                                                              const class GGS_bool & inOperand5,
                                                              const class GGS_bool & inOperand6,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                  const class GGS_string constin_inBlockLabel,
                                                  class GGS_bool & io_ioOptimizationDone,
                                                  class GGS_string & io_ioListFileContents,
                                                  class GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  class GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  class GGS_bool & out_outIdenticalTerminators,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                          class GGS_stringset & io_ioReferencedBlockSet,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                           class GGS_stringset & io_ioReferencedBlockSet,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                              const class GGS_lstring constin_inBlockLabel,
                                              class GGS_bool & out_outOptimizationDone,
                                              class GGS_string & io_ioListFileContents,
                                              class GGS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              class GGS_bool & out_outNOPsubstitution,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const class GGS_ipic_31__38_SequentialInstructionList inObject,
                                                       const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                       const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                       class GGS_stringset & io_ioReferencedBlockSet,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@bool flagValue' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_flagValue (const class GGS_bool & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInvocationGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_string inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_stringlist & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_stringlist & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_stringlist & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_stringlist & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_stringlist & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_stringlist & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_stringlist & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_blockInvocationGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_blockInvocationGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                    const class GGS_stringset & constinOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInvocationGraph ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const class GGS_lstring constin_inBlockLabel,
                                                          class GGS_string & io_ioGraphVizString,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const class GGS_lstring constin_inBlockLabel,
                                                         class GGS_string & io_ioGraphVizString,
                                                         const class GGS_bool constin_inDottedArrow,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_needToInsertJumpInstruction (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                const class GGS_string constin_inNextBlockLabel,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const class GGS_lstring constin_inBlockLabel,
                                                      class GGS_blockInvocationGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @clusterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_clusterList final {
  public: DownEnumerator_clusterList (const class GGS_clusterList & inList) ;

  public: ~ DownEnumerator_clusterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_clusterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_clusterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_clusterList (const DownEnumerator_clusterList &) = delete ;
  private: DownEnumerator_clusterList & operator = (const DownEnumerator_clusterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_clusterList final {
  public: UpEnumerator_clusterList (const class GGS_clusterList & inList)  ;

  public: ~ UpEnumerator_clusterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_clusterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_clusterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_clusterList (const UpEnumerator_clusterList &) = delete ;
  private: UpEnumerator_clusterList & operator = (const UpEnumerator_clusterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @clusterList list
//--------------------------------------------------------------------------------------------------

class GGS_clusterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_clusterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_clusterList (void) ;

//--- Destructor
  public: virtual ~ GGS_clusterList (void) = default ;

//--- Copy
  public: GGS_clusterList (const GGS_clusterList &) = default ;
  public: GGS_clusterList & operator = (const GGS_clusterList &) = default ;

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
  public : inline GenericArray <GGS_clusterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_clusterList subList (const int32_t inStart,
                                    const int32_t inLength,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_clusterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_ipic_31__38_BlockList & in_mBlockList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_clusterList init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_clusterList extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_clusterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_clusterList class_func_listWithValue (const class GGS_ipic_31__38_BlockList & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_clusterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_ipic_31__38_BlockList & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_clusterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_clusterList add_operation (const GGS_clusterList & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ipic_31__38_BlockList constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ipic_31__38_BlockList constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ipic_31__38_BlockList & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ipic_31__38_BlockList & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ipic_31__38_BlockList & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockListAtIndex (class GGS_ipic_31__38_BlockList constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ipic_31__38_BlockList & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ipic_31__38_BlockList & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_BlockList getter_mBlockListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_clusterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_clusterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_clusterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_clusterList ;
  friend class DownEnumerator_clusterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_clusterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @clusterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_clusterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ipic_31__38_BlockList mProperty_mBlockList ;
  public: inline GGS_ipic_31__38_BlockList readProperty_mBlockList (void) const {
    return mProperty_mBlockList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_clusterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlockList (const GGS_ipic_31__38_BlockList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_clusterList_2E_element (const GGS_ipic_31__38_BlockList & in_mBlockList) ;

//--------------------------------- Copy constructor
  public: GGS_clusterList_2E_element (const GGS_clusterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_clusterList_2E_element & operator = (const GGS_clusterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_clusterList_2E_element init_21_ (const class GGS_ipic_31__38_BlockList & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_clusterList_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_clusterList_2E_element class_func_new (const class GGS_ipic_31__38_BlockList & inOperand0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_clusterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @neededConversionForClusterOrder map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_neededConversionForClusterOrder final {

  public: DownEnumerator_neededConversionForClusterOrder (const class GGS_neededConversionForClusterOrder & inMap) ;

  public: ~ DownEnumerator_neededConversionForClusterOrder (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mConversions (LOCATION_ARGS) const ;

  public: class GGS_neededConversionForClusterOrder_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_neededConversionForClusterOrder (const DownEnumerator_neededConversionForClusterOrder &) = delete ;
  private: DownEnumerator_neededConversionForClusterOrder & operator = (const DownEnumerator_neededConversionForClusterOrder &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_neededConversionForClusterOrder final {
  public: UpEnumerator_neededConversionForClusterOrder (const class GGS_neededConversionForClusterOrder & inMap)  ;

  public: ~ UpEnumerator_neededConversionForClusterOrder (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mConversions (LOCATION_ARGS) const ;
  public: class GGS_neededConversionForClusterOrder_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_neededConversionForClusterOrder (const UpEnumerator_neededConversionForClusterOrder &) = delete ;
  private: UpEnumerator_neededConversionForClusterOrder & operator = (const UpEnumerator_neededConversionForClusterOrder &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_neededConversionForClusterOrder : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_neededConversionForClusterOrder_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_neededConversionForClusterOrder (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_neededConversionForClusterOrder (void) ;

//--- Handle copy
  public: GGS_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inSource) ;
  public: GGS_neededConversionForClusterOrder & operator = (const GGS_neededConversionForClusterOrder & inSource) ;

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
  protected: void performInsert (const class GGS_neededConversionForClusterOrder_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_neededConversionForClusterOrder init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_neededConversionForClusterOrder extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_neededConversionForClusterOrder class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_neededConversionForClusterOrder class_func_mapWithMapToOverride (const class GGS_neededConversionForClusterOrder & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConversionsForKey (class GGS_uint constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mConversionsForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_neededConversionForClusterOrder getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_neededConversionForClusterOrder_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_neededConversionForClusterOrder ;
  friend class DownEnumerator_neededConversionForClusterOrder ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @neededConversionForClusterOrder_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_neededConversionForClusterOrder_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mConversions ;
  public: inline GGS_uint readProperty_mConversions (void) const {
    return mProperty_mConversions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_neededConversionForClusterOrder_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConversions (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConversions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_neededConversionForClusterOrder_2E_element (const GGS_lstring & in_lkey,
                                                          const GGS_uint & in_mConversions) ;

//--------------------------------- Copy constructor
  public: GGS_neededConversionForClusterOrder_2E_element (const GGS_neededConversionForClusterOrder_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_neededConversionForClusterOrder_2E_element & operator = (const GGS_neededConversionForClusterOrder_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_neededConversionForClusterOrder_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_neededConversionForClusterOrder_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_neededConversionForClusterOrder_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_uint & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: neededConversionForClusterOrder.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_neededConversionForClusterOrder_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_neededConversionForClusterOrder_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_neededConversionForClusterOrder_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_neededConversionForClusterOrder_2E_element_3F_ (const GGS_neededConversionForClusterOrder_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_neededConversionForClusterOrder_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_neededConversionForClusterOrder_2E_element unwrappedValue (void) const {
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
  public: static GGS_neededConversionForClusterOrder_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generatedCodeMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_generatedCodeMap final {

  public: DownEnumerator_generatedCodeMap (const class GGS_generatedCodeMap & inMap) ;

  public: ~ DownEnumerator_generatedCodeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_codeList current_mCode (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;

  public: class GGS_generatedCodeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_generatedCodeMap (const DownEnumerator_generatedCodeMap &) = delete ;
  private: DownEnumerator_generatedCodeMap & operator = (const DownEnumerator_generatedCodeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_generatedCodeMap final {
  public: UpEnumerator_generatedCodeMap (const class GGS_generatedCodeMap & inMap)  ;

  public: ~ UpEnumerator_generatedCodeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_codeList current_mCode (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GGS_generatedCodeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_generatedCodeMap (const UpEnumerator_generatedCodeMap &) = delete ;
  private: UpEnumerator_generatedCodeMap & operator = (const UpEnumerator_generatedCodeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_generatedCodeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_generatedCodeMap (void) ;

//--- Handle copy
  public: GGS_generatedCodeMap (const GGS_generatedCodeMap & inSource) ;
  public: GGS_generatedCodeMap & operator = (const GGS_generatedCodeMap & inSource) ;

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
  protected: void performInsert (const class GGS_generatedCodeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generatedCodeMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generatedCodeMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generatedCodeMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_generatedCodeMap class_func_mapWithMapToOverride (const class GGS_generatedCodeMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_codeList constinArgument1,
                                                  class GGS_ipic_31__38_SequentialInstruction constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCodeForKey (class GGS_codeList constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionForKey (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_codeList & outArgument1,
                                                  class GGS_ipic_31__38_SequentialInstruction & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_mCodeForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_SequentialInstruction getter_mInstructionForKey (const class GGS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_generatedCodeMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_generatedCodeMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_generatedCodeMap ;
  friend class DownEnumerator_generatedCodeMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generatedCodeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_codeList mProperty_mCode ;
  public: inline GGS_codeList readProperty_mCode (void) const {
    return mProperty_mCode ;
  }

  public: GGS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;
  public: inline GGS_ipic_31__38_SequentialInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generatedCodeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCode (const GGS_codeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCode = inValue ;
  }

  public: inline void setter_setMInstruction (const GGS_ipic_31__38_SequentialInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generatedCodeMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_codeList & in_mCode,
                                           const GGS_ipic_31__38_SequentialInstruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_generatedCodeMap_2E_element (const GGS_generatedCodeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generatedCodeMap_2E_element & operator = (const GGS_generatedCodeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generatedCodeMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_codeList & inOperand1,
                                                                   const class GGS_ipic_31__38_SequentialInstruction & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generatedCodeMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generatedCodeMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_codeList & inOperand1,
                                                                       const class GGS_ipic_31__38_SequentialInstruction & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: generatedCodeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_generatedCodeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_generatedCodeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_generatedCodeMap_2E_element_3F_ (const GGS_generatedCodeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_generatedCodeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_generatedCodeMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_generatedCodeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_34_string (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x6string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_36_string (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockMapForStackComputation map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockMapForStackComputation final {

  public: DownEnumerator_blockMapForStackComputation (const class GGS_blockMapForStackComputation & inMap) ;

  public: ~ DownEnumerator_blockMapForStackComputation (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;

  public: class GGS_blockMapForStackComputation_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockMapForStackComputation (const DownEnumerator_blockMapForStackComputation &) = delete ;
  private: DownEnumerator_blockMapForStackComputation & operator = (const DownEnumerator_blockMapForStackComputation &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockMapForStackComputation final {
  public: UpEnumerator_blockMapForStackComputation (const class GGS_blockMapForStackComputation & inMap)  ;

  public: ~ UpEnumerator_blockMapForStackComputation (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
  public: class GGS_blockMapForStackComputation_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockMapForStackComputation (const UpEnumerator_blockMapForStackComputation &) = delete ;
  private: UpEnumerator_blockMapForStackComputation & operator = (const UpEnumerator_blockMapForStackComputation &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockMapForStackComputation (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockMapForStackComputation (void) ;

//--- Handle copy
  public: GGS_blockMapForStackComputation (const GGS_blockMapForStackComputation & inSource) ;
  public: GGS_blockMapForStackComputation & operator = (const GGS_blockMapForStackComputation & inSource) ;

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
  protected: void performInsert (const class GGS_blockMapForStackComputation_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockMapForStackComputation init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockMapForStackComputation extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockMapForStackComputation class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_blockMapForStackComputation class_func_mapWithMapToOverride (const class GGS_blockMapForStackComputation & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_ipic_31__38_Block constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockForKey (class GGS_ipic_31__38_Block constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_ipic_31__38_Block & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_Block getter_mBlockForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_blockMapForStackComputation getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_blockMapForStackComputation_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockMapForStackComputation ;
  friend class DownEnumerator_blockMapForStackComputation ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockMapForStackComputation_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_ipic_31__38_Block mProperty_mBlock ;
  public: inline GGS_ipic_31__38_Block readProperty_mBlock (void) const {
    return mProperty_mBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockMapForStackComputation_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBlock (const GGS_ipic_31__38_Block & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockMapForStackComputation_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_ipic_31__38_Block & in_mBlock) ;

//--------------------------------- Copy constructor
  public: GGS_blockMapForStackComputation_2E_element (const GGS_blockMapForStackComputation_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockMapForStackComputation_2E_element & operator = (const GGS_blockMapForStackComputation_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockMapForStackComputation_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_ipic_31__38_Block & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockMapForStackComputation_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockMapForStackComputation_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_ipic_31__38_Block & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockMapForStackComputation.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockMapForStackComputation_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockMapForStackComputation_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockMapForStackComputation_2E_element_3F_ (const GGS_blockMapForStackComputation_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockMapForStackComputation_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockMapForStackComputation_2E_element unwrappedValue (void) const {
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
  public: static GGS_blockMapForStackComputation_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineCallMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineCallMap final {

  public: DownEnumerator_routineCallMap (const class GGS_routineCallMap & inMap) ;

  public: ~ DownEnumerator_routineCallMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;

  public: class GGS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;

  public: class GGS_routineCallMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineCallMap (const DownEnumerator_routineCallMap &) = delete ;
  private: DownEnumerator_routineCallMap & operator = (const DownEnumerator_routineCallMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineCallMap final {
  public: UpEnumerator_routineCallMap (const class GGS_routineCallMap & inMap)  ;

  public: ~ UpEnumerator_routineCallMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
  public: class GGS_routineCallMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineCallMap (const UpEnumerator_routineCallMap &) = delete ;
  private: UpEnumerator_routineCallMap & operator = (const UpEnumerator_routineCallMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineCallMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineCallMap (void) ;

//--- Handle copy
  public: GGS_routineCallMap (const GGS_routineCallMap & inSource) ;
  public: GGS_routineCallMap & operator = (const GGS_routineCallMap & inSource) ;

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
  protected: void performInsert (const class GGS_routineCallMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineCallMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineCallMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineCallMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_routineCallMap class_func_mapWithMapToOverride (const class GGS_routineCallMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCalledRoutineSetForKey (class GGS_stringset constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminatorStackNeedsForKey (class GGS_uint constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_mCalledRoutineSetForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTerminatorStackNeedsForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineCallMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineCallMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineCallMap ;
  friend class DownEnumerator_routineCallMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineCallMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mCalledRoutineSet ;
  public: inline GGS_stringset readProperty_mCalledRoutineSet (void) const {
    return mProperty_mCalledRoutineSet ;
  }

  public: GGS_uint mProperty_mTerminatorStackNeeds ;
  public: inline GGS_uint readProperty_mTerminatorStackNeeds (void) const {
    return mProperty_mTerminatorStackNeeds ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineCallMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCalledRoutineSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCalledRoutineSet = inValue ;
  }

  public: inline void setter_setMTerminatorStackNeeds (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorStackNeeds = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineCallMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_stringset & in_mCalledRoutineSet,
                                         const GGS_uint & in_mTerminatorStackNeeds) ;

//--------------------------------- Copy constructor
  public: GGS_routineCallMap_2E_element (const GGS_routineCallMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineCallMap_2E_element & operator = (const GGS_routineCallMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineCallMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_stringset & inOperand1,
                                                                 const class GGS_uint & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineCallMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineCallMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_stringset & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineCallMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineCallMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineCallMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineCallMap_2E_element_3F_ (const GGS_routineCallMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineCallMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineCallMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineCallMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineStackRequirementMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineStackRequirementMap final {

  public: DownEnumerator_routineStackRequirementMap (const class GGS_routineStackRequirementMap & inMap) ;

  public: ~ DownEnumerator_routineStackRequirementMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mLevels (LOCATION_ARGS) const ;

  public: class GGS_routineStackRequirementMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineStackRequirementMap (const DownEnumerator_routineStackRequirementMap &) = delete ;
  private: DownEnumerator_routineStackRequirementMap & operator = (const DownEnumerator_routineStackRequirementMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineStackRequirementMap final {
  public: UpEnumerator_routineStackRequirementMap (const class GGS_routineStackRequirementMap & inMap)  ;

  public: ~ UpEnumerator_routineStackRequirementMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLevels (LOCATION_ARGS) const ;
  public: class GGS_routineStackRequirementMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineStackRequirementMap (const UpEnumerator_routineStackRequirementMap &) = delete ;
  private: UpEnumerator_routineStackRequirementMap & operator = (const UpEnumerator_routineStackRequirementMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineStackRequirementMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineStackRequirementMap (void) ;

//--- Handle copy
  public: GGS_routineStackRequirementMap (const GGS_routineStackRequirementMap & inSource) ;
  public: GGS_routineStackRequirementMap & operator = (const GGS_routineStackRequirementMap & inSource) ;

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
  protected: void performInsert (const class GGS_routineStackRequirementMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineStackRequirementMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineStackRequirementMap extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineStackRequirementMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_routineStackRequirementMap class_func_mapWithMapToOverride (const class GGS_routineStackRequirementMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLevelsForKey (class GGS_uint constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLevelsForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineStackRequirementMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineStackRequirementMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineStackRequirementMap ;
  friend class DownEnumerator_routineStackRequirementMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineStackRequirementMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mLevels ;
  public: inline GGS_uint readProperty_mLevels (void) const {
    return mProperty_mLevels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineStackRequirementMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLevels (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLevels = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineStackRequirementMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_uint & in_mLevels) ;

//--------------------------------- Copy constructor
  public: GGS_routineStackRequirementMap_2E_element (const GGS_routineStackRequirementMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineStackRequirementMap_2E_element & operator = (const GGS_routineStackRequirementMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineStackRequirementMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineStackRequirementMap_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineStackRequirementMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_uint & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineStackRequirementMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineStackRequirementMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineStackRequirementMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineStackRequirementMap_2E_element_3F_ (const GGS_routineStackRequirementMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineStackRequirementMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineStackRequirementMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineStackRequirementMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_exploreAccessibleBlocksForStackComputations (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                      class GGS_stringset & io_ioBlockToExploreSet,
                                                                      class GGS_stringset & io_ioExploredBlockSet,
                                                                      class GGS_uint & out_outStackNeeds,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildCalledRoutineSetForStackComputations (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    class GGS_stringset & io_ioRoutineCalledSet,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockDurationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockDurationMap final {

  public: DownEnumerator_blockDurationMap (const class GGS_blockDurationMap & inMap) ;

  public: ~ DownEnumerator_blockDurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mMinDuration (LOCATION_ARGS) const ;

  public: class GGS_uint current_mMaxDuration (LOCATION_ARGS) const ;

  public: class GGS_blockDurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockDurationMap (const DownEnumerator_blockDurationMap &) = delete ;
  private: DownEnumerator_blockDurationMap & operator = (const DownEnumerator_blockDurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockDurationMap final {
  public: UpEnumerator_blockDurationMap (const class GGS_blockDurationMap & inMap)  ;

  public: ~ UpEnumerator_blockDurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMaxDuration (LOCATION_ARGS) const ;
  public: class GGS_blockDurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockDurationMap (const UpEnumerator_blockDurationMap &) = delete ;
  private: UpEnumerator_blockDurationMap & operator = (const UpEnumerator_blockDurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockDurationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockDurationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockDurationMap (void) ;

//--- Handle copy
  public: GGS_blockDurationMap (const GGS_blockDurationMap & inSource) ;
  public: GGS_blockDurationMap & operator = (const GGS_blockDurationMap & inSource) ;

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
  protected: void performInsert (const class GGS_blockDurationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockDurationMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockDurationMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockDurationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_blockDurationMap class_func_mapWithMapToOverride (const class GGS_blockDurationMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaxDurationForKey (class GGS_uint constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMinDurationForKey (class GGS_uint constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mMaxDurationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mMinDurationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_blockDurationMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_blockDurationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockDurationMap ;
  friend class DownEnumerator_blockDurationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockDurationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mMinDuration ;
  public: inline GGS_uint readProperty_mMinDuration (void) const {
    return mProperty_mMinDuration ;
  }

  public: GGS_uint mProperty_mMaxDuration ;
  public: inline GGS_uint readProperty_mMaxDuration (void) const {
    return mProperty_mMaxDuration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockDurationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMMinDuration (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinDuration = inValue ;
  }

  public: inline void setter_setMMaxDuration (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaxDuration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockDurationMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mMinDuration,
                                           const GGS_uint & in_mMaxDuration) ;

//--------------------------------- Copy constructor
  public: GGS_blockDurationMap_2E_element (const GGS_blockDurationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockDurationMap_2E_element & operator = (const GGS_blockDurationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockDurationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   const class GGS_uint & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockDurationMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockDurationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_uint & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockDurationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockDurationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockDurationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockDurationMap_2E_element_3F_ (const GGS_blockDurationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockDurationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockDurationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_blockDurationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                                   const class GGS_string constin_inNextLabel,
                                                   class GGS_uint & out_outMin,
                                                   class GGS_uint & out_outMax,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (class cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                   const class GGS_string constin_inNextLabel,
                                   class GGS_uint & out_outMin,
                                   class GGS_uint & out_outMax,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         const class GGS_blockDurationMap constin_inExploredBlockMap,
                                         class GGS_uint & out_outMin,
                                         class GGS_uint & out_outMax,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationInRam handleDeclaration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_handleDeclaration (class cPtr_declarationInRam * inObject,
                                            const class GGS_constantMap constin_inConstantMap,
                                            class GGS_stringset & io_ioUsedRegisters,
                                            class GGS_ramBankTable & io_ioRamBank,
                                            class GGS_registerTable & io_ioRegisterTable,
                                            const class GGS_lstring constin_inCurrentRamBank,
                                            class GGS_declaredByteMap & io_ioDeclaredByteMap,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredByteMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_declaredByteMap final {

  public: DownEnumerator_declaredByteMap (const class GGS_declaredByteMap & inMap) ;

  public: ~ DownEnumerator_declaredByteMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_declaredByteMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_declaredByteMap (const DownEnumerator_declaredByteMap &) = delete ;
  private: DownEnumerator_declaredByteMap & operator = (const DownEnumerator_declaredByteMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declaredByteMap final {
  public: UpEnumerator_declaredByteMap (const class GGS_declaredByteMap & inMap)  ;

  public: ~ UpEnumerator_declaredByteMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_declaredByteMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_declaredByteMap (const UpEnumerator_declaredByteMap &) = delete ;
  private: UpEnumerator_declaredByteMap & operator = (const UpEnumerator_declaredByteMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_declaredByteMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_declaredByteMap (void) ;

//--- Handle copy
  public: GGS_declaredByteMap (const GGS_declaredByteMap & inSource) ;
  public: GGS_declaredByteMap & operator = (const GGS_declaredByteMap & inSource) ;

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
  protected: void performInsert (const class GGS_declaredByteMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declaredByteMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredByteMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declaredByteMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_declaredByteMap class_func_mapWithMapToOverride (const class GGS_declaredByteMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declaredByteMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_declaredByteMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_declaredByteMap ;
  friend class DownEnumerator_declaredByteMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE piccoloDevice_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_piccoloDevice_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccoloDevice_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_piccoloDevice_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_piccoloDevice_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_integer = 2 ;
  public: static const int32_t kToken_string = 3 ;
  public: static const int32_t kToken_comment = 4 ;
  public: static const int32_t kToken_controller = 5 ;
  public: static const int32_t kToken_processor = 6 ;
  public: static const int32_t kToken_romsize = 7 ;
  public: static const int32_t kToken_eepromsize = 8 ;
  public: static const int32_t kToken_bank = 9 ;
  public: static const int32_t kToken_unusedregister = 10 ;
  public: static const int32_t kToken_mirrorat = 11 ;
  public: static const int32_t kToken_ram = 12 ;
  public: static const int32_t kToken_register = 13 ;
  public: static const int32_t kToken_at = 14 ;
  public: static const int32_t kToken_to = 15 ;
  public: static const int32_t kToken_configuration = 16 ;
  public: static const int32_t kToken_width = 17 ;
  public: static const int32_t kToken_description = 18 ;
  public: static const int32_t kToken_mask = 19 ;
  public: static const int32_t kToken_illegal = 20 ;
  public: static const int32_t kToken_message = 21 ;
  public: static const int32_t kToken_setting = 22 ;
  public: static const int32_t kToken__3C_ = 23 ;
  public: static const int32_t kToken__3E_ = 24 ;
  public: static const int32_t kToken__2C_ = 25 ;
  public: static const int32_t kToken__2D_ = 26 ;
  public: static const int32_t kToken__2F_ = 27 ;
  public: static const int32_t kToken__3B_ = 28 ;
  public: static const int32_t kToken__3A_ = 29 ;
  public: static const int32_t kToken__5B_ = 30 ;
  public: static const int32_t kToken__5D_ = 31 ;
  public: static const int32_t kToken__7B_ = 32 ;
  public: static const int32_t kToken__7D_ = 33 ;

//--- Key words table 'controlKeyWordList'
  public: static int32_t search_into_controlKeyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: utf32 attributeValue_charValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccoloDevice_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 33 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredByteMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declaredByteMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declaredByteMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_declaredByteMap_2E_element (const GGS_declaredByteMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declaredByteMap_2E_element & operator = (const GGS_declaredByteMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declaredByteMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredByteMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declaredByteMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: declaredByteMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_declaredByteMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_declaredByteMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_declaredByteMap_2E_element_3F_ (const GGS_declaredByteMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_declaredByteMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_declaredByteMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_declaredByteMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_registerTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uintlist mProperty_mRegisterAddressList ;
  public: inline GGS_uintlist readProperty_mRegisterAddressList (void) const {
    return mProperty_mRegisterAddressList ;
  }

  public: GGS_uint mProperty_mSize ;
  public: inline GGS_uint readProperty_mSize (void) const {
    return mProperty_mSize ;
  }

  public: GGS_bitSliceTable mProperty_mBitSliceTable ;
  public: inline GGS_bitSliceTable readProperty_mBitSliceTable (void) const {
    return mProperty_mBitSliceTable ;
  }

  public: GGS_string mProperty_mBitDefinitionString ;
  public: inline GGS_string readProperty_mBitDefinitionString (void) const {
    return mProperty_mBitDefinitionString ;
  }

  public: GGS_registerProtection mProperty_mProtection ;
  public: inline GGS_registerProtection readProperty_mProtection (void) const {
    return mProperty_mProtection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddressList (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddressList = inValue ;
  }

  public: inline void setter_setMSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSize = inValue ;
  }

  public: inline void setter_setMBitSliceTable (const GGS_bitSliceTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitSliceTable = inValue ;
  }

  public: inline void setter_setMBitDefinitionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitDefinitionString = inValue ;
  }

  public: inline void setter_setMProtection (const GGS_registerProtection & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProtection = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerTable_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_uintlist & in_mRegisterAddressList,
                                        const GGS_uint & in_mSize,
                                        const GGS_bitSliceTable & in_mBitSliceTable,
                                        const GGS_string & in_mBitDefinitionString,
                                        const GGS_registerProtection & in_mProtection) ;

//--------------------------------- Copy constructor
  public: GGS_registerTable_2E_element (const GGS_registerTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerTable_2E_element & operator = (const GGS_registerTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerTable_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uintlist & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_bitSliceTable & inOperand3,
                                                                            const class GGS_string & inOperand4,
                                                                            const class GGS_registerProtection & inOperand5,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerTable_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerTable_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_uintlist & inOperand1,
                                                                    const class GGS_uint & inOperand2,
                                                                    const class GGS_bitSliceTable & inOperand3,
                                                                    const class GGS_string & inOperand4,
                                                                    const class GGS_registerProtection & inOperand5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerTable_2E_element_3F_ (const GGS_registerTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerTable_2E_element unwrappedValue (void) const {
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
  public: static GGS_registerTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerTable checkPrivateAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkPrivateAccess (const class GGS_registerTable inObject,
                                         const class GGS_lstring constin_inKey,
                                         const class GGS_bool constin_inWriteAccess,
                                         const class GGS_registerProtection constin_inRegisterProtection,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramBankTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mFirstAddress ;
  public: inline GGS_uint readProperty_mFirstAddress (void) const {
    return mProperty_mFirstAddress ;
  }

  public: GGS_uint mProperty_mFirstFreeAddress ;
  public: inline GGS_uint readProperty_mFirstFreeAddress (void) const {
    return mProperty_mFirstFreeAddress ;
  }

  public: GGS_uint mProperty_mLastAddressPlusOne ;
  public: inline GGS_uint readProperty_mLastAddressPlusOne (void) const {
    return mProperty_mLastAddressPlusOne ;
  }

  public: GGS_uintlist mProperty_mMirrorOffsetList ;
  public: inline GGS_uintlist readProperty_mMirrorOffsetList (void) const {
    return mProperty_mMirrorOffsetList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ramBankTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFirstAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstAddress = inValue ;
  }

  public: inline void setter_setMFirstFreeAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstFreeAddress = inValue ;
  }

  public: inline void setter_setMLastAddressPlusOne (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLastAddressPlusOne = inValue ;
  }

  public: inline void setter_setMMirrorOffsetList (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMirrorOffsetList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ramBankTable_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_uint & in_mFirstAddress,
                                       const GGS_uint & in_mFirstFreeAddress,
                                       const GGS_uint & in_mLastAddressPlusOne,
                                       const GGS_uintlist & in_mMirrorOffsetList) ;

//--------------------------------- Copy constructor
  public: GGS_ramBankTable_2E_element (const GGS_ramBankTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ramBankTable_2E_element & operator = (const GGS_ramBankTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramBankTable_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_uint & inOperand2,
                                                                       const class GGS_uint & inOperand3,
                                                                       const class GGS_uintlist & inOperand4,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramBankTable_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramBankTable_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   const class GGS_uint & inOperand2,
                                                                   const class GGS_uint & inOperand3,
                                                                   const class GGS_uintlist & inOperand4,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ramBankTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ramBankTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ramBankTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ramBankTable_2E_element_3F_ (const GGS_ramBankTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ramBankTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ramBankTable_2E_element unwrappedValue (void) const {
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
  public: static GGS_ramBankTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @illegalMaskList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_illegalMaskList final {
  public: DownEnumerator_illegalMaskList (const class GGS_illegalMaskList & inList) ;

  public: ~ DownEnumerator_illegalMaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GGS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_illegalMaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_illegalMaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_illegalMaskList (const DownEnumerator_illegalMaskList &) = delete ;
  private: DownEnumerator_illegalMaskList & operator = (const DownEnumerator_illegalMaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_illegalMaskList final {
  public: UpEnumerator_illegalMaskList (const class GGS_illegalMaskList & inList)  ;

  public: ~ UpEnumerator_illegalMaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GGS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_illegalMaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_illegalMaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_illegalMaskList (const UpEnumerator_illegalMaskList &) = delete ;
  private: UpEnumerator_illegalMaskList & operator = (const UpEnumerator_illegalMaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @illegalMaskList list
//--------------------------------------------------------------------------------------------------

class GGS_illegalMaskList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_illegalMaskList_2E_element> mArray ;

//--- Default constructor
  public: GGS_illegalMaskList (void) ;

//--- Destructor
  public: virtual ~ GGS_illegalMaskList (void) = default ;

//--- Copy
  public: GGS_illegalMaskList (const GGS_illegalMaskList &) = default ;
  public: GGS_illegalMaskList & operator = (const GGS_illegalMaskList &) = default ;

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
  public : inline GenericArray <GGS_illegalMaskList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_illegalMaskList subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_illegalMaskList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_luint & in_mIllegalValue,
                                                 const class GGS_luint & in_mIllegalMask,
                                                 const class GGS_lstring & in_mDescription
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_illegalMaskList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_illegalMaskList extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_illegalMaskList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_illegalMaskList class_func_listWithValue (const class GGS_luint & inOperand0,
                                                                     const class GGS_luint & inOperand1,
                                                                     const class GGS_lstring & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_illegalMaskList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_luint & inOperand0,
                                                    const class GGS_luint & inOperand1,
                                                    const class GGS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_illegalMaskList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_illegalMaskList add_operation (const GGS_illegalMaskList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_luint constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_luint constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_luint & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_luint & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_luint & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDescriptionAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalMaskAtIndex (class GGS_luint constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalValueAtIndex (class GGS_luint constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_luint & outArgument0,
                                              class GGS_luint & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_luint & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDescriptionAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mIllegalMaskAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mIllegalValueAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_illegalMaskList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_illegalMaskList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_illegalMaskList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_illegalMaskList ;
  friend class DownEnumerator_illegalMaskList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @illegalMaskList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_illegalMaskList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_luint mProperty_mIllegalValue ;
  public: inline GGS_luint readProperty_mIllegalValue (void) const {
    return mProperty_mIllegalValue ;
  }

  public: GGS_luint mProperty_mIllegalMask ;
  public: inline GGS_luint readProperty_mIllegalMask (void) const {
    return mProperty_mIllegalMask ;
  }

  public: GGS_lstring mProperty_mDescription ;
  public: inline GGS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_illegalMaskList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIllegalValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalValue = inValue ;
  }

  public: inline void setter_setMIllegalMask (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalMask = inValue ;
  }

  public: inline void setter_setMDescription (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_illegalMaskList_2E_element (const GGS_luint & in_mIllegalValue,
                                          const GGS_luint & in_mIllegalMask,
                                          const GGS_lstring & in_mDescription) ;

//--------------------------------- Copy constructor
  public: GGS_illegalMaskList_2E_element (const GGS_illegalMaskList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_illegalMaskList_2E_element & operator = (const GGS_illegalMaskList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_illegalMaskList_2E_element init_21__21__21_ (const class GGS_luint & inOperand0,
                                                                  const class GGS_luint & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_illegalMaskList_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_illegalMaskList_2E_element class_func_new (const class GGS_luint & inOperand0,
                                                                      const class GGS_luint & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMaskMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_configRegisterMaskMap final {

  public: DownEnumerator_configRegisterMaskMap (const class GGS_configRegisterMaskMap & inMap) ;

  public: ~ DownEnumerator_configRegisterMaskMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;

  public: class GGS_configRegisterMaskMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configRegisterMaskMap (const DownEnumerator_configRegisterMaskMap &) = delete ;
  private: DownEnumerator_configRegisterMaskMap & operator = (const DownEnumerator_configRegisterMaskMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configRegisterMaskMap final {
  public: UpEnumerator_configRegisterMaskMap (const class GGS_configRegisterMaskMap & inMap)  ;

  public: ~ UpEnumerator_configRegisterMaskMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMaskMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configRegisterMaskMap (const UpEnumerator_configRegisterMaskMap &) = delete ;
  private: UpEnumerator_configRegisterMaskMap & operator = (const UpEnumerator_configRegisterMaskMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_configRegisterMaskMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_configRegisterMaskMap (void) ;

//--- Handle copy
  public: GGS_configRegisterMaskMap (const GGS_configRegisterMaskMap & inSource) ;
  public: GGS_configRegisterMaskMap & operator = (const GGS_configRegisterMaskMap & inSource) ;

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
  protected: void performInsert (const class GGS_configRegisterMaskMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMaskMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMaskMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMaskMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_configRegisterMaskMap class_func_mapWithMapToOverride (const class GGS_configRegisterMaskMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint constinArgument1,
                                                  class GGS_lstring constinArgument2,
                                                  class GGS_fieldSettingMap constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDescriptionForKey (class GGS_lstring constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldSettingMapForKey (class GGS_fieldSettingMap constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaskValueForKey (class GGS_luint constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint & outArgument1,
                                                  class GGS_lstring & outArgument2,
                                                  class GGS_fieldSettingMap & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDescriptionForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fieldSettingMap getter_mFieldSettingMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mMaskValueForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMaskMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMaskMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configRegisterMaskMap ;
  friend class DownEnumerator_configRegisterMaskMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMaskMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
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
  public: GGS_configRegisterMaskMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
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
  public: GGS_configRegisterMaskMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_luint & in_mMaskValue,
                                                const GGS_lstring & in_mDescription,
                                                const GGS_fieldSettingMap & in_mFieldSettingMap) ;

//--------------------------------- Copy constructor
  public: GGS_configRegisterMaskMap_2E_element (const GGS_configRegisterMaskMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configRegisterMaskMap_2E_element & operator = (const GGS_configRegisterMaskMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMaskMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_fieldSettingMap & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMaskMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMaskMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_fieldSettingMap & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: configRegisterMaskMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_configRegisterMaskMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMaskMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_configRegisterMaskMap_2E_element_3F_ (const GGS_configRegisterMaskMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_configRegisterMaskMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_configRegisterMaskMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_configRegisterMaskMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_luint mProperty_mRegisterAddress ;
  public: inline GGS_luint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_luint mProperty_mRegisterWidth ;
  public: inline GGS_luint readProperty_mRegisterWidth (void) const {
    return mProperty_mRegisterWidth ;
  }

  public: GGS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;
  public: inline GGS_configRegisterMaskMap readProperty_mConfigRegisterMaskMap (void) const {
    return mProperty_mConfigRegisterMaskMap ;
  }

  public: GGS_illegalMaskList mProperty_mIllegalMaskList ;
  public: inline GGS_illegalMaskList readProperty_mIllegalMaskList (void) const {
    return mProperty_mIllegalMaskList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterWidth (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterWidth = inValue ;
  }

  public: inline void setter_setMConfigRegisterMaskMap (const GGS_configRegisterMaskMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMaskMap = inValue ;
  }

  public: inline void setter_setMIllegalMaskList (const GGS_illegalMaskList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalMaskList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configRegisterMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_luint & in_mRegisterAddress,
                                            const GGS_luint & in_mRegisterWidth,
                                            const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                            const GGS_illegalMaskList & in_mIllegalMaskList) ;

//--------------------------------- Copy constructor
  public: GGS_configRegisterMap_2E_element (const GGS_configRegisterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configRegisterMap_2E_element & operator = (const GGS_configRegisterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            const class GGS_luint & inOperand2,
                                                                            const class GGS_configRegisterMaskMap & inOperand3,
                                                                            const class GGS_illegalMaskList & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_luint & inOperand1,
                                                                        const class GGS_luint & inOperand2,
                                                                        const class GGS_configRegisterMaskMap & inOperand3,
                                                                        const class GGS_illegalMaskList & inOperand4,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: configRegisterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_configRegisterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_configRegisterMap_2E_element_3F_ (const GGS_configRegisterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_configRegisterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_configRegisterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_configRegisterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ;

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

