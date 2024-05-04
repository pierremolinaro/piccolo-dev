#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_actualInstruction : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_actualInstruction (const class cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_actualInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_actualInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_actualInstruction : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

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

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (const class GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_actualInstruction bang_midrange_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_actualInstruction unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_actualInstruction result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_actualInstruction * p = (cPtr_midrange_5F_intermediate_5F_actualInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_actualInstruction (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FD : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;
  public: void setProperty_mInstruction_5F_FD_5F_base_5F_code (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inValue) ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_midrange_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FD class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_FD class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_FD class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD bang_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_FD unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_FD (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_F : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code readProperty_mFinstruction (void) const ;
  public: void setProperty_mFinstruction (const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_midrange_5F_intermediate_5F_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                    const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_F class_func_new (const class GGS_location & inOperand0,
                                                                                        const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                        const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_F class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_F class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_F : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                              const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                              Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFinstruction ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                             const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                             const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F bang_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_F unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_F result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_F (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FB : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;
  public: void setProperty_mBitOrientedOp (const GGS_midrange_5F_bit_5F_oriented_5F_op & inValue) ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_midrange_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FB class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_FB class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_FB class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_uint & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: GGS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB bang_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_FB unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_FB (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GGS_bool & inValue) ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_midrange_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class_func_new (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_BitTestSkip class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                            const class GGS_uint & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBitTestSkip
  public: virtual void method_optimizeBitTestSkip (const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_bool & in_mSkipIfSet,
                                                                       const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip bang_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_call_5F_goto_5F_bit
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_call_5F_goto_5F_bit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_call_5F_goto_5F_bit (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_set,
    enum_clear,
    enum_noChange
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
  public: static GGS_midrange_5F_call_5F_goto_5F_bit extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_clear (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_noChange (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_set (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_call_5F_goto_5F_bit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isClear (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoChange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSet (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_call_5F_goto_5F_bit class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JUMP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JUMP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_JUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;
  public: void setProperty_mBit_31__31_ (const GGS_midrange_5F_call_5F_goto_5F_bit & inValue) ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;
  public: void setProperty_mBit_31__32_ (const GGS_midrange_5F_call_5F_goto_5F_bit & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_JUMP init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JUMP extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_JUMP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_JUMP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JUMP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                      const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

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

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                 const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
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
// Phase 1: @midrange_5F_intermediate_5F_JUMP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JUMP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (const class GGS_midrange_5F_intermediate_5F_JUMP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_JUMP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_JUMP bang_midrange_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_JUMP unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_JUMP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_JUMP (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_JUMP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_GOTO reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_GOTO : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_GOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_GOTO extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_GOTO class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_GOTO class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_GOTO class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_GOTO : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_GOTO_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_GOTO_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (const class GGS_midrange_5F_intermediate_5F_GOTO & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_GOTO_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_GOTO bang_midrange_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_GOTO unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_GOTO result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_GOTO (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_GOTO_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_CALL reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_CALL : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_CALL (const class cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_CALL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_CALL class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_CALL class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_CALL class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_CALL : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
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
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_CALL_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_CALL_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak (const class GGS_midrange_5F_intermediate_5F_CALL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_CALL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_CALL bang_midrange_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_CALL unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_CALL result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_CALL (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_CALL_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JSR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JSR : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_JSR (const class cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;
  public: void setProperty_mBit_31__31_ (const GGS_midrange_5F_call_5F_goto_5F_bit & inValue) ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;
  public: void setProperty_mBit_31__32_ (const GGS_midrange_5F_call_5F_goto_5F_bit & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_JSR init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_JSR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_JSR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JSR : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                     const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

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

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
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
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
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
// Phase 1: @midrange_5F_intermediate_5F_JSR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JSR_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak (const class GGS_midrange_5F_intermediate_5F_JSR & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_JSR bang_midrange_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_JSR unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_JSR result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_JSR (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_JSR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT class_func_new (const class GGS_location & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRWDT class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_CLRWDT_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT bang_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW init_21_ (const class GGS_location & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW class_func_new (const class GGS_location & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRW class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_CLRW_init_21_ (const class GGS_location & inOperand0,
                                                                         Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW bang_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP init_21_ (const class GGS_location & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP class_func_new (const class GGS_location & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_NOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_NOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_NOP_init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP bang_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_NOP unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN class_func_new (const class GGS_location & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_RETURN class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_RETURN_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN bang_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE class_func_new (const class GGS_location & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_RETFIE class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_RETFIE_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE bang_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP init_21_ (const class GGS_location & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP class_func_new (const class GGS_location & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_SLEEP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_SLEEP_init_21_ (const class GGS_location & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP bang_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;
  public: void setProperty_mLiteralInstruction (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;
  public: void setProperty_mLiteralValue (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                   const class GGS_uint & inOperand2,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                                       const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                       const class GGS_uint & inOperand2
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_literalOperation class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeMOVLW
  public: virtual void method_optimizeMOVLW (const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation bang_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                                           const class GGS_luint & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_MNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
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
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP bang_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_midrange_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_string readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_string & inValue) ;

  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_bool & inOperand3,
                                                                                                         const class GGS_bool & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition class_func_new (const class GGS_location & inOperand0,
                                                                                                 const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_bool & inOperand3,
                                                                                                 const class GGS_bool & inOperand4,
                                                                                                 const class GGS_bool & inOperand5
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_incDecRegisterInCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_bool & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_string mProperty_mTargetLabel ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_string & in_mTargetLabel,
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
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition bang_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition unwrappedValue (void) const {
    GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
    if (isValid ()) {
      const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (p) ;
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
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_midrange_5F_instruction * inObject,
                                          class GGS_stringset & io_ioUsedRoutines,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionUsesGOTOorCALL (class cPtr_midrange_5F_instruction * inObject,
                                                    class GGS_bool & io_ioUsesGOTOorCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (class cPtr_midrange_5F_instruction * inObject,
                                                                       const class GGS_routineMap constin_inRoutineMap,
                                                                       const class GGS_registerTable constin_inRegisterTable,
                                                                       const class GGS_constantMap constin_inConstantMap,
                                                                       class GGS_uint & io_ioLocalLabelIndex,
                                                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                       class GGS_string & io_ioListFileContents,
                                                                       const class GGS_uint constin_inTotalBankCount,
                                                                       class GGS_uint & io_ioCurrentBank,
                                                                       const class GGS_bool constin_inShouldPreserveBank,
                                                                       class GGS_bool & io_ioContinuesInSequence,
                                                                       const class GGS_routineKind constin_inRoutineKind,
                                                                       class GGS_stringset & io_ioUsedRegisters,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildIPICinstructionForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                           const class GGS_uint constin_inTotalBankCount,
                                                           const class GGS_uint constin_inCurrentBank,
                                                           const class GGS_registerTable constin_inRegisterTable,
                                                           const class GGS_constantMap constin_inConstantMap,
                                                           class GGS_uint & io_ioLocalLabelIndex,
                                                           const class GGS_bool constin_inComplementaryBranch,
                                                           const class GGS_location constin_inInstructionLocation,
                                                           const class GGS_string constin_inTargetLabel,
                                                           class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                           class GGS_string & io_ioListFileContents,
                                                           class GGS_stringset & io_ioUsedRegisters,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

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
//Extension getter '@midrange_intermediate_instruction isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                      class GGS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const class GGS_uint constin_inLineIndex,
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
// Phase 1: @midrange_symbolTableForConvertingRelatives map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTableForConvertingRelatives ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_midrange_5F_symbolTableForConvertingRelatives_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--------------------------------- Handle copy
  public: GGS_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  public: GGS_midrange_5F_symbolTableForConvertingRelatives & operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives class_func_mapWithMapToOverride (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inOperand0
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_symbolTableForConvertingRelatives add_operation (const GGS_midrange_5F_symbolTableForConvertingRelatives & inOperand,
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

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTableForConvertingRelatives getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTableForConvertingRelatives * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                          const GGS_string & inKey
                                                                                                                          COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
 
} ; // End of GGS_midrange_5F_symbolTableForConvertingRelatives class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_symbolTableForConvertingRelatives : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inEnumeratedObject,
                                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@midrange_symbolTableForConvertingRelatives' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTableForConvertingRelatives : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mRoutineAddress ;

//--- Constructors
  public: cMapElement_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inValue
                                                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_midrange_5F_symbolTableForConvertingRelatives (const GGS_lstring & inKey,
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
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element : public AC_GALGAS_root {
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
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_lstring & in_lkey,
                                                                        const GGS_uint & in_mRoutineAddress) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_uint & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: midrange_symbolTableForConvertingRelatives.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element unwrappedValue (void) const {
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
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GGS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               class GGS_uint & io_ioAddress,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const class GGS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  class GGS_uint & io_ioAddress,
                                  class GGS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const class GGS_uint constin_inIndex,
                                  class GGS_string & io_ioListFileContents,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_string & io_ioString,
                                            class GGS_uint & io_ioLocalLabelIndex,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_symbolTable map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_midrange_5F_symbolTable_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTable (void) ;

//--------------------------------- Handle copy
  public: GGS_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inSource) ;
  public: GGS_midrange_5F_symbolTable & operator = (const GGS_midrange_5F_symbolTable & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTable init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_symbolTable class_func_mapWithMapToOverride (const class GGS_midrange_5F_symbolTable & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_symbolTable add_operation (const GGS_midrange_5F_symbolTable & inOperand,
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

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTable getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_symbolTable_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_symbolTable ;
 
} ; // End of GGS_midrange_5F_symbolTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_symbolTable : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@midrange_symbolTable' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTable : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mRoutineAddress ;

//--- Constructors
  public: cMapElement_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable_2E_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_midrange_5F_symbolTable (const GGS_lstring & inKey,
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
// Phase 1: @midrange_5F_symbolTable_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable_2E_element : public AC_GALGAS_root {
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
  public: GGS_midrange_5F_symbolTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_symbolTable_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_symbolTable_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_uint & in_mRoutineAddress) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTable_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTable_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_midrange_5F_symbolTable_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: midrange_symbolTable.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_symbolTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_symbolTable_2E_element_3F_ (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_symbolTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_symbolTable_2E_element unwrappedValue (void) const {
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
  public: static GGS_midrange_5F_symbolTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_symbolTable_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              class GGS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              class GGS_uint & io_ioAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const class GGS_registerTable constin_inRegisterTable,
                                                      const class GGS_constantMap constin_inConstantMap,
                                                      const class GGS_uint constin_inTotalBankCount,
                                                      const class GGS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      class GGS_string & io_ioListFileContents,
                                                      class GGS_uint & io_ioAddress,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code basecode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_basecode (const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_declaredRoutineMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_midrange_5F_declaredRoutineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GGS_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inSource) ;
  public: GGS_midrange_5F_declaredRoutineMap & operator = (const GGS_midrange_5F_declaredRoutineMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_declaredRoutineMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_declaredRoutineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_declaredRoutineMap class_func_mapWithMapToOverride (const class GGS_midrange_5F_declaredRoutineMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_declaredRoutineMap add_operation (const GGS_midrange_5F_declaredRoutineMap & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


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
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_midrange_5F_declaredRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GGS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_midrange_5F_declaredRoutineMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_midrange_5F_declaredRoutineMap ;
 
} ; // End of GGS_midrange_5F_declaredRoutineMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_declaredRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@midrange_declaredRoutineMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_midrange_5F_declaredRoutineMap (const GGS_lstring & inKey
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
// Phase 1: @midrange_5F_declaredRoutineMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_declaredRoutineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_midrange_5F_declaredRoutineMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: midrange_declaredRoutineMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_declaredRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_declaredRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bootloaderReservedRAMmap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bootloaderReservedRAMmap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bootloaderReservedRAMmap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_bootloaderReservedRAMmap (void) ;

//--------------------------------- Handle copy
  public: GGS_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inSource) ;
  public: GGS_bootloaderReservedRAMmap & operator = (const GGS_bootloaderReservedRAMmap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bootloaderReservedRAMmap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bootloaderReservedRAMmap extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bootloaderReservedRAMmap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_bootloaderReservedRAMmap class_func_mapWithMapToOverride (const class GGS_bootloaderReservedRAMmap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_luint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_bootloaderReservedRAMmap add_operation (const GGS_bootloaderReservedRAMmap & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReservedSizeForKey (class GGS_luint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mReservedSizeForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bootloaderReservedRAMmap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_bootloaderReservedRAMmap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_bootloaderReservedRAMmap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GGS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_bootloaderReservedRAMmap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_bootloaderReservedRAMmap ;
 
} ; // End of GGS_bootloaderReservedRAMmap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_bootloaderReservedRAMmap : public cGenericAbstractEnumerator {
  public: cEnumerator_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReservedSize (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bootloaderReservedRAMmap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bootloaderReservedRAMmap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bootloaderReservedRAMmap : public cMapElement {
//--- Map attributes
  public: GGS_luint mProperty_mReservedSize ;

//--- Constructors
  public: cMapElement_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap_2E_element & inValue
                                                COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_bootloaderReservedRAMmap (const GGS_lstring & inKey,
                                                const GGS_luint & in_mReservedSize
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
// Phase 1: @bootloaderReservedRAMmap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_luint mProperty_mReservedSize ;
  public: inline GGS_luint readProperty_mReservedSize (void) const {
    return mProperty_mReservedSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMReservedSize (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReservedSize = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_bootloaderReservedRAMmap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (const GGS_lstring & in_lkey,
                                                   const GGS_luint & in_mReservedSize) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bootloaderReservedRAMmap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_luint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bootloaderReservedRAMmap_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bootloaderReservedRAMmap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_luint & inOperand1,
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
 
} ; // End of GGS_bootloaderReservedRAMmap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: bootloaderReservedRAMmap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bootloaderReservedRAMmap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bootloaderReservedRAMmap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bootloaderReservedRAMmap_2E_element_3F_ (const GGS_bootloaderReservedRAMmap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bootloaderReservedRAMmap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bootloaderReservedRAMmap_2E_element unwrappedValue (void) const {
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
  public: static GGS_bootloaderReservedRAMmap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bootloaderReservedRAMmap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_PiccoloInstruction (const class cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_PiccoloInstruction init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloInstruction extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_PiccoloInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18PiccoloInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloInstruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_PiccoloInstruction_init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_PiccoloInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloInstruction (const GGS_location & in_mInstructionLocation
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
// Phase 1: @pic_31__38_PiccoloInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_PiccoloInstruction_2E_weak (const class GGS_pic_31__38_PiccoloInstruction & inSource) ;

  public: GGS_pic_31__38_PiccoloInstruction_2E_weak & operator = (const class GGS_pic_31__38_PiccoloInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_PiccoloInstruction_2E_weak init_nil (void) {
    GGS_pic_31__38_PiccoloInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_PiccoloInstruction bang_pic_31__38_PiccoloInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_PiccoloInstruction unwrappedValue (void) const {
    GGS_pic_31__38_PiccoloInstruction result ;
    if (isValid ()) {
      const cPtr_pic_31__38_PiccoloInstruction * p = (cPtr_pic_31__38_PiccoloInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_PiccoloInstruction (p) ;
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
  public: static GGS_pic_31__38_PiccoloInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_PiccoloInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_PiccoloInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18InstructionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_InstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_pic_31__38_InstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InstructionList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionList class_func_listWithValue (const class GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_pic_31__38_InstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_InstructionList add_operation (const GGS_pic_31__38_InstructionList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_PiccoloInstruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_pic_31__38_InstructionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_InstructionList ;
 
} ; // End of GGS_pic_31__38_InstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_InstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InstructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_InstructionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_pic_31__38_PiccoloInstruction mProperty_mInstruction ;
  public: inline GGS_pic_31__38_PiccoloInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_InstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_pic_31__38_PiccoloInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_pic_31__38_InstructionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InstructionList_2E_element init_21_ (const class GGS_pic_31__38_PiccoloInstruction & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionList_2E_element class_func_new (const class GGS_pic_31__38_PiccoloInstruction & inOperand0,
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
 
} ; // End of GGS_pic_31__38_InstructionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_nobanksel reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_nobanksel : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_nobanksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_nobanksel (const class cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_nobanksel init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_nobanksel extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_nobanksel class_func_new (const class GGS_location & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_nobanksel class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_nobanksel class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_nobanksel : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_nobanksel_init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation
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
// Phase 1: @pic_31__38_Instruction_5F_nobanksel_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (const class GGS_pic_31__38_Instruction_5F_nobanksel & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_nobanksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_nobanksel bang_pic_31__38_Instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_nobanksel unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_nobanksel result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_nobanksel * p = (cPtr_pic_31__38_Instruction_5F_nobanksel *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_nobanksel (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checknobank reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checknobank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checknobank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_checknobank (const class cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_checknobank init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_checknobank extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checknobank class_func_new (const class GGS_location & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_checknobank class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_checknobank class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_checknobank : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_checknobank_init_21_ (const class GGS_location & inOperand0,
                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_checknobank (const GGS_location & in_mInstructionLocation
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
// Phase 1: @pic_31__38_Instruction_5F_checknobank_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checknobank_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (const class GGS_pic_31__38_Instruction_5F_checknobank & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_checknobank_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_checknobank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_checknobank_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_checknobank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_checknobank bang_pic_31__38_Instruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_checknobank unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_checknobank result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_checknobank * p = (cPtr_pic_31__38_Instruction_5F_checknobank *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_checknobank (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_checknobank_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checknobank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_checknobank_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checkbank reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checkbank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checkbank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_checkbank (const class cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBankIndex (void) const ;
  public: void setProperty_mBankIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_checkbank init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_checkbank extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checkbank class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_uint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_checkbank class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_checkbank class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_checkbank : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_checkbank_init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_uint & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_checkbank_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checkbank_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (const class GGS_pic_31__38_Instruction_5F_checkbank & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_checkbank_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_checkbank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_checkbank_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_checkbank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_checkbank bang_pic_31__38_Instruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_checkbank unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_checkbank result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_checkbank * p = (cPtr_pic_31__38_Instruction_5F_checkbank *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_checkbank (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_checkbank_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checkbank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_checkbank_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloSimpleInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloSimpleInstruction : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloSimpleInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_PiccoloSimpleInstruction (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_PiccoloSimpleInstruction init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloSimpleInstruction extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_PiccoloSimpleInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18PiccoloSimpleInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloSimpleInstruction : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_PiccoloSimpleInstruction_init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (const GGS_location & in_mInstructionLocation
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
// Phase 1: @pic_31__38_PiccoloSimpleInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (const class GGS_pic_31__38_PiccoloSimpleInstruction & inSource) ;

  public: GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak & operator = (const class GGS_pic_31__38_PiccoloSimpleInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak init_nil (void) {
    GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_PiccoloSimpleInstruction bang_pic_31__38_PiccoloSimpleInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_PiccoloSimpleInstruction unwrappedValue (void) const {
    GGS_pic_31__38_PiccoloSimpleInstruction result ;
    if (isValid ()) {
      const cPtr_pic_31__38_PiccoloSimpleInstruction * p = (cPtr_pic_31__38_PiccoloSimpleInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_PiccoloSimpleInstruction (p) ;
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
  public: static GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_banksel (const class cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;
  public: void setProperty_mBankIndex (const GGS_luint & inValue) ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;
  public: void setProperty_mWarningOnUselessBanksel (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_banksel init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_luint & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_banksel extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             const class GGS_bool & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_banksel class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_banksel class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_banksel : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_banksel_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_luint & inOperand1,
                                                                   const class GGS_bool & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBankIndex ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_banksel_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_banksel_2E_weak (const class GGS_pic_31__38_Instruction_5F_banksel & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_banksel_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_banksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_banksel_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_banksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_banksel bang_pic_31__38_Instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_banksel unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_banksel result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_banksel (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_banksel_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_banksel_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_5F_register : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register (const class cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;
  public: void setProperty_mWarningOnUselessBanksel (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_banksel_5F_register init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_registerExpression & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_banksel_5F_register extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel_5F_register class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_registerExpression & inOperand1,
                                                                                         const class GGS_bool & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_banksel_5F_register class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_banksel_register class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_banksel_5F_register : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_banksel_5F_register_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_registerExpression & inOperand1,
                                                                               const class GGS_bool & inOperand2,
                                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                              const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (const class GGS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register bang_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_banksel_5F_register unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_banksel_5F_register result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_banksel_5F_register (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_savebank reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_savebank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_savebank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_savebank (const class cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;
  public: void setProperty_mRegister (const GGS_registerExpression & inValue) ;

  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfSaveBankInstruction (void) const ;
  public: void setProperty_mEndOfSaveBankInstruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_savebank init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_registerExpression & inOperand1,
                                                                              const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_savebank extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_savebank class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_registerExpression & inOperand1,
                                                                              const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                              const class GGS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_savebank class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_savebank class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_savebank : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_savebank_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_registerExpression & inOperand1,
                                                                        const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfSaveBankInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                   const GGS_registerExpression & in_mRegister,
                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
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
// Phase 1: @pic_31__38_Instruction_5F_savebank_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_savebank_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_savebank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_savebank_2E_weak (const class GGS_pic_31__38_Instruction_5F_savebank & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_savebank_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_savebank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_savebank_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_savebank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_savebank bang_pic_31__38_Instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_savebank unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_savebank result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_savebank (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_savebank_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_savebank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_savebank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_savebank_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_repetitionStatique : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique (const class cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;
  public: void setProperty_mConstantName (const GGS_lstring & inValue) ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;
  public: void setProperty_mLowerBoundExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;
  public: void setProperty_mUpperBoundExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;
  public: void setProperty_mEndOfInstruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_repetitionStatique init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_immediatExpression & inOperand2,
                                                                                                const class GGS_immediatExpression & inOperand3,
                                                                                                const class GGS_pic_31__38_InstructionList & inOperand4,
                                                                                                const class GGS_location & inOperand5,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_repetitionStatique extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_repetitionStatique class_func_new (const class GGS_location & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_immediatExpression & inOperand2,
                                                                                        const class GGS_immediatExpression & inOperand3,
                                                                                        const class GGS_pic_31__38_InstructionList & inOperand4,
                                                                                        const class GGS_location & inOperand5
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_repetitionStatique class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_repetitionStatique class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_repetitionStatique : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_repetitionStatique_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_immediatExpression & inOperand2,
                                                                                          const class GGS_immediatExpression & inOperand3,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand4,
                                                                                          const class GGS_location & inOperand5,
                                                                                          Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GGS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_repetitionStatique (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GGS_location & in_mInstructionLocation,
                                                             const GGS_lstring & in_mConstantName,
                                                             const GGS_immediatExpression & in_mLowerBoundExpression,
                                                             const GGS_immediatExpression & in_mUpperBoundExpression,
                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList,
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
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (const class GGS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique bang_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_repetitionStatique unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_repetitionStatique result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_repetitionStatique (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBlockTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractBlockTerminationForBlockInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBlockTerminationForBlockInstruction (const class cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBlockTerminationForBlockInstruction init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBlockTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractBlockTerminationForBlockInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBlockTerminationForBlockInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBlockTerminationForBlockInstruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBlockTerminationForBlockInstruction_init (Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractBlockTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractBlockTerminationForBlockInstruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBlockTerminationForBlockInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractBlockTerminationForBlockInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractBlockTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractBlockTerminationForBlockInstruction_2E_weak (const class GGS_abstractBlockTerminationForBlockInstruction & inSource) ;

  public: GGS_abstractBlockTerminationForBlockInstruction_2E_weak & operator = (const class GGS_abstractBlockTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractBlockTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_abstractBlockTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractBlockTerminationForBlockInstruction bang_abstractBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractBlockTerminationForBlockInstruction unwrappedValue (void) const {
    GGS_abstractBlockTerminationForBlockInstruction result ;
    if (isValid ()) {
      const cPtr_abstractBlockTerminationForBlockInstruction * p = (cPtr_abstractBlockTerminationForBlockInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractBlockTerminationForBlockInstruction (p) ;
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
  public: static GGS_abstractBlockTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractBlockTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBlockTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractBlockTerminationForBlockInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @exitBlockTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_exitBlockTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_exitBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_exitBlockTerminationForBlockInstruction (const class cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_exitBlockTerminationForBlockInstruction init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_exitBlockTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_exitBlockTerminationForBlockInstruction class_func_new (const class GGS_location & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_exitBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_exitBlockTerminationForBlockInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @exitBlockTerminationForBlockInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_exitBlockTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void exitBlockTerminationForBlockInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_exitBlockTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_exitBlockTerminationForBlockInstruction (const GGS_location & in_mLocation
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
// Phase 1: @exitBlockTerminationForBlockInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_exitBlockTerminationForBlockInstruction_2E_weak : public GGS_abstractBlockTerminationForBlockInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_exitBlockTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_exitBlockTerminationForBlockInstruction_2E_weak (const class GGS_exitBlockTerminationForBlockInstruction & inSource) ;

  public: GGS_exitBlockTerminationForBlockInstruction_2E_weak & operator = (const class GGS_exitBlockTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_exitBlockTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_exitBlockTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_exitBlockTerminationForBlockInstruction bang_exitBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_exitBlockTerminationForBlockInstruction unwrappedValue (void) const {
    GGS_exitBlockTerminationForBlockInstruction result ;
    if (isValid ()) {
      const cPtr_exitBlockTerminationForBlockInstruction * p = (cPtr_exitBlockTerminationForBlockInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_exitBlockTerminationForBlockInstruction (p) ;
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
  public: static GGS_exitBlockTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_exitBlockTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_exitBlockTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_exitBlockTerminationForBlockInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @gotoTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_gotoTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_gotoTerminationForBlockInstruction (const class cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNextBlock (void) const ;
  public: void setProperty_mNextBlock (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_gotoTerminationForBlockInstruction init_21_ (const class GGS_lstring & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_gotoTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_gotoTerminationForBlockInstruction class_func_new (const class GGS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_gotoTerminationForBlockInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gotoTerminationForBlockInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_gotoTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void gotoTerminationForBlockInstruction_init_21_ (const class GGS_lstring & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mNextBlock ;


//--- Default constructor
  public: cPtr_gotoTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_gotoTerminationForBlockInstruction (const GGS_lstring & in_mNextBlock
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
// Phase 1: @gotoTerminationForBlockInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_gotoTerminationForBlockInstruction_2E_weak : public GGS_abstractBlockTerminationForBlockInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_gotoTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_gotoTerminationForBlockInstruction_2E_weak (const class GGS_gotoTerminationForBlockInstruction & inSource) ;

  public: GGS_gotoTerminationForBlockInstruction_2E_weak & operator = (const class GGS_gotoTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_gotoTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_gotoTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_gotoTerminationForBlockInstruction bang_gotoTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_gotoTerminationForBlockInstruction unwrappedValue (void) const {
    GGS_gotoTerminationForBlockInstruction result ;
    if (isValid ()) {
      const cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_gotoTerminationForBlockInstruction (p) ;
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
  public: static GGS_gotoTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_gotoTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_gotoTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_gotoTerminationForBlockInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_ConditionExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_ConditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_ConditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_ConditionExpression (const class cPtr_pic_31__38_ConditionExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_ConditionExpression init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_ConditionExpression extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_ConditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_ConditionExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18ConditionExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_ConditionExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_ConditionExpression_init (Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_lstring arg_inConditionFalseLabel,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_ConditionExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_ConditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_testTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_testTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testTerminationForBlockInstruction (const class cPtr_testTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GGS_pic_31__38_ConditionExpression & inValue) ;

  public: class GGS_abstractBlockTerminationForBlockInstruction readProperty_mTrueTermination (void) const ;
  public: void setProperty_mTrueTermination (const GGS_abstractBlockTerminationForBlockInstruction & inValue) ;

  public: class GGS_abstractBlockTerminationForBlockInstruction readProperty_mFalseTermination (void) const ;
  public: void setProperty_mFalseTermination (const GGS_abstractBlockTerminationForBlockInstruction & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_testTerminationForBlockInstruction init_21__21__21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testTerminationForBlockInstruction class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                              const class GGS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_testTerminationForBlockInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testTerminationForBlockInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_testTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testTerminationForBlockInstruction_init_21__21__21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                        const class GGS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                        const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mTrueTermination ;
  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mFalseTermination ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_testTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testTerminationForBlockInstruction (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                   const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                   const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                   const GGS_location & in_mLocation
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
// Phase 1: @testTerminationForBlockInstruction_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_testTerminationForBlockInstruction_2E_weak : public GGS_abstractBlockTerminationForBlockInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_testTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_testTerminationForBlockInstruction_2E_weak (const class GGS_testTerminationForBlockInstruction & inSource) ;

  public: GGS_testTerminationForBlockInstruction_2E_weak & operator = (const class GGS_testTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_testTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_testTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testTerminationForBlockInstruction bang_testTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_testTerminationForBlockInstruction unwrappedValue (void) const {
    GGS_testTerminationForBlockInstruction result ;
    if (isValid ()) {
      const cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_testTerminationForBlockInstruction (p) ;
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
  public: static GGS_testTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_testTerminationForBlockInstruction_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18BlockInstructionBlockList list
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BlockInstructionBlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BlockInstructionBlockList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_pic_31__38_BlockInstructionBlockList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mBlockName,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                 const class GGS_location & in_mEndOfBlock
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BlockInstructionBlockList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BlockInstructionBlockList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BlockInstructionBlockList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_BlockInstructionBlockList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                          const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                          const class GGS_location & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_pic_31__38_BlockInstructionBlockList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_pic_31__38_InstructionList & inOperand1,
                                                     const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                     const class GGS_location & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_BlockInstructionBlockList add_operation (const GGS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_pic_31__38_InstructionList constinArgument1,
                                               class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                               class GGS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_pic_31__38_InstructionList constinArgument1,
                                                      class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                      class GGS_location constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_pic_31__38_InstructionList & outArgument1,
                                                 class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                 class GGS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_pic_31__38_InstructionList & outArgument1,
                                                class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                class GGS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_pic_31__38_InstructionList & outArgument1,
                                                      class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                      class GGS_location & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionAtIndex (class GGS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                       class GGS_uint constinArgument1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockAtIndex (class GGS_location constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_pic_31__38_InstructionList & outArgument1,
                                              class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                              class GGS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_pic_31__38_InstructionList & outArgument1,
                                             class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                             class GGS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBlockNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfBlockAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_BlockInstructionBlockList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_BlockInstructionBlockList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_BlockInstructionBlockList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_pic_31__38_BlockInstructionBlockList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_BlockInstructionBlockList ;
 
} ; // End of GGS_pic_31__38_BlockInstructionBlockList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_BlockInstructionBlockList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_BlockInstructionBlockList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BlockInstructionBlockList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BlockInstructionBlockList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBlockName ;
  public: inline GGS_lstring readProperty_mBlockName (void) const {
    return mProperty_mBlockName ;
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
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlockName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockName = inValue ;
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_pic_31__38_BlockInstructionBlockList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_lstring & in_mBlockName,
                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                               const GGS_location & in_mEndOfBlock) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BlockInstructionBlockList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                           const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                           const class GGS_location & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BlockInstructionBlockList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BlockInstructionBlockList_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_pic_31__38_BlockInstructionBlockList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_block reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_block : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_block (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_block (const class cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStartBlockName (void) const ;
  public: void setProperty_mStartBlockName (const GGS_lstring & inValue) ;

  public: class GGS_pic_31__38_BlockInstructionBlockList readProperty_mBlockList (void) const ;
  public: void setProperty_mBlockList (const GGS_pic_31__38_BlockInstructionBlockList & inValue) ;

  public: class GGS_location readProperty_mEndOfBlockInstruction (void) const ;
  public: void setProperty_mEndOfBlockInstruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_block init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_block extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_block class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                           const class GGS_location & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_block & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_block class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_block class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_block : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_block_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                     const class GGS_location & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mStartBlockName ;
  public: GGS_pic_31__38_BlockInstructionBlockList mProperty_mBlockList ;
  public: GGS_location mProperty_mEndOfBlockInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_block (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_block (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mStartBlockName,
                                                const GGS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                const GGS_location & in_mEndOfBlockInstruction
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
// Phase 1: @pic_31__38_Instruction_5F_block_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_block_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_block_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_block_2E_weak (const class GGS_pic_31__38_Instruction_5F_block & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_block_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_block & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_block_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_block_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_block bang_pic_31__38_Instruction_5F_block_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_block unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_block result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_block (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_block_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_block_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_block_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_block_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AbstractCaseItem reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AbstractCaseItem : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AbstractCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_AbstractCaseItem (const class cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AbstractCaseItem init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AbstractCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AbstractCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_AbstractCaseItem class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18AbstractCaseItem class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AbstractCaseItem : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_AbstractCaseItem_init (Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_AbstractCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AbstractCaseItem_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AbstractCaseItem_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AbstractCaseItem_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_AbstractCaseItem_2E_weak (const class GGS_pic_31__38_AbstractCaseItem & inSource) ;

  public: GGS_pic_31__38_AbstractCaseItem_2E_weak & operator = (const class GGS_pic_31__38_AbstractCaseItem & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_AbstractCaseItem_2E_weak init_nil (void) {
    GGS_pic_31__38_AbstractCaseItem_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_AbstractCaseItem bang_pic_31__38_AbstractCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_AbstractCaseItem unwrappedValue (void) const {
    GGS_pic_31__38_AbstractCaseItem result ;
    if (isValid ()) {
      const cPtr_pic_31__38_AbstractCaseItem * p = (cPtr_pic_31__38_AbstractCaseItem *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_AbstractCaseItem (p) ;
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
  public: static GGS_pic_31__38_AbstractCaseItem_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AbstractCaseItem_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AbstractCaseItem_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_AbstractCaseItem_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDWFC (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRLCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRLNCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRRCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRRNCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBFWB (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBWFB (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FDA reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FDA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FDA (const class cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;
  public: void setProperty_mInstruction_5F_FDA_5F_base_5F_code (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FDA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FDA extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FDA class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FDA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FDA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FDA : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FDA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bool & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                              const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
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
// Phase 1: @pic_31__38_Instruction_5F_FDA_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FDA_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FDA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_FDA_2E_weak (const class GGS_pic_31__38_Instruction_5F_FDA & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_FDA_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_FDA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_FDA_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_FDA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_FDA bang_pic_31__38_Instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_FDA unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_FDA result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_FDA (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_FDA_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FDA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FDA_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum FA_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_FA_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_FA_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_CPFSEQ,
    enum_CPFSGT,
    enum_CPFSLT,
    enum_MOVWF,
    enum_MULWF,
    enum_NEGF,
    enum_SETF,
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
  public: static GGS_FA_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_MULWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_NEGF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_SETF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSETF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_FA_5F_instruction_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FA reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FA (const class cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_FA_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;
  public: void setProperty_mFAinstruction (const GGS_FA_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FA init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                    const class GGS_registerExpression & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FA extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FA class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                        const class GGS_registerExpression & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FA : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FA_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                              const class GGS_registerExpression & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_FA_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                             const GGS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
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
// Phase 1: @pic_31__38_Instruction_5F_FA_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FA_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_FA_2E_weak (const class GGS_pic_31__38_Instruction_5F_FA & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_FA_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_FA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_FA_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_FA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_FA bang_pic_31__38_Instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_FA unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_FA result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_FA (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_FA_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FA_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_MOVFF reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_MOVFF : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_MOVFF (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_MOVFF (const class cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mSourceRegisterName (void) const ;
  public: void setProperty_mSourceRegisterName (const GGS_registerExpression & inValue) ;

  public: class GGS_registerExpression readProperty_mDestinationRegisterName (void) const ;
  public: void setProperty_mDestinationRegisterName (const GGS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_MOVFF init_21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_registerExpression & inOperand1,
                                                                       const class GGS_registerExpression & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_MOVFF extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_MOVFF class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_registerExpression & inOperand1,
                                                                           const class GGS_registerExpression & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_MOVFF class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_MOVFF class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_MOVFF : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_MOVFF_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_registerExpression & inOperand1,
                                                                 const class GGS_registerExpression & inOperand2,
                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mSourceRegisterName ;
  public: GGS_registerExpression mProperty_mDestinationRegisterName ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                const GGS_registerExpression & in_mSourceRegisterName,
                                                const GGS_registerExpression & in_mDestinationRegisterName
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
// Phase 1: @pic_31__38_Instruction_5F_MOVFF_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak (const class GGS_pic_31__38_Instruction_5F_MOVFF & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_MOVFF & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_MOVFF bang_pic_31__38_Instruction_5F_MOVFF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_MOVFF unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_MOVFF result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_MOVFF (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBSF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBTG (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bit_5F_oriented_5F_op class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FBA reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FBA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FBA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FBA (const class cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;
  public: void setProperty_mBitOrientedOp (const GGS_bit_5F_oriented_5F_op & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FBA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FBA extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FBA class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FBA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FBA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FBA : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FBA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bitNumberExpression & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FBA (const GGS_location & in_mInstructionLocation,
                                              const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
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
// Phase 1: @pic_31__38_Instruction_5F_FBA_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FBA_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FBA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_FBA_2E_weak (const class GGS_pic_31__38_Instruction_5F_FBA & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_FBA_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_FBA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_FBA_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_FBA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_FBA bang_pic_31__38_Instruction_5F_FBA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_FBA unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_FBA result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_FBA (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_FBA_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FBA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FBA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_FBA_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_conditional_5F_branch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnov (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnz (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBov (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBz (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_conditional_5F_branch class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditional_5F_branch ;

//--------------------------------------------------------------------------------------------------
//   enum jumpInstructionKind
//--------------------------------------------------------------------------------------------------

class GGS_jumpInstructionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_jumpInstructionKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ipicRelative,
    enum_relative,
    enum_absolute
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
  public: static GGS_jumpInstructionKind extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_jumpInstructionKind class_func_absolute (LOCATION_ARGS) ;

  public: static class GGS_jumpInstructionKind class_func_ipicRelative (LOCATION_ARGS) ;

  public: static class GGS_jumpInstructionKind class_func_relative (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_jumpInstructionKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAbsolute (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIpicRelative (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRelative (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_jumpInstructionKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_jumpInstructionKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JSR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JSR : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_JSR (const class cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_jumpInstructionKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_JSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_jumpInstructionKind & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_JSR extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_jumpInstructionKind & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_JSR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_JSR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_JSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_jumpInstructionKind & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              const GGS_jumpInstructionKind & in_mKind
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
// Phase 1: @pic_31__38_Instruction_5F_JSR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JSR_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_JSR_2E_weak (const class GGS_pic_31__38_Instruction_5F_JSR & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_JSR_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_JSR_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_JSR bang_pic_31__38_Instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_JSR unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_JSR result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_JSR (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_JSR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_macro reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_macro : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_macro (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_macro (const class cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMacroName (void) const ;
  public: void setProperty_mMacroName (const GGS_lstring & inValue) ;

  public: class GGS_immediatExpressionList readProperty_mExpressionList (void) const ;
  public: void setProperty_mExpressionList (const GGS_immediatExpressionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_macro init_21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_immediatExpressionList & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_macro extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_macro class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_immediatExpressionList & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_macro & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_macro class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_macro class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_macro : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_macro_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_immediatExpressionList & inOperand2,
                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mMacroName ;
  public: GGS_immediatExpressionList mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_macro (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_macro (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mMacroName,
                                                const GGS_immediatExpressionList & in_mExpressionList
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
// Phase 1: @pic_31__38_Instruction_5F_macro_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_macro_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_macro_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_macro_2E_weak (const class GGS_pic_31__38_Instruction_5F_macro & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_macro_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_macro & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_macro_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_macro_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_macro bang_pic_31__38_Instruction_5F_macro_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_macro unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_macro result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_macro (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_macro_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_macro_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_macro_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_macro_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JUMP : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_JUMP (const class cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_jumpInstructionKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_JUMP init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_jumpInstructionKind & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_JUMP extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_jumpInstructionKind & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_JUMP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_JUMP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JUMP : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_JUMP_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_jumpInstructionKind & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               const GGS_jumpInstructionKind & in_mKind
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
// Phase 1: @pic_31__38_Instruction_5F_JUMP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JUMP_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_JUMP_2E_weak (const class GGS_pic_31__38_Instruction_5F_JUMP & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_JUMP_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_JUMP_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_JUMP bang_pic_31__38_Instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_JUMP unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_JUMP result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_JUMP (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_JUMP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JUMPCC : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JUMPCC (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_JUMPCC (const class cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;
  public: void setProperty_mConditionalBranch (const GGS_conditional_5F_branch & inValue) ;

  public: class GGS_bool readProperty_mIsBcc (void) const ;
  public: void setProperty_mIsBcc (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_JUMPCC init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_conditional_5F_branch & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_JUMPCC extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JUMPCC class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_conditional_5F_branch & inOperand2,
                                                                            const class GGS_bool & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_JUMPCC class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_JUMPCC class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JUMPCC : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_JUMPCC_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_conditional_5F_branch & inOperand2,
                                                                      const class GGS_bool & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GGS_bool mProperty_mIsBcc ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMPCC (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMPCC (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                 const GGS_bool & in_mIsBcc
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
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak (const class GGS_pic_31__38_Instruction_5F_JUMPCC & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_JUMPCC & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_JUMPCC bang_pic_31__38_Instruction_5F_JUMPCC_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_JUMPCC unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_JUMPCC result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_JUMPCC (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDAW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPUSH (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRESET (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_InstructionWithNoOperandKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_withNoOperand reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_withNoOperand : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_withNoOperand (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_withNoOperand (const class cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_pic_31__38_InstructionWithNoOperandKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_withNoOperand init_21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_withNoOperand extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_withNoOperand class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_withNoOperand class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_withNoOperand class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_withNoOperand : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_withNoOperand_init_21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                     Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_withNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_withNoOperand (const GGS_location & in_mInstructionLocation,
                                                        const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind
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
// Phase 1: @pic_31__38_Instruction_5F_withNoOperand_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak (const class GGS_pic_31__38_Instruction_5F_withNoOperand & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_withNoOperand & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_withNoOperand bang_pic_31__38_Instruction_5F_withNoOperand_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_withNoOperand unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_withNoOperand result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (cPtr_pic_31__38_Instruction_5F_withNoOperand *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_withNoOperand (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMULLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_literal_5F_instruction_5F_opcode class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_literalOperation : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_literalOperation (const class cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;
  public: void setProperty_mLiteralInstruction (const GGS_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                  const class GGS_immediatExpression & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                      const class GGS_immediatExpression & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_literalOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_literalOperation class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_literalOperation : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                            const class GGS_immediatExpression & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                           const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
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
// Phase 1: @pic_31__38_Instruction_5F_literalOperation_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak (const class GGS_pic_31__38_Instruction_5F_literalOperation & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_literalOperation bang_pic_31__38_Instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_literalOperation (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_fnop reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_fnop : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_fnop (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_fnop (const class cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_fnop init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_immediatExpression & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_fnop extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_fnop class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_immediatExpression & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_fnop & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_fnop class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_fnop class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_fnop : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_fnop_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_immediatExpression & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_fnop (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_fnop (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_fnop_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_fnop_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_fnop_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_fnop_2E_weak (const class GGS_pic_31__38_Instruction_5F_fnop & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_fnop_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_fnop & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_fnop_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_fnop_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_fnop bang_pic_31__38_Instruction_5F_fnop_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_fnop unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_fnop result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_fnop * p = (cPtr_pic_31__38_Instruction_5F_fnop *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_fnop (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_fnop_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_fnop_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_fnop_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_fnop_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LFSR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LFSR : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LFSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LFSR (const class cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mFSRindex (void) const ;
  public: void setProperty_mFSRindex (const GGS_luint & inValue) ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LFSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_luint & inOperand1,
                                                                      const class GGS_immediatExpression & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LFSR extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LFSR class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_luint & inOperand1,
                                                                          const class GGS_immediatExpression & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LFSR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_LFSR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LFSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_luint & inOperand1,
                                                                const class GGS_immediatExpression & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mFSRindex ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                               const GGS_luint & in_mFSRindex,
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
// Phase 1: @pic_31__38_Instruction_5F_LFSR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LFSR_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LFSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_LFSR_2E_weak (const class GGS_pic_31__38_Instruction_5F_LFSR & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_LFSR_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_LFSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_LFSR_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_LFSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_LFSR bang_pic_31__38_Instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_LFSR unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_LFSR result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_LFSR (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_LFSR_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LFSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LFSR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LTBLPTR : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR (const class cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LTBLPTR init_21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_immediatExpression & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LTBLPTR extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LTBLPTR class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_immediatExpression & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LTBLPTR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_LTBLPTR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LTBLPTR : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LTBLPTR_init_21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_immediatExpression & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LTBLPTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (const class GGS_pic_31__38_Instruction_5F_LTBLPTR & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_LTBLPTR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR bang_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_LTBLPTR unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_LTBLPTR result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (cPtr_pic_31__38_Instruction_5F_LTBLPTR *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_LTBLPTR (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDataName (void) const ;
  public: void setProperty_mDataName (const GGS_lstring & inValue) ;

  public: class GGS_luint readProperty_mDataIndex (void) const ;
  public: void setProperty_mDataIndex (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LDATA_38_PTR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_luint & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LDATA_38_PTR extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_luint & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LDATA_38_PTR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_LDATA8PTR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LDATA_38_PTR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_luint & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDataName ;
  public: GGS_luint mProperty_mDataIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mDataName,
                                                       const GGS_luint & in_mDataIndex
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (const class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR bang_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_LDATA_38_PTR unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDataName (void) const ;
  public: void setProperty_mDataName (const GGS_lstring & inValue) ;

  public: class GGS_luint readProperty_mDataIndex (void) const ;
  public: void setProperty_mDataIndex (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_luint & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_luint & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_LDATA16PTR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LDATA_31__36_PTR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_luint & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDataName ;
  public: GGS_luint mProperty_mDataIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const GGS_location & in_mInstructionLocation,
                                                           const GGS_lstring & in_mDataName,
                                                           const GGS_luint & in_mDataIndex
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (const class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR bang_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak ;

