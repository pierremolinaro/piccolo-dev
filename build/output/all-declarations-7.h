#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

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
  public: inline GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register unwrappedValue (void) const {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

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
  public: void setProperty_mInstruction_5F_FDA_5F_base_5F_code (const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inValue) ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA unwrappedValue (void) const {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForBlockOptimization map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForBlockOptimization final : public cGenericAbstractEnumerator {
  public: DownEnumerator_symbolTableForBlockOptimization (const class GGS_symbolTableForBlockOptimization & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForBlockOptimization_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForBlockOptimization final : public cGenericAbstractEnumerator {
  public: UpEnumerator_symbolTableForBlockOptimization (const class GGS_symbolTableForBlockOptimization & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForBlockOptimization_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForBlockOptimization map
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForBlockOptimization : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_symbolTableForBlockOptimization (void) ;

//--------------------------------- Handle copy
  public: GGS_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inSource) ;
  public: GGS_symbolTableForBlockOptimization & operator = (const GGS_symbolTableForBlockOptimization & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForBlockOptimization * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GGS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForBlockOptimization ;
  friend class DownEnumerator_symbolTableForBlockOptimization ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@symbolTableForBlockOptimization' map
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mDefinitionBlockIndex ;

//--- Constructors
  public: cMapElement_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_symbolTableForBlockOptimization (const GGS_lstring & inKey,
                                                       const GGS_uint & in_mDefinitionBlockIndex
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForClusterOrdering map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForClusterOrdering final : public cGenericAbstractEnumerator {
  public: DownEnumerator_symbolTableForClusterOrdering (const class GGS_symbolTableForClusterOrdering & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mCluster (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForClusterOrdering_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForClusterOrdering final : public cGenericAbstractEnumerator {
  public: UpEnumerator_symbolTableForClusterOrdering (const class GGS_symbolTableForClusterOrdering & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mCluster (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForClusterOrdering_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForClusterOrdering map
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForClusterOrdering ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_symbolTableForClusterOrdering (void) ;

//--------------------------------- Handle copy
  public: GGS_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inSource) ;
  public: GGS_symbolTableForClusterOrdering & operator = (const GGS_symbolTableForClusterOrdering & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForClusterOrdering * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForClusterOrdering ;
  friend class DownEnumerator_symbolTableForClusterOrdering ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@symbolTableForClusterOrdering' map
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForClusterOrdering : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mCluster ;

//--- Constructors
  public: cMapElement_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_symbolTableForClusterOrdering (const GGS_lstring & inKey,
                                                     const GGS_uint & in_mCluster
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary dictionary enumerator
//--------------------------------------------------------------------------------------------------

class KeyComparator_branchOverflowMapDictionary final {
  public: bool operator () (const GGS_string & inLeft,
                            const GGS_string & inRight) const {
    return inLeft.objectCompare (inRight) == ComparisonResult::firstOperandLowerThanSecond ;
  }
} ;

//--------------------------------------------------------------------------------------------------

typedef std::map <GGS_string,
                  GGS_branchOverflowMapDictionary_2E_element,
                  KeyComparator_branchOverflowMapDictionary> MapFor_branchOverflowMapDictionary ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_branchOverflowMapDictionary final {
  public: DownEnumerator_branchOverflowMapDictionary (const class GGS_branchOverflowMapDictionary & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIterator != mDictionary.rend () ; }
  
  public: inline void gotoNextObject (void) { mIterator ++ ; }
  public: inline GGS_string current_key (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_key ;
  }

  public: inline GGS_stringlist current_mList (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_mList ;
  }

//--- Current element access
  public: inline GGS_branchOverflowMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const  {
     return mIterator->second ;
  }

//--- Private properties
  private: MapFor_branchOverflowMapDictionary mDictionary ;
  private: MapFor_branchOverflowMapDictionary::reverse_iterator mIterator ;

//--- No copy
  private: DownEnumerator_branchOverflowMapDictionary (const DownEnumerator_branchOverflowMapDictionary &) = delete ;
  private: DownEnumerator_branchOverflowMapDictionary & operator = (const DownEnumerator_branchOverflowMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_branchOverflowMapDictionary final {
  public: UpEnumerator_branchOverflowMapDictionary (const class GGS_branchOverflowMapDictionary & inOperand)  ;
  
  public: inline bool hasCurrentObject (void) const { return mIterator != mDictionary.end () ; }

  public: inline void gotoNextObject (void) { mIterator ++ ; }

  public: inline GGS_string current_key (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_key ;
 }
 
  public: inline GGS_stringlist current_mList (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_mList ;
 }
 
//--- Current element access
  public: inline GGS_branchOverflowMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const {
    return mIterator->second ;
  }

//--- Private properties
  private: MapFor_branchOverflowMapDictionary mDictionary ;
  private: MapFor_branchOverflowMapDictionary::iterator mIterator ;

//--- No copy
  private: UpEnumerator_branchOverflowMapDictionary (const UpEnumerator_branchOverflowMapDictionary &) = delete ;
  private: UpEnumerator_branchOverflowMapDictionary & operator = (const UpEnumerator_branchOverflowMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary dict
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary : public AC_GALGAS_root {
//--------------------------------- Private properties
  private: MapFor_branchOverflowMapDictionary mDictionary ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMapDictionary (void) ;

//--------------------------------- Destructor
//  public: virtual ~ GGS_branchOverflowMapDictionary (void) ;

//--------------------------------- Handle copy
  public: GGS_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inSource) ;
  public: GGS_branchOverflowMapDictionary & operator = (const GGS_branchOverflowMapDictionary & inSource) ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Implementation of reader 'description'
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_branchOverflowMapDictionary ;
  friend class DownEnumerator_branchOverflowMapDictionary ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap ;

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
// Phase 1: @symbolTableForRelativesResolution map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForRelativesResolution final : public cGenericAbstractEnumerator {
  public: DownEnumerator_symbolTableForRelativesResolution (const class GGS_symbolTableForRelativesResolution & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLabelAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForRelativesResolution_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForRelativesResolution final : public cGenericAbstractEnumerator {
  public: UpEnumerator_symbolTableForRelativesResolution (const class GGS_symbolTableForRelativesResolution & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLabelAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForRelativesResolution_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForRelativesResolution map
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForRelativesResolution ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_symbolTableForRelativesResolution (void) ;

//--------------------------------- Handle copy
  public: GGS_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inSource) ;
  public: GGS_symbolTableForRelativesResolution & operator = (const GGS_symbolTableForRelativesResolution & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForRelativesResolution * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                              const GGS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForRelativesResolution ;
  friend class DownEnumerator_symbolTableForRelativesResolution ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@symbolTableForRelativesResolution' map
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForRelativesResolution : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mLabelAddress ;

//--- Constructors
  public: cMapElement_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution_2E_element & inValue
                                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_symbolTableForRelativesResolution (const GGS_lstring & inKey,
                                                         const GGS_uint & in_mLabelAddress
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @codeList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_codeList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_codeList (const class GGS_codeList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_codeList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_codeList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_codeList (const class GGS_codeList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_codeList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @codeList list
//--------------------------------------------------------------------------------------------------

class GGS_codeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_codeList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_codeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAssemblyCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mBinaryCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_codeList ;
  friend class DownEnumerator_codeList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38__5F_dataAddressMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38__5F_dataAddressMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38__5F_dataAddressMap (const class GGS_pic_31__38__5F_dataAddressMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDataAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38__5F_dataAddressMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38__5F_dataAddressMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38__5F_dataAddressMap (const class GGS_pic_31__38__5F_dataAddressMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDataAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38__5F_dataAddressMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18_dataAddressMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataAddressMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataAddressMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_pic_31__38__5F_dataAddressMap (void) ;

//--------------------------------- Handle copy
  public: GGS_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inSource) ;
  public: GGS_pic_31__38__5F_dataAddressMap & operator = (const GGS_pic_31__38__5F_dataAddressMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataAddressMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38__5F_dataAddressMap ;
  friend class DownEnumerator_pic_31__38__5F_dataAddressMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@pic18_dataAddressMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataAddressMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mDataAddress ;

//--- Constructors
  public: cMapElement_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_pic_31__38__5F_dataAddressMap (const GGS_lstring & inKey,
                                                     const GGS_uint & in_mDataAddress
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ;

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
// Phase 1: @declaredRoutineMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_declaredRoutineMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_declaredRoutineMap (const class GGS_declaredRoutineMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declaredRoutineMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_declaredRoutineMap (const class GGS_declaredRoutineMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredRoutineMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_declaredRoutineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GGS_declaredRoutineMap (const GGS_declaredRoutineMap & inSource) ;
  public: GGS_declaredRoutineMap & operator = (const GGS_declaredRoutineMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_declaredRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_declaredRoutineMap ;
  friend class DownEnumerator_declaredRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@declaredRoutineMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_declaredRoutineMap : public cMapElement {
//--- Map attributes
  public: GGS_luint mProperty_mRequiredBank ;
  public: GGS_luint mProperty_mReturnedBank ;
  public: GGS_bool mProperty_mPreservesBank ;
  public: GGS_bool mProperty_mIsNoReturn ;
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--- Constructors
  public: cMapElement_declaredRoutineMap (const GGS_declaredRoutineMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_declaredRoutineMap (const GGS_lstring & inKey,
                                          const GGS_luint & in_mRequiredBank,
                                          const GGS_luint & in_mReturnedBank,
                                          const GGS_bool & in_mPreservesBank,
                                          const GGS_bool & in_mIsNoReturn,
                                          const GGS_pic_31__38_InstructionList & in_mInstructionList
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element_3F_ ;

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
// Phase 1: @blockInstructionBlockMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockInstructionBlockMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_blockInstructionBlockMap (const class GGS_blockInstructionBlockMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockInstructionBlockMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockInstructionBlockMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_blockInstructionBlockMap (const class GGS_blockInstructionBlockMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockInstructionBlockMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInstructionBlockMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockInstructionBlockMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_blockInstructionBlockMap (void) ;

//--------------------------------- Handle copy
  public: GGS_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inSource) ;
  public: GGS_blockInstructionBlockMap & operator = (const GGS_blockInstructionBlockMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockInstructionBlockMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GGS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_blockInstructionBlockMap ;
  friend class DownEnumerator_blockInstructionBlockMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@blockInstructionBlockMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockInstructionBlockMap : public cMapElement {
//--- Map attributes
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: GGS_location mProperty_mEndOfBlock ;

//--- Constructors
  public: cMapElement_blockInstructionBlockMap (const GGS_blockInstructionBlockMap_2E_element & inValue
                                                COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_blockInstructionBlockMap (const GGS_lstring & inKey,
                                                const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                const GGS_location & in_mEndOfBlock
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInitialBankSelectionMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockInitialBankSelectionMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_blockInitialBankSelectionMap (const class GGS_blockInitialBankSelectionMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public: class GGS_string current_mSourceBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockInitialBankSelectionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockInitialBankSelectionMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_blockInitialBankSelectionMap (const class GGS_blockInitialBankSelectionMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public: class GGS_string current_mSourceBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockInitialBankSelectionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInitialBankSelectionMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockInitialBankSelectionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_blockInitialBankSelectionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inSource) ;
  public: GGS_blockInitialBankSelectionMap & operator = (const GGS_blockInitialBankSelectionMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockInitialBankSelectionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GGS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_blockInitialBankSelectionMap ;
  friend class DownEnumerator_blockInitialBankSelectionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@blockInitialBankSelectionMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockInitialBankSelectionMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mInitialBankSelection ;
  public: GGS_string mProperty_mSourceBlock ;

//--- Constructors
  public: cMapElement_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap_2E_element & inValue
                                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_blockInitialBankSelectionMap (const GGS_lstring & inKey,
                                                    const GGS_uint & in_mInitialBankSelection,
                                                    const GGS_string & in_mSourceBlock
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInvocationGraph ;

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

class DownEnumerator_clusterList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_clusterList (const class GGS_clusterList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_clusterList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_clusterList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_clusterList (const class GGS_clusterList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_clusterList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @clusterList list
//--------------------------------------------------------------------------------------------------

class GGS_clusterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_clusterList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_clusterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_BlockList getter_mBlockListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_clusterList ;
  friend class DownEnumerator_clusterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @neededConversionForClusterOrder map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_neededConversionForClusterOrder final : public cGenericAbstractEnumerator {
  public: DownEnumerator_neededConversionForClusterOrder (const class GGS_neededConversionForClusterOrder & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mConversions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_neededConversionForClusterOrder_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_neededConversionForClusterOrder final : public cGenericAbstractEnumerator {
  public: UpEnumerator_neededConversionForClusterOrder (const class GGS_neededConversionForClusterOrder & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mConversions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_neededConversionForClusterOrder_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @neededConversionForClusterOrder map
//--------------------------------------------------------------------------------------------------

class cMapElement_neededConversionForClusterOrder ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_neededConversionForClusterOrder_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_neededConversionForClusterOrder : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_neededConversionForClusterOrder (void) ;

//--------------------------------- Handle copy
  public: GGS_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inSource) ;
  public: GGS_neededConversionForClusterOrder & operator = (const GGS_neededConversionForClusterOrder & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_neededConversionForClusterOrder * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GGS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_neededConversionForClusterOrder ;
  friend class DownEnumerator_neededConversionForClusterOrder ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@neededConversionForClusterOrder' map
//--------------------------------------------------------------------------------------------------

class cMapElement_neededConversionForClusterOrder : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mConversions ;

//--- Constructors
  public: cMapElement_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_neededConversionForClusterOrder (const GGS_lstring & inKey,
                                                       const GGS_uint & in_mConversions
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generatedCodeMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_generatedCodeMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_generatedCodeMap (const class GGS_generatedCodeMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_codeList current_mCode (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_generatedCodeMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_generatedCodeMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_generatedCodeMap (const class GGS_generatedCodeMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_codeList current_mCode (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_generatedCodeMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generatedCodeMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_generatedCodeMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_generatedCodeMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_generatedCodeMap (void) ;

//--------------------------------- Handle copy
  public: GGS_generatedCodeMap (const GGS_generatedCodeMap & inSource) ;
  public: GGS_generatedCodeMap & operator = (const GGS_generatedCodeMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_generatedCodeMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_generatedCodeMap ;
  friend class DownEnumerator_generatedCodeMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@generatedCodeMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_generatedCodeMap : public cMapElement {
//--- Map attributes
  public: GGS_codeList mProperty_mCode ;
  public: GGS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;

//--- Constructors
  public: cMapElement_generatedCodeMap (const GGS_generatedCodeMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_generatedCodeMap (const GGS_lstring & inKey,
                                        const GGS_codeList & in_mCode,
                                        const GGS_ipic_31__38_SequentialInstruction & in_mInstruction
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ;

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
// Phase 1: @blockMapForStackComputation map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockMapForStackComputation final : public cGenericAbstractEnumerator {
  public: DownEnumerator_blockMapForStackComputation (const class GGS_blockMapForStackComputation & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockMapForStackComputation_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockMapForStackComputation final : public cGenericAbstractEnumerator {
  public: UpEnumerator_blockMapForStackComputation (const class GGS_blockMapForStackComputation & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockMapForStackComputation_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockMapForStackComputation map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockMapForStackComputation ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockMapForStackComputation_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_blockMapForStackComputation (void) ;

//--------------------------------- Handle copy
  public: GGS_blockMapForStackComputation (const GGS_blockMapForStackComputation & inSource) ;
  public: GGS_blockMapForStackComputation & operator = (const GGS_blockMapForStackComputation & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockMapForStackComputation * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GGS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_blockMapForStackComputation ;
  friend class DownEnumerator_blockMapForStackComputation ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@blockMapForStackComputation' map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockMapForStackComputation : public cMapElement {
//--- Map attributes
  public: GGS_ipic_31__38_Block mProperty_mBlock ;

//--- Constructors
  public: cMapElement_blockMapForStackComputation (const GGS_blockMapForStackComputation_2E_element & inValue
                                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_blockMapForStackComputation (const GGS_lstring & inKey,
                                                   const GGS_ipic_31__38_Block & in_mBlock
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineCallMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineCallMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_routineCallMap (const class GGS_routineCallMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineCallMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineCallMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_routineCallMap (const class GGS_routineCallMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineCallMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineCallMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_routineCallMap ;

//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_routineCallMap (void) ;

//--------------------------------- Handle copy
  public: GGS_routineCallMap (const GGS_routineCallMap & inSource) ;
  public: GGS_routineCallMap & operator = (const GGS_routineCallMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineCallMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_routineCallMap ;
  friend class DownEnumerator_routineCallMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@routineCallMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_routineCallMap : public cMapElement {
//--- Map attributes
  public: GGS_stringset mProperty_mCalledRoutineSet ;
  public: GGS_uint mProperty_mTerminatorStackNeeds ;

//--- Constructors
  public: cMapElement_routineCallMap (const GGS_routineCallMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineCallMap (const GGS_lstring & inKey,
                                      const GGS_stringset & in_mCalledRoutineSet,
                                      const GGS_uint & in_mTerminatorStackNeeds
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineStackRequirementMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineStackRequirementMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_routineStackRequirementMap (const class GGS_routineStackRequirementMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLevels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineStackRequirementMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineStackRequirementMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_routineStackRequirementMap (const class GGS_routineStackRequirementMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLevels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineStackRequirementMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineStackRequirementMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_routineStackRequirementMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineStackRequirementMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_routineStackRequirementMap (void) ;

//--------------------------------- Handle copy
  public: GGS_routineStackRequirementMap (const GGS_routineStackRequirementMap & inSource) ;
  public: GGS_routineStackRequirementMap & operator = (const GGS_routineStackRequirementMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineStackRequirementMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                       const GGS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_routineStackRequirementMap ;
  friend class DownEnumerator_routineStackRequirementMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@routineStackRequirementMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_routineStackRequirementMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mLevels ;

//--- Constructors
  public: cMapElement_routineStackRequirementMap (const GGS_routineStackRequirementMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineStackRequirementMap (const GGS_lstring & inKey,
                                                  const GGS_uint & in_mLevels
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ;

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
// Phase 1: @blockDurationMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockDurationMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_blockDurationMap (const class GGS_blockDurationMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMaxDuration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockDurationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockDurationMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_blockDurationMap (const class GGS_blockDurationMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMaxDuration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_blockDurationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockDurationMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockDurationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockDurationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_blockDurationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_blockDurationMap (const GGS_blockDurationMap & inSource) ;
  public: GGS_blockDurationMap & operator = (const GGS_blockDurationMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockDurationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_blockDurationMap ;
  friend class DownEnumerator_blockDurationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@blockDurationMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_blockDurationMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mMinDuration ;
  public: GGS_uint mProperty_mMaxDuration ;

//--- Constructors
  public: cMapElement_blockDurationMap (const GGS_blockDurationMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_blockDurationMap (const GGS_lstring & inKey,
                                        const GGS_uint & in_mMinDuration,
                                        const GGS_uint & in_mMaxDuration
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ;

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
// Phase 1: @declaredByteMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_declaredByteMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_declaredByteMap (const class GGS_declaredByteMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declaredByteMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declaredByteMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_declaredByteMap (const class GGS_declaredByteMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declaredByteMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredByteMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_declaredByteMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_declaredByteMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_declaredByteMap (void) ;

//--------------------------------- Handle copy
  public: GGS_declaredByteMap (const GGS_declaredByteMap & inSource) ;
  public: GGS_declaredByteMap & operator = (const GGS_declaredByteMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG class GGS_declaredByteMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_declaredByteMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_declaredByteMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_declaredByteMap ;
  friend class DownEnumerator_declaredByteMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@declaredByteMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_declaredByteMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_declaredByteMap (const GGS_declaredByteMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_declaredByteMap (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @illegalMaskList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_illegalMaskList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_illegalMaskList (const class GGS_illegalMaskList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GGS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_illegalMaskList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_illegalMaskList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_illegalMaskList (const class GGS_illegalMaskList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GGS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_illegalMaskList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @illegalMaskList list
//--------------------------------------------------------------------------------------------------

class GGS_illegalMaskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_illegalMaskList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_illegalMaskList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDescriptionAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mIllegalMaskAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mIllegalValueAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_illegalMaskList ;
  friend class DownEnumerator_illegalMaskList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMaskMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_configRegisterMaskMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_configRegisterMaskMap (const class GGS_configRegisterMaskMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configRegisterMaskMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configRegisterMaskMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_configRegisterMaskMap (const class GGS_configRegisterMaskMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configRegisterMaskMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMaskMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMaskMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configRegisterMaskMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_configRegisterMaskMap (void) ;

//--------------------------------- Handle copy
  public: GGS_configRegisterMaskMap (const GGS_configRegisterMaskMap & inSource) ;
  public: GGS_configRegisterMaskMap & operator = (const GGS_configRegisterMaskMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_configRegisterMaskMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_configRegisterMaskMap ;
  friend class DownEnumerator_configRegisterMaskMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@configRegisterMaskMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMaskMap : public cMapElement {
//--- Map attributes
  public: GGS_luint mProperty_mMaskValue ;
  public: GGS_lstring mProperty_mDescription ;
  public: GGS_fieldSettingMap mProperty_mFieldSettingMap ;

//--- Constructors
  public: cMapElement_configRegisterMaskMap (const GGS_configRegisterMaskMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_configRegisterMaskMap (const GGS_lstring & inKey,
                                             const GGS_luint & in_mMaskValue,
                                             const GGS_lstring & in_mDescription,
                                             const GGS_fieldSettingMap & in_mFieldSettingMap
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@configRegisterMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMap : public cMapElement {
//--- Map attributes
  public: GGS_luint mProperty_mRegisterAddress ;
  public: GGS_luint mProperty_mRegisterWidth ;
  public: GGS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;
  public: GGS_illegalMaskList mProperty_mIllegalMaskList ;

//--- Constructors
  public: cMapElement_configRegisterMap (const GGS_configRegisterMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_configRegisterMap (const GGS_lstring & inKey,
                                         const GGS_luint & in_mRegisterAddress,
                                         const GGS_luint & in_mRegisterWidth,
                                         const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                         const GGS_illegalMaskList & in_mIllegalMaskList
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ;

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

