#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;
  public: void setProperty_mRoutineName (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mPage (void) const ;
  public: void setProperty_mPage (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE class_func_new (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_uint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_uint mProperty_mPage ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                               const GGS_uint & in_mPage
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (const class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) ;

  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE bang_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_LABEL reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;
  public: void setProperty_mLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL init_21_ (const class GGS_lstring & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL class_func_new (const class GGS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_pseudo_LABEL class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (const class GGS_lstring & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (const class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL bang_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_actualInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_actualInstruction : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_actualInstruction (const class cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_actualInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_actualInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_actualInstruction : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_actualInstruction (const GGS_location & in_mInstructionLocation
                                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_actualInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (const class GGS_baseline_5F_assembly_5F_actualInstruction & inSource) ;

  public: GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_actualInstruction bang_baseline_5F_assembly_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_actualInstruction unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_actualInstruction result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_actualInstruction * p = (cPtr_baseline_5F_assembly_5F_actualInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_actualInstruction (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FD reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FD : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD (const class cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                     const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_FD class_func_new (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                     const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                     const class GGS_bool & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_FD class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_instruction_FD class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_FD : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                               const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                               const class GGS_bool & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                          const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                          const GGS_bool & in_m_5F_W_5F_isDestination
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FD_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD bang_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_instruction_5F_FD unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_instruction_5F_FD result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_instruction_5F_FD (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_F reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_F : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F (const class cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_F class_func_new (const class GGS_location & inOperand0,
                                                                                    const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                    const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_F class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_instruction_F class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_F : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                          const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                          Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                         const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                         const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_F_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F bang_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_instruction_5F_F unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_instruction_5F_F result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_instruction_5F_F (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FB reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FB : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB (const class cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_bit_5F_oriented_5F_op readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_bit_5F_oriented_5F_op & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                     const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                     const class GGS_uint & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_FB class_func_new (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                     const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                     const class GGS_uint & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_FB class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_instruction_FB class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_FB : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                               const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                               const class GGS_uint & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                          const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                          const GGS_uint & in_mBitNumber
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FB_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB bang_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_instruction_5F_FB unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_instruction_5F_FB result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_instruction_5F_FB (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_BitTestSkip reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const class cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GGS_bool & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_bool & inOperand1,
                                                                                              const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip class_func_new (const class GGS_location & inOperand0,
                                                                                              const class GGS_bool & inOperand1,
                                                                                              const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_uint & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_instruction_BitTestSkip class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_bool & inOperand1,
                                                                                        const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GGS_uint & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_bool & in_mSkipIfSet,
                                                                   const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_uint & in_mBitNumber
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip bang_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_GOTO reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_GOTO : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_GOTO (const class cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_GOTO extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_GOTO class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_GOTO class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_GOTO class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_GOTO : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_GOTO_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_GOTO_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_GOTO_2E_weak (const class GGS_baseline_5F_assembly_5F_GOTO & inSource) ;

  public: GGS_baseline_5F_assembly_5F_GOTO_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_GOTO_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_GOTO bang_baseline_5F_assembly_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_GOTO unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_GOTO result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_GOTO (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_GOTO_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_SKIP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_SKIP : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_SKIP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_SKIP (const class cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_SKIP init_21_ (const class GGS_location & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_SKIP extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_SKIP class_func_new (const class GGS_location & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_SKIP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_SKIP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_SKIP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_SKIP : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_SKIP_init_21_ (const class GGS_location & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_SKIP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_SKIP (const GGS_location & in_mInstructionLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_SKIP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_SKIP_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_SKIP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_SKIP_2E_weak (const class GGS_baseline_5F_assembly_5F_SKIP & inSource) ;

  public: GGS_baseline_5F_assembly_5F_SKIP_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_SKIP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_SKIP_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_SKIP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_SKIP bang_baseline_5F_assembly_5F_SKIP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_SKIP unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_SKIP result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_SKIP * p = (cPtr_baseline_5F_assembly_5F_SKIP *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_SKIP (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_SKIP_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_SKIP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_SKIP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_SKIP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_CALL reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_CALL : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_CALL (const class cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_CALL extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_CALL class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_CALL class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_CALL class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_CALL : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_CALL (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_CALL_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_CALL_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_CALL_2E_weak (const class GGS_baseline_5F_assembly_5F_CALL & inSource) ;

  public: GGS_baseline_5F_assembly_5F_CALL_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_CALL_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_CALL bang_baseline_5F_assembly_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_CALL unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_CALL result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_CALL (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_CALL_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_WO_5F_OPERAND reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND init_21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND class_func_new (const class GGS_location & inOperand0,
                                                                                 const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_WO_5F_OPERAND class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_WO_OPERAND class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_WO_5F_OPERAND_init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                      const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (const class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) ;

  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND bang_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_WO_5F_OPERAND unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_TRIS reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_TRIS : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_TRIS (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_TRIS (const class cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mOpcode (void) const ;
  public: void setProperty_mOpcode (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_TRIS init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_uint & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_TRIS extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_TRIS class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_uint & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_TRIS class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_TRIS class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_TRIS : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_TRIS_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_uint & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOperand ;
  public: GGS_uint mProperty_mOpcode ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mOperand,
                                             const GGS_uint & in_mOpcode
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_TRIS_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_TRIS_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_TRIS_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_TRIS_2E_weak (const class GGS_baseline_5F_assembly_5F_TRIS & inSource) ;

  public: GGS_baseline_5F_assembly_5F_TRIS_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_TRIS & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_TRIS_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_TRIS_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_TRIS bang_baseline_5F_assembly_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_TRIS unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_TRIS result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_TRIS (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_TRIS_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_TRIS_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_TRIS_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_TRIS_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;
  public: void setProperty_mLiteralValue (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                               const class GGS_uint & inOperand2,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                                   const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                   const class GGS_uint & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_instruction_literalOperation class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                         const class GGS_uint & inOperand2,
                                                                                         Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                        const GGS_uint & in_mLiteralValue
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation bang_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_incDecRegisterInCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_bool & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition class_func_new (const class GGS_location & inOperand0,
                                                                                             const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_bool & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_incDecRegisterInCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_incDecRegisterInCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                  const GGS_bool & in_mIncrement,
                                                                  const GGS_bool & in_m_5F_W_5F_isDestination
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (const class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition bang_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_incDecRegisterInCondition unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (p) ;
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
  public: static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_assembly_instruction length'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_length (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateAssemblyCode (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               const class GGS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                               const class GGS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                               class GGS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_symbolTable map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_baseline_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baseline_5F_symbolTable_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_symbolTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_symbolTable (void) ;

//--------------------------------- Handle copy
  public: GGS_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inSource) ;
  public: GGS_baseline_5F_symbolTable & operator = (const GGS_baseline_5F_symbolTable & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_symbolTable init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_symbolTable extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_symbolTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_symbolTable class_func_mapWithMapToOverride (const class GGS_baseline_5F_symbolTable & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_baseline_5F_symbolTable add_operation (const GGS_baseline_5F_symbolTable & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GGS_uint constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRoutineAddressForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_symbolTable getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_symbolTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_baseline_5F_symbolTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_baseline_5F_symbolTable_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_baseline_5F_symbolTable ;
 
} ; // End of GGS_baseline_5F_symbolTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_symbolTable : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@baseline_symbolTable' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_baseline_5F_symbolTable : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mRoutineAddress ;

//--- Constructors
  public: cMapElement_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable_2E_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_baseline_5F_symbolTable (const GGS_lstring & inKey,
                                               const GGS_uint & in_mRoutineAddress
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
// Phase 1: @baseline_5F_symbolTable_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_symbolTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRoutineAddress ;
  public: inline GGS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_symbolTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_baseline_5F_symbolTable_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_symbolTable_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_uint & in_mRoutineAddress) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_symbolTable_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_symbolTable_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_symbolTable_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_baseline_5F_symbolTable_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: baseline_symbolTable.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_symbolTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baseline_5F_symbolTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_symbolTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baseline_5F_symbolTable_2E_element_3F_ (const GGS_baseline_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baseline_5F_symbolTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baseline_5F_symbolTable_2E_element unwrappedValue (void) const {
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
  public: static GGS_baseline_5F_symbolTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_baseline_5F_symbolTable_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_assembly_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              class GGS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              class GGS_uint & io_ioWordAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const class GGS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      class GGS_string & io_ioListFileContents,
                                                      class GGS_uint & io_ioWordAddress,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction (const class cPtr_midrange_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_init_21_ (const class GGS_location & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction (const GGS_location & in_mInstructionLocation
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_2E_weak (const class GGS_midrange_5F_instruction & inSource) ;

  public: GGS_midrange_5F_instruction_2E_weak & operator = (const class GGS_midrange_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction bang_midrange_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction unwrappedValue (void) const {
    GGS_midrange_5F_instruction result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction * p = (cPtr_midrange_5F_instruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction (p) ;
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
  public: static GGS_midrange_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_instructionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_midrange_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_midrange_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instructionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instructionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instructionList class_func_listWithValue (const class GGS_midrange_5F_instruction & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_midrange_5F_instructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_midrange_5F_instruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_instructionList add_operation (const GGS_midrange_5F_instructionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_midrange_5F_instruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_midrange_5F_instruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_midrange_5F_instruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_midrange_5F_instruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_midrange_5F_instruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_midrange_5F_instruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_midrange_5F_instruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_midrange_5F_instruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_instructionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_instructionList ;
 
} ; // End of GGS_midrange_5F_instructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_instructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_instructionList (const GGS_midrange_5F_instructionList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_midrange_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instructionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_midrange_5F_instruction mProperty_mInstruction ;
  public: inline GGS_midrange_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_midrange_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_instructionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_instructionList_2E_element (const GGS_midrange_5F_instruction & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instructionList_2E_element init_21_ (const class GGS_midrange_5F_instruction & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instructionList_2E_element class_func_new (const class GGS_midrange_5F_instruction & inOperand0,
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
 
} ; // End of GGS_midrange_5F_instructionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_nobanksel reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_nobanksel : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_nobanksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_nobanksel (const class cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_nobanksel init_21_ (const class GGS_location & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_nobanksel extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_nobanksel class_func_new (const class GGS_location & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_nobanksel class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_nobanksel class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_nobanksel : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_nobanksel_init_21_ (const class GGS_location & inOperand0,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_nobanksel_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_nobanksel_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (const class GGS_midrange_5F_instruction_5F_nobanksel & inSource) ;

  public: GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_nobanksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_nobanksel_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_nobanksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_nobanksel bang_midrange_5F_instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_nobanksel unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_nobanksel result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_nobanksel * p = (cPtr_midrange_5F_instruction_5F_nobanksel *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_nobanksel (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_nobanksel_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_nobanksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_nobanksel_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_banksel reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_banksel (const class cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;
  public: void setProperty_mBankIndex (const GGS_luint & inValue) ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;
  public: void setProperty_mWarningOnUselessBanksel (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_banksel init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_luint & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_banksel extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_banksel class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_luint & inOperand1,
                                                                              const class GGS_bool & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_banksel class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_banksel class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_banksel_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_luint & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBankIndex ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
                                                   const GGS_luint & in_mBankIndex,
                                                   const GGS_bool & in_mWarningOnUselessBanksel
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_banksel_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_banksel_2E_weak (const class GGS_midrange_5F_instruction_5F_banksel & inSource) ;

  public: GGS_midrange_5F_instruction_5F_banksel_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_banksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_banksel_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_banksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_banksel bang_midrange_5F_instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_banksel unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_banksel result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_banksel (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_banksel_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_banksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_banksel_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrangeInstruction_5F_checkbank reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checkbank : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checkbank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrangeInstruction_5F_checkbank (const class cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBankIndex (void) const ;
  public: void setProperty_mBankIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrangeInstruction_5F_checkbank init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_uint & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrangeInstruction_5F_checkbank extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrangeInstruction_5F_checkbank class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrangeInstruction_5F_checkbank class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrangeInstruction_checkbank class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrangeInstruction_5F_checkbank : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrangeInstruction_5F_checkbank_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_midrangeInstruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrangeInstruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
                                                 const GGS_uint & in_mBankIndex
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrangeInstruction_5F_checkbank_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checkbank_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checkbank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrangeInstruction_5F_checkbank_2E_weak (const class GGS_midrangeInstruction_5F_checkbank & inSource) ;

  public: GGS_midrangeInstruction_5F_checkbank_2E_weak & operator = (const class GGS_midrangeInstruction_5F_checkbank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrangeInstruction_5F_checkbank_2E_weak init_nil (void) {
    GGS_midrangeInstruction_5F_checkbank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrangeInstruction_5F_checkbank bang_midrangeInstruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrangeInstruction_5F_checkbank unwrappedValue (void) const {
    GGS_midrangeInstruction_5F_checkbank result ;
    if (isValid ()) {
      const cPtr_midrangeInstruction_5F_checkbank * p = (cPtr_midrangeInstruction_5F_checkbank *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrangeInstruction_5F_checkbank (p) ;
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
  public: static GGS_midrangeInstruction_5F_checkbank_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrangeInstruction_5F_checkbank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checkbank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrangeInstruction_5F_checkbank_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrangeInstruction_5F_checknobank reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checknobank : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checknobank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrangeInstruction_5F_checknobank (const class cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrangeInstruction_5F_checknobank init_21_ (const class GGS_location & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrangeInstruction_5F_checknobank extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrangeInstruction_5F_checknobank class_func_new (const class GGS_location & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrangeInstruction_5F_checknobank class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrangeInstruction_checknobank class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrangeInstruction_5F_checknobank : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrangeInstruction_5F_checknobank_init_21_ (const class GGS_location & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrangeInstruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrangeInstruction_5F_checknobank (const GGS_location & in_mInstructionLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrangeInstruction_5F_checknobank_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checknobank_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checknobank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrangeInstruction_5F_checknobank_2E_weak (const class GGS_midrangeInstruction_5F_checknobank & inSource) ;

  public: GGS_midrangeInstruction_5F_checknobank_2E_weak & operator = (const class GGS_midrangeInstruction_5F_checknobank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrangeInstruction_5F_checknobank_2E_weak init_nil (void) {
    GGS_midrangeInstruction_5F_checknobank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrangeInstruction_5F_checknobank bang_midrangeInstruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrangeInstruction_5F_checknobank unwrappedValue (void) const {
    GGS_midrangeInstruction_5F_checknobank result ;
    if (isValid ()) {
      const cPtr_midrangeInstruction_5F_checknobank * p = (cPtr_midrangeInstruction_5F_checknobank *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrangeInstruction_5F_checknobank (p) ;
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
  public: static GGS_midrangeInstruction_5F_checknobank_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrangeInstruction_5F_checknobank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checknobank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrangeInstruction_5F_checknobank_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_banksel_5F_register reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel_5F_register : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register (const class cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;
  public: void setProperty_mRegister (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;
  public: void setProperty_mWarningOnUselessBanksel (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_banksel_5F_register init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_registerExpression & inOperand1,
                                                                                      const class GGS_bool & inOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_banksel_5F_register extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_banksel_5F_register class_func_new (const class GGS_location & inOperand0,
                                                                                          const class GGS_registerExpression & inOperand1,
                                                                                          const class GGS_bool & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_banksel_5F_register class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_banksel_register class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel_5F_register : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_registerExpression & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                               const GGS_registerExpression & in_mRegister,
                                                               const GGS_bool & in_mWarningOnUselessBanksel
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_banksel_5F_register_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (const class GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) ;

  public: GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register bang_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_banksel_5F_register unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_banksel_5F_register (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_savebank reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_savebank : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_savebank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_savebank (const class cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;
  public: void setProperty_mRegister (const GGS_registerExpression & inValue) ;

  public: class GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_midrange_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfSaveBankInstruction (void) const ;
  public: void setProperty_mEndOfSaveBankInstruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_savebank init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_registerExpression & inOperand1,
                                                                               const class GGS_midrange_5F_instructionList & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_savebank extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_savebank class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_registerExpression & inOperand1,
                                                                               const class GGS_midrange_5F_instructionList & inOperand2,
                                                                               const class GGS_location & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_savebank class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_savebank class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_savebank : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_registerExpression & inOperand1,
                                                                         const class GGS_midrange_5F_instructionList & inOperand2,
                                                                         const class GGS_location & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;
  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfSaveBankInstruction ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                    const GGS_registerExpression & in_mRegister,
                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GGS_location & in_mEndOfSaveBankInstruction
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_savebank_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_savebank_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_savebank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_savebank_2E_weak (const class GGS_midrange_5F_instruction_5F_savebank & inSource) ;

  public: GGS_midrange_5F_instruction_5F_savebank_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_savebank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_savebank_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_savebank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_savebank bang_midrange_5F_instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_savebank unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_savebank result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_savebank (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_savebank_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_savebank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_savebank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_savebank_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_STATIC_5F_REPEAT reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;
  public: void setProperty_mConstantName (const GGS_lstring & inValue) ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;
  public: void setProperty_mLowerBoundExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;
  public: void setProperty_mUpperBoundExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_midrange_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;
  public: void setProperty_mEndOfInstruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_lstring & inOperand1,
                                                                                               const class GGS_immediatExpression & inOperand2,
                                                                                               const class GGS_immediatExpression & inOperand3,
                                                                                               const class GGS_midrange_5F_instructionList & inOperand4,
                                                                                               const class GGS_location & inOperand5,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_immediatExpression & inOperand2,
                                                                                       const class GGS_immediatExpression & inOperand3,
                                                                                       const class GGS_midrange_5F_instructionList & inOperand4,
                                                                                       const class GGS_location & inOperand5
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_STATIC_REPEAT class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_immediatExpression & inOperand2,
                                                                                         const class GGS_immediatExpression & inOperand3,
                                                                                         const class GGS_midrange_5F_instructionList & inOperand4,
                                                                                         const class GGS_location & inOperand5,
                                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GGS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstruction ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mLowerBoundExpression,
                                                            const GGS_immediatExpression & in_mUpperBoundExpression,
                                                            const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfInstruction
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT bang_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_instruction_5F_FD_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDWF,
    enum_ANDWF,
    enum_COMF,
    enum_DECF,
    enum_DECFSZ,
    enum_INCF,
    enum_INCFSZ,
    enum_IORWF,
    enum_MOVF,
    enum_RLF,
    enum_RRF,
    enum_SUBWF,
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
  public: static GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_ADDWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_ANDWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_COMF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_DECF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_INCF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_IORWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_MOVF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_RLF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_RRF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_SUBWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_SWAPF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRLF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FD reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FD : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_FD (const class cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;
  public: void setProperty_mInstruction_5F_FD_5F_base_5F_code (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FD class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FD class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_FD class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FD : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bool & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                              const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bool & in_m_5F_W_5F_isDestination
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FD_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FD_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_FD_2E_weak (const class GGS_midrange_5F_instruction_5F_FD & inSource) ;

  public: GGS_midrange_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_FD bang_midrange_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_FD unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_FD result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_FD (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FD_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_F_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_MOVWF
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
  public: static GGS_midrange_5F_F_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_F_5F_instruction_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_F reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_F : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_F (const class cPtr_midrange_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;
  public: void setProperty_mFAinstruction (const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                    const class GGS_registerExpression & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_F class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                        const class GGS_registerExpression & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_F class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_F class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_F : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                              const class GGS_registerExpression & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                             const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GGS_registerExpression & in_mRegisterExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_F_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_F_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_F_2E_weak (const class GGS_midrange_5F_instruction_5F_F & inSource) ;

  public: GGS_midrange_5F_instruction_5F_F_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_F bang_midrange_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_F unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_F result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_F (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_F_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_bit_5F_oriented_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_BCF,
    enum_BSF
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
  public: static GGS_midrange_5F_bit_5F_oriented_5F_op extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_bit_5F_oriented_5F_op class_func_BCF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_bit_5F_oriented_5F_op class_func_BSF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBSF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_bit_5F_oriented_5F_op class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FB reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FB : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_FB (const class cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;
  public: void setProperty_mBitOrientedOp (const GGS_midrange_5F_bit_5F_oriented_5F_op & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FB class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FB class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_FB class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FB : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bitNumberExpression & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                              const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bitNumberExpression & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FB_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FB_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_FB_2E_weak (const class GGS_midrange_5F_instruction_5F_FB & inSource) ;

  public: GGS_midrange_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_FB bang_midrange_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_FB unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_FB result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_FB (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FB_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CALL reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CALL : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_CALL (const class cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_CALL extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CALL class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_CALL class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_CALL class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CALL : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CALL_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CALL_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_CALL_2E_weak (const class GGS_midrange_5F_instruction_5F_CALL & inSource) ;

  public: GGS_midrange_5F_instruction_5F_CALL_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_CALL_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_CALL bang_midrange_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_CALL unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_CALL result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_CALL (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_CALL_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JSR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JSR : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_JSR (const class cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_JSR init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_JSR extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_JSR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_JSR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JSR : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_JSR_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JSR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JSR_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_JSR_2E_weak (const class GGS_midrange_5F_instruction_5F_JSR & inSource) ;

  public: GGS_midrange_5F_instruction_5F_JSR_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_JSR_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_JSR bang_midrange_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_JSR unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_JSR result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_JSR (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_JSR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JUMP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JUMP : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_JUMP (const class cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_JUMP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_JUMP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_JUMP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_JUMP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JUMP : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_JUMP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JUMP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JUMP_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_JUMP_2E_weak (const class GGS_midrange_5F_instruction_5F_JUMP & inSource) ;

  public: GGS_midrange_5F_instruction_5F_JUMP_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_JUMP_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_JUMP bang_midrange_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_JUMP unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_JUMP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_JUMP (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_JUMP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_GOTO reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_GOTO : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_GOTO (const class cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_GOTO extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_GOTO class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_GOTO class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_GOTO class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_GOTO : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_GOTO_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_GOTO_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_GOTO_2E_weak (const class GGS_midrange_5F_instruction_5F_GOTO & inSource) ;

  public: GGS_midrange_5F_instruction_5F_GOTO_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_GOTO_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_GOTO bang_midrange_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_GOTO unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_GOTO result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_GOTO (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_GOTO_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CLRWDT reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CLRWDT : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_CLRWDT (const class cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_CLRWDT init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_CLRWDT extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CLRWDT class_func_new (const class GGS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_CLRWDT class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_CLRWDT class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_CLRWDT_init_21_ (const class GGS_location & inOperand0,
                                                           Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CLRWDT_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (const class GGS_midrange_5F_instruction_5F_CLRWDT & inSource) ;

  public: GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_CLRWDT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_CLRWDT bang_midrange_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_CLRWDT unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_CLRWDT result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_CLRWDT * p = (cPtr_midrange_5F_instruction_5F_CLRWDT *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_CLRWDT (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CLRW reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CLRW : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_CLRW (const class cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_CLRW init_21_ (const class GGS_location & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_CLRW extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CLRW class_func_new (const class GGS_location & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_CLRW class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_CLRW class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CLRW : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_CLRW_init_21_ (const class GGS_location & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CLRW_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CLRW_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CLRW_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_CLRW_2E_weak (const class GGS_midrange_5F_instruction_5F_CLRW & inSource) ;

  public: GGS_midrange_5F_instruction_5F_CLRW_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_CLRW & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_CLRW_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_CLRW_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_CLRW bang_midrange_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_CLRW unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_CLRW result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_CLRW * p = (cPtr_midrange_5F_instruction_5F_CLRW *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_CLRW (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_CLRW_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CLRW_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRW_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_CLRW_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_NOP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_NOP : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_NOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_NOP (const class cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_NOP init_21_ (const class GGS_location & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_NOP extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_NOP class_func_new (const class GGS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_NOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_NOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_NOP : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_NOP_init_21_ (const class GGS_location & inOperand0,
                                                        Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_NOP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_NOP_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_NOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_NOP_2E_weak (const class GGS_midrange_5F_instruction_5F_NOP & inSource) ;

  public: GGS_midrange_5F_instruction_5F_NOP_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_NOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_NOP_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_NOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_NOP bang_midrange_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_NOP unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_NOP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_NOP * p = (cPtr_midrange_5F_instruction_5F_NOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_NOP (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_NOP_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_NOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_NOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_NOP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_SLEEP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_SLEEP : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_SLEEP (const class cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_SLEEP init_21_ (const class GGS_location & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_SLEEP extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_SLEEP class_func_new (const class GGS_location & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_SLEEP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_SLEEP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_SLEEP_init_21_ (const class GGS_location & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_SLEEP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_SLEEP_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (const class GGS_midrange_5F_instruction_5F_SLEEP & inSource) ;

  public: GGS_midrange_5F_instruction_5F_SLEEP_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_SLEEP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_SLEEP_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_SLEEP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_SLEEP bang_midrange_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_SLEEP unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_SLEEP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_SLEEP * p = (cPtr_midrange_5F_instruction_5F_SLEEP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_SLEEP (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_SLEEP_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_SLEEP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_SLEEP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_literal_5F_instruction_5F_opcode
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDLW,
    enum_ANDLW,
    enum_IORLW,
    enum_MOVLW,
    enum_RETLW,
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
  public: static GGS_midrange_5F_literal_5F_instruction_5F_opcode extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_ADDLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_ANDLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_IORLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_MOVLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_RETLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_SUBLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRETLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_literal_5F_instruction_5F_opcode class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_literalOperation : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_literalOperation (const class cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;
  public: void setProperty_mLiteralInstruction (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                   const class GGS_immediatExpression & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                       const class GGS_immediatExpression & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_literalOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_literalOperation class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                             const class GGS_immediatExpression & inOperand2,
                                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                            const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                            const GGS_immediatExpression & in_mImmediatExpression
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_literalOperation_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_literalOperation_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (const class GGS_midrange_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_midrange_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_literalOperation bang_midrange_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_literalOperation (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_literalOperation_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_MNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_MNOP : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_MNOP (const class cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_luint & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_luint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_MNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_MNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_MNOP : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_luint & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                const GGS_luint & in_mOccurrenceFactor
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_MNOP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_MNOP_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_MNOP_2E_weak (const class GGS_midrange_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_midrange_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_MNOP bang_midrange_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_MNOP unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_MNOP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_MNOP (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_MNOP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FOREVER reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FOREVER : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_FOREVER (const class cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_midrange_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;
  public: void setProperty_mEndOfInstructionList (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_FOREVER init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_midrange_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_FOREVER extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FOREVER class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_midrange_5F_instructionList & inOperand1,
                                                                              const class GGS_location & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FOREVER class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_FOREVER class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FOREVER : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_midrange_5F_instructionList & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                   const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                   const GGS_location & in_mEndOfInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FOREVER_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FOREVER_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (const class GGS_midrange_5F_instruction_5F_FOREVER & inSource) ;

  public: GGS_midrange_5F_instruction_5F_FOREVER_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_FOREVER & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_FOREVER_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_FOREVER_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_FOREVER bang_midrange_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_FOREVER unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_FOREVER result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_FOREVER (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_FOREVER_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FOREVER_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_FOREVER_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_midrange_5F_instruction & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_midrange_5F_instruction & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_IF_SEMI_COLON class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_midrange_5F_instruction & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instruction mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                               const GGS_midrange_5F_instruction & in_mInstruction
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const class GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON bang_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_BitTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_BitTest : public GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GGS_bool & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_IF_5F_BitTest init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_midrange_5F_instruction & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_registerExpression & inOperand3,
                                                                                        const class GGS_bitNumberExpression & inOperand4,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_IF_5F_BitTest extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_IF_5F_BitTest class_func_new (const class GGS_location & inOperand0,
                                                                                    const class GGS_midrange_5F_instruction & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_registerExpression & inOperand3,
                                                                                    const class GGS_bitNumberExpression & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_IF_5F_BitTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_IF_BitTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_midrange_5F_instruction & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_registerExpression & inOperand3,
                                                                                  const class GGS_bitNumberExpression & inOperand4,
                                                                                  Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
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
  public: cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                         const GGS_midrange_5F_instruction & in_mInstruction,
                                                         const GGS_bool & in_mSkipIfSet,
                                                         const GGS_registerExpression & in_mRegisterExpression,
                                                         const GGS_bitNumberExpression & in_mBitNumber
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak : public GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (const class GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) ;

  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest bang_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_IF_5F_BitTest unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_IF_5F_BitTest (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_IncDec : public GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec (const class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_IF_5F_IncDec init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_midrange_5F_instruction & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_registerExpression & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_IF_5F_IncDec extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_IF_5F_IncDec class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_instruction & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   const class GGS_registerExpression & inOperand3,
                                                                                   const class GGS_bool & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_IF_5F_IncDec class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_IF_IncDec class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_midrange_5F_instruction & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_registerExpression & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                        const GGS_midrange_5F_instruction & in_mInstruction,
                                                        const GGS_bool & in_mIncrement,
                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bool & in_m_5F_W_5F_isDestination
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak : public GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (const class GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) ;

  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec bang_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_IF_5F_IncDec unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_IF_5F_IncDec (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_conditionExpression reference class
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_conditionExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_conditionExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_conditionExpression : public acStrongPtr_class {

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


//--- Default constructor
  public: cPtr_midrange_5F_conditionExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_conditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_conditionExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_conditionExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_conditionExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_conditionExpression_2E_weak (const class GGS_midrange_5F_conditionExpression & inSource) ;

  public: GGS_midrange_5F_conditionExpression_2E_weak & operator = (const class GGS_midrange_5F_conditionExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_conditionExpression_2E_weak init_nil (void) {
    GGS_midrange_5F_conditionExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_conditionExpression bang_midrange_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_conditionExpression unwrappedValue (void) const {
    GGS_midrange_5F_conditionExpression result ;
    if (isValid ()) {
      const cPtr_midrange_5F_conditionExpression * p = (cPtr_midrange_5F_conditionExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_conditionExpression (p) ;
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
  public: static GGS_midrange_5F_conditionExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_conditionExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_conditionExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_conditionExpression_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_incDecRegisterInCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_incDecRegisterInCondition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_incDecRegisterInCondition init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_incDecRegisterInCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_bool & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_incDecRegisterInCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_incDecRegisterInCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_incDecRegisterInCondition : public cPtr_midrange_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                           const class GGS_bool & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_bool & inOperand3,
                                                                           Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method computeInstructionCountForCondition
  public: virtual void method_computeInstructionCountForCondition (const class GGS_bool arg_inComplementaryBranch,
           class GGS_uint & arg_outInstructionCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_midrange_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_incDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                      const GGS_bool & in_mIncrement,
                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                      const GGS_bool & in_mBranchIfZero
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_incDecRegisterInCondition_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_incDecRegisterInCondition_2E_weak : public GGS_midrange_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_incDecRegisterInCondition_2E_weak (const class GGS_midrange_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_midrange_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_midrange_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_midrange_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_incDecRegisterInCondition bang_midrange_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_incDecRegisterInCondition unwrappedValue (void) const {
    GGS_midrange_5F_incDecRegisterInCondition result ;
    if (isValid ()) {
      const cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_incDecRegisterInCondition (p) ;
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
  public: static GGS_midrange_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_incDecRegisterInCondition_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_negateCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_negateCondition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_negateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_negateCondition (const class cPtr_midrange_5F_negateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_conditionExpression readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GGS_midrange_5F_conditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_negateCondition init_21_ (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_negateCondition extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_negateCondition class_func_new (const class GGS_midrange_5F_conditionExpression & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_negateCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_negateCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_negateCondition : public cPtr_midrange_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_negateCondition_init_21_ (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                     Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method computeInstructionCountForCondition
  public: virtual void method_computeInstructionCountForCondition (const class GGS_bool arg_inComplementaryBranch,
           class GGS_uint & arg_outInstructionCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_conditionExpression mProperty_mCondition ;


//--- Default constructor
  public: cPtr_midrange_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_negateCondition (const GGS_midrange_5F_conditionExpression & in_mCondition
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_negateCondition_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_negateCondition_2E_weak : public GGS_midrange_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_negateCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_negateCondition_2E_weak (const class GGS_midrange_5F_negateCondition & inSource) ;

  public: GGS_midrange_5F_negateCondition_2E_weak & operator = (const class GGS_midrange_5F_negateCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_negateCondition_2E_weak init_nil (void) {
    GGS_midrange_5F_negateCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_negateCondition bang_midrange_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_negateCondition unwrappedValue (void) const {
    GGS_midrange_5F_negateCondition result ;
    if (isValid ()) {
      const cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_negateCondition (p) ;
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
  public: static GGS_midrange_5F_negateCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_negateCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_negateCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_negateCondition_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_andCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_andCondition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_andCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_andCondition (const class cPtr_midrange_5F_andCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_conditionExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_midrange_5F_conditionExpression & inValue) ;

  public: class GGS_midrange_5F_conditionExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_midrange_5F_conditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_andCondition init_21__21_ (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                            const class GGS_midrange_5F_conditionExpression & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_andCondition extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_andCondition class_func_new (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                                    const class GGS_midrange_5F_conditionExpression & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_andCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_andCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_andCondition : public cPtr_midrange_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_andCondition_init_21__21_ (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                      const class GGS_midrange_5F_conditionExpression & inOperand1,
                                                      Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method computeInstructionCountForCondition
  public: virtual void method_computeInstructionCountForCondition (const class GGS_bool arg_inComplementaryBranch,
           class GGS_uint & arg_outInstructionCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_conditionExpression mProperty_mLeftExpression ;
  public: GGS_midrange_5F_conditionExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_midrange_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_andCondition (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
                                         const GGS_midrange_5F_conditionExpression & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_andCondition_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_andCondition_2E_weak : public GGS_midrange_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_andCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_andCondition_2E_weak (const class GGS_midrange_5F_andCondition & inSource) ;

  public: GGS_midrange_5F_andCondition_2E_weak & operator = (const class GGS_midrange_5F_andCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_andCondition_2E_weak init_nil (void) {
    GGS_midrange_5F_andCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_andCondition bang_midrange_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_andCondition unwrappedValue (void) const {
    GGS_midrange_5F_andCondition result ;
    if (isValid ()) {
      const cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_andCondition (p) ;
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
  public: static GGS_midrange_5F_andCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_andCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_andCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_andCondition_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                              const class GGS_bitNumberExpression & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                                      const class GGS_bitNumberExpression & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_bitTest_in_structured_if_condition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_midrange_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                        const class GGS_bitNumberExpression & inOperand1,
                                                                                        Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method computeInstructionCountForCondition
  public: virtual void method_computeInstructionCountForCondition (const class GGS_bool arg_inComplementaryBranch,
           class GGS_uint & arg_outInstructionCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GGS_registerExpression & in_mRegisterExpression,
                                                                           const GGS_bitNumberExpression & in_mBitNumber
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak : public GGS_midrange_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & operator = (const class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak init_nil (void) {
    GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition unwrappedValue (void) const {
    GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
    if (isValid ()) {
      const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (p) ;
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
  public: static GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_structured_5F_if reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_structured_5F_if : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_structured_5F_if (const class cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_conditionExpression readProperty_mIfCondition (void) const ;
  public: void setProperty_mIfCondition (const GGS_midrange_5F_conditionExpression & inValue) ;

  public: class GGS_midrange_5F_instructionList readProperty_mThenInstructionList (void) const ;
  public: void setProperty_mThenInstructionList (const GGS_midrange_5F_instructionList & inValue) ;

  public: class GGS_midrange_5F_instructionList readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GGS_midrange_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfElsePartLocation (void) const ;
  public: void setProperty_mEndOfElsePartLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_structured_5F_if init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_midrange_5F_conditionExpression & inOperand1,
                                                                                           const class GGS_midrange_5F_instructionList & inOperand2,
                                                                                           const class GGS_midrange_5F_instructionList & inOperand3,
                                                                                           const class GGS_location & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_structured_5F_if extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_structured_5F_if class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_midrange_5F_conditionExpression & inOperand1,
                                                                                       const class GGS_midrange_5F_instructionList & inOperand2,
                                                                                       const class GGS_midrange_5F_instructionList & inOperand3,
                                                                                       const class GGS_location & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_structured_5F_if class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_structured_if class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_structured_5F_if : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_midrange_5F_conditionExpression & inOperand1,
                                                                                     const class GGS_midrange_5F_instructionList & inOperand2,
                                                                                     const class GGS_midrange_5F_instructionList & inOperand3,
                                                                                     const class GGS_location & inOperand4,
                                                                                     Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_conditionExpression mProperty_mIfCondition ;
  public: GGS_midrange_5F_instructionList mProperty_mThenInstructionList ;
  public: GGS_midrange_5F_instructionList mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElsePartLocation ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                            const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                                                            const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                                                            const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                                                            const GGS_location & in_mEndOfElsePartLocation
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_structured_5F_if_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (const class GGS_midrange_5F_instruction_5F_structured_5F_if & inSource) ;

  public: GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_structured_5F_if bang_midrange_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_structured_5F_if unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_structured_5F_if result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_structured_5F_if (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_partList list
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_partList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_partList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_midrange_5F_partList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_midrange_5F_conditionExpression & in_mCondition,
                                                 const class GGS_midrange_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_partList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_partList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_partList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_partList class_func_listWithValue (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                                          const class GGS_midrange_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_midrange_5F_partList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                     const class GGS_midrange_5F_instructionList & inOperand1,
                                                     const class GGS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_partList add_operation (const GGS_midrange_5F_partList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_midrange_5F_conditionExpression constinArgument0,
                                               class GGS_midrange_5F_instructionList constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_midrange_5F_conditionExpression constinArgument0,
                                                      class GGS_midrange_5F_instructionList constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                 class GGS_midrange_5F_instructionList & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                class GGS_midrange_5F_instructionList & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                      class GGS_midrange_5F_instructionList & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GGS_midrange_5F_conditionExpression constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_midrange_5F_conditionExpression & outArgument0,
                                              class GGS_midrange_5F_instructionList & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_midrange_5F_conditionExpression & outArgument0,
                                             class GGS_midrange_5F_instructionList & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_conditionExpression getter_mConditionAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfPartLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_partList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_partList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_partList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_partList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_partList ;
 
} ; // End of GGS_midrange_5F_partList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_partList : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_partList (const GGS_midrange_5F_partList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_midrange_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_partList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_partList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_partList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_midrange_5F_conditionExpression mProperty_mCondition ;
  public: inline GGS_midrange_5F_conditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const {
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
  public: GGS_midrange_5F_partList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GGS_midrange_5F_conditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_midrange_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_partList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_partList_2E_element (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                               const GGS_midrange_5F_instructionList & in_mInstructionList,
                                               const GGS_location & in_mEndOfPartLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_partList_2E_element init_21__21__21_ (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                                       const class GGS_midrange_5F_instructionList & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_partList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_partList_2E_element class_func_new (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                                           const class GGS_midrange_5F_instructionList & inOperand1,
                                                                           const class GGS_location & inOperand2,
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
 
} ; // End of GGS_midrange_5F_partList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_do_5F_while reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_do_5F_while : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_do_5F_while (const class cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instructionList readProperty_mRepeatedInstructionList (void) const ;
  public: void setProperty_mRepeatedInstructionList (const GGS_midrange_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructionList (void) const ;
  public: void setProperty_mEndOfRepeatedInstructionList (const GGS_location & inValue) ;

  public: class GGS_midrange_5F_partList readProperty_mWhilePartList (void) const ;
  public: void setProperty_mWhilePartList (const GGS_midrange_5F_partList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_do_5F_while init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                  const class GGS_location & inOperand2,
                                                                                  const class GGS_midrange_5F_partList & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_do_5F_while extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_do_5F_while class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                  const class GGS_location & inOperand2,
                                                                                  const class GGS_midrange_5F_partList & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_do_5F_while class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_do_while class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_do_5F_while : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_midrange_5F_instructionList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_midrange_5F_partList & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GGS_midrange_5F_partList mProperty_mWhilePartList ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                       const GGS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                       const GGS_location & in_mEndOfRepeatedInstructionList,
                                                       const GGS_midrange_5F_partList & in_mWhilePartList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_do_5F_while_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak (const class GGS_midrange_5F_instruction_5F_do_5F_while & inSource) ;

  public: GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_do_5F_while bang_midrange_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_instruction_5F_do_5F_while unwrappedValue (void) const {
    GGS_midrange_5F_instruction_5F_do_5F_while result ;
    if (isValid ()) {
      const cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_instruction_5F_do_5F_while (p) ;
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
  public: static GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_interruptDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_interruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_interruptDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_midrange_5F_interruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mInterruptLocation,
                                                 const class GGS_midrange_5F_instructionList & in_mInstructionList,
                                                 const class GGS_lstring & in_mFirstSaveRegister,
                                                 const class GGS_lstring & in_mSecondSaveRegister,
                                                 const class GGS_location & in_mEndOfInterruptLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_interruptDefinitionList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_interruptDefinitionList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_interruptDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_interruptDefinitionList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_lstring & inOperand3,
                                                                                         const class GGS_location & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_midrange_5F_interruptDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_location & inOperand0,
                                                     const class GGS_midrange_5F_instructionList & inOperand1,
                                                     const class GGS_lstring & inOperand2,
                                                     const class GGS_lstring & inOperand3,
                                                     const class GGS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_interruptDefinitionList add_operation (const GGS_midrange_5F_interruptDefinitionList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_midrange_5F_instructionList constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               class GGS_location constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_midrange_5F_instructionList constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_location constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_midrange_5F_instructionList & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class GGS_location & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_midrange_5F_instructionList & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                class GGS_location & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_midrange_5F_instructionList & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_location & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstSaveRegisterAtIndex (class GGS_lstring constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSecondSaveRegisterAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_midrange_5F_instructionList & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              class GGS_location & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_midrange_5F_instructionList & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             class GGS_location & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFirstSaveRegisterAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSecondSaveRegisterAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_interruptDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_interruptDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_interruptDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_interruptDefinitionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_interruptDefinitionList ;
 
} ; // End of GGS_midrange_5F_interruptDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_interruptDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList & inEnumeratedObject,
                                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_interruptDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_interruptDefinitionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_interruptDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mInterruptLocation ;
  public: inline GGS_location readProperty_mInterruptLocation (void) const {
    return mProperty_mInterruptLocation ;
  }

  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_lstring mProperty_mFirstSaveRegister ;
  public: inline GGS_lstring readProperty_mFirstSaveRegister (void) const {
    return mProperty_mFirstSaveRegister ;
  }

  public: GGS_lstring mProperty_mSecondSaveRegister ;
  public: inline GGS_lstring readProperty_mSecondSaveRegister (void) const {
    return mProperty_mSecondSaveRegister ;
  }

  public: GGS_location mProperty_mEndOfInterruptLocation ;
  public: inline GGS_location readProperty_mEndOfInterruptLocation (void) const {
    return mProperty_mEndOfInterruptLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptLocation = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_midrange_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMFirstSaveRegister (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstSaveRegister = inValue ;
  }

  public: inline void setter_setMSecondSaveRegister (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSecondSaveRegister = inValue ;
  }

  public: inline void setter_setMEndOfInterruptLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInterruptLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_interruptDefinitionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_location & in_mInterruptLocation,
                                                              const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                              const GGS_lstring & in_mFirstSaveRegister,
                                                              const GGS_lstring & in_mSecondSaveRegister,
                                                              const GGS_location & in_mEndOfInterruptLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_interruptDefinitionList_2E_element init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                              const class GGS_lstring & inOperand2,
                                                                                              const class GGS_lstring & inOperand3,
                                                                                              const class GGS_location & inOperand4,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_interruptDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_interruptDefinitionList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                                          const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_lstring & inOperand3,
                                                                                          const class GGS_location & inOperand4,
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
 
} ; // End of GGS_midrange_5F_interruptDefinitionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_routineDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_routineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_routineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_midrange_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mPage,
                                                 const class GGS_luint & in_mRequiredBank,
                                                 const class GGS_luint & in_mReturnedBank,
                                                 const class GGS_bool & in_mPreservesBank,
                                                 const class GGS_bool & in_mIsNoReturn,
                                                 const class GGS_midrange_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_routineDefinitionList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_routineDefinitionList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_routineDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_routineDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       const class GGS_luint & inOperand2,
                                                                                       const class GGS_luint & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       const class GGS_bool & inOperand5,
                                                                                       const class GGS_midrange_5F_instructionList & inOperand6,
                                                                                       const class GGS_location & inOperand7
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_midrange_5F_routineDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_luint & inOperand1,
                                                     const class GGS_luint & inOperand2,
                                                     const class GGS_luint & inOperand3,
                                                     const class GGS_bool & inOperand4,
                                                     const class GGS_bool & inOperand5,
                                                     const class GGS_midrange_5F_instructionList & inOperand6,
                                                     const class GGS_location & inOperand7
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_routineDefinitionList add_operation (const GGS_midrange_5F_routineDefinitionList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_luint constinArgument2,
                                               class GGS_luint constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_bool constinArgument5,
                                               class GGS_midrange_5F_instructionList constinArgument6,
                                               class GGS_location constinArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_luint constinArgument2,
                                                      class GGS_luint constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_bool constinArgument5,
                                                      class GGS_midrange_5F_instructionList constinArgument6,
                                                      class GGS_location constinArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_luint & outArgument2,
                                                 class GGS_luint & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_bool & outArgument5,
                                                 class GGS_midrange_5F_instructionList & outArgument6,
                                                 class GGS_location & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_luint & outArgument2,
                                                class GGS_luint & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_bool & outArgument5,
                                                class GGS_midrange_5F_instructionList & outArgument6,
                                                class GGS_location & outArgument7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_luint & outArgument2,
                                                      class GGS_luint & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_bool & outArgument5,
                                                      class GGS_midrange_5F_instructionList & outArgument6,
                                                      class GGS_location & outArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPageAtIndex (class GGS_luint constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GGS_bool constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GGS_luint constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GGS_luint constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_luint & outArgument1,
                                              class GGS_luint & outArgument2,
                                              class GGS_luint & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_bool & outArgument5,
                                              class GGS_midrange_5F_instructionList & outArgument6,
                                              class GGS_location & outArgument7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_luint & outArgument2,
                                             class GGS_luint & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_bool & outArgument5,
                                             class GGS_midrange_5F_instructionList & outArgument6,
                                             class GGS_location & outArgument7,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mPageAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mPreservesBankAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRequiredBankAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mReturnedBankAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mRoutineNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_routineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_routineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_routineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_routineDefinitionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_routineDefinitionList ;
 
} ; // End of GGS_midrange_5F_routineDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_routineDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList & inEnumeratedObject,
                                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_routineDefinitionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_routineDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: inline GGS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GGS_luint mProperty_mPage ;
  public: inline GGS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
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

  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const {
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
  public: GGS_midrange_5F_routineDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMPage (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
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

  public: inline void setter_setMInstructionList (const GGS_midrange_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_routineDefinitionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_lstring & in_mRoutineName,
                                                            const GGS_luint & in_mPage,
                                                            const GGS_luint & in_mRequiredBank,
                                                            const GGS_luint & in_mReturnedBank,
                                                            const GGS_bool & in_mPreservesBank,
                                                            const GGS_bool & in_mIsNoReturn,
                                                            const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfRoutineLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_routineDefinitionList_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                        const class GGS_luint & inOperand1,
                                                                                                        const class GGS_luint & inOperand2,
                                                                                                        const class GGS_luint & inOperand3,
                                                                                                        const class GGS_bool & inOperand4,
                                                                                                        const class GGS_bool & inOperand5,
                                                                                                        const class GGS_midrange_5F_instructionList & inOperand6,
                                                                                                        const class GGS_location & inOperand7,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_routineDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_routineDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_luint & inOperand1,
                                                                                        const class GGS_luint & inOperand2,
                                                                                        const class GGS_luint & inOperand3,
                                                                                        const class GGS_bool & inOperand4,
                                                                                        const class GGS_bool & inOperand5,
                                                                                        const class GGS_midrange_5F_instructionList & inOperand6,
                                                                                        const class GGS_location & inOperand7,
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
 
} ; // End of GGS_midrange_5F_routineDefinitionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_registerExpression struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
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
  public: GGS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                              const GGS_uint & in_mRegisterAddress) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_registerExpression init_21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_registerExpression class_func_new (const class GGS_string & inOperand0,
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
 
} ; // End of GGS_midrange_5F_intermediate_5F_registerExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction (const class cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_symbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction bang_midrange_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction * p = (cPtr_midrange_5F_intermediate_5F_instruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_intermediate_instructionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_midrange_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instructionList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instructionList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_intermediate_5F_instructionList class_func_listWithValue (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_midrange_5F_intermediate_5F_instructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_intermediate_5F_instructionList add_operation (const GGS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_intermediate_5F_instructionList ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_intermediate_5F_instructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instructionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_midrange_5F_intermediate_5F_instruction mProperty_mInstruction ;
  public: inline GGS_midrange_5F_intermediate_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_midrange_5F_intermediate_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instructionList_2E_element init_21_ (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instructionList_2E_element class_func_new (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0,
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
 
} ; // End of GGS_midrange_5F_intermediate_5F_instructionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_NULL reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_NULL : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_NULL (const class cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_NULL init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_NULL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_NULL class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_NULL class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_NULL class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_NULL : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_NULL_init (Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_NULL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_NULL (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_NULL_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_NULL_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak (const class GGS_midrange_5F_intermediate_5F_NULL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_NULL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_NULL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_NULL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_NULL bang_midrange_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_NULL unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_NULL result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_NULL * p = (cPtr_midrange_5F_intermediate_5F_NULL *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_NULL (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_NULL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_NULL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_NULL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_NULL_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mOrigin (void) const ;
  public: void setProperty_mOrigin (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG init_21_ (const class GGS_uint & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG class_func_new (const class GGS_uint & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_pseudo_ORG class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_pseudo_5F_ORG_init_21_ (const class GGS_uint & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mOrigin ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG bang_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;
  public: void setProperty_mLabel (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mIsDeletable (void) const ;
  public: void setProperty_mIsDeletable (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_pseudo_LABEL class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_symbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;
  public: GGS_bool mProperty_mIsDeletable ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                            const GGS_bool & in_mIsDeletable
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL bang_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;

