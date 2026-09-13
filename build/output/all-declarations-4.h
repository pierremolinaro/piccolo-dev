#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_CLRW reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_CLRW class
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
  public: cPtr_midrange_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_CLRW_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_CLRW bang_midrange_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_CLRW unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_NOP reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_NOP class
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
  public: cPtr_midrange_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_NOP_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_NOP bang_midrange_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_NOP unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_SLEEP reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_SLEEP class
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
  public: cPtr_midrange_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_SLEEP_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_SLEEP bang_midrange_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_SLEEP unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_literalOperation : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_literalOperation (const class cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_literalOperation class
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
// Phase 1: @midrange_5F_instruction_5F_literalOperation_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_literalOperation bang_midrange_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_MNOP : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_MNOP (const class cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_MNOP class
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
// Phase 1: @midrange_5F_instruction_5F_MNOP_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_MNOP bang_midrange_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_MNOP unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FOREVER : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_FOREVER (const class cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_FOREVER class
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
// Phase 1: @midrange_5F_instruction_5F_FOREVER_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_FOREVER bang_midrange_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_FOREVER unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction readProperty_mInstruction (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_IF_SEMI_COLON class
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
                                                               const GGS_midrange_5F_instruction & in_mInstruction,
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
// Phase 1: @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON bang_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_BitTest : public GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_IF_BitTest class
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
// Phase 1: @midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest bang_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_IF_5F_BitTest unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_IF_5F_IncDec : public GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec (const class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_IF_IncDec class
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
// Phase 1: @midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec bang_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_IF_5F_IncDec unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_conditionExpression_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_conditionExpression bang_midrange_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_conditionExpression unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_incDecRegisterInCondition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_incDecRegisterInCondition class
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
// Phase 1: @midrange_5F_incDecRegisterInCondition_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_incDecRegisterInCondition bang_midrange_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_incDecRegisterInCondition unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_negateCondition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_negateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_negateCondition (const class cPtr_midrange_5F_negateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_conditionExpression readProperty_mCondition (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_negateCondition class
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
  public: cPtr_midrange_5F_negateCondition (const GGS_midrange_5F_conditionExpression & in_mCondition,
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
// Phase 1: @midrange_5F_negateCondition_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_negateCondition bang_midrange_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_negateCondition unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_andCondition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_andCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_andCondition (const class cPtr_midrange_5F_andCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_conditionExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_midrange_5F_conditionExpression readProperty_mRightExpression (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_andCondition class
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
                                         const GGS_midrange_5F_conditionExpression & in_mRightExpression,
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
// Phase 1: @midrange_5F_andCondition_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_andCondition bang_midrange_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_andCondition unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GGS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_bitTest_in_structured_if_condition class
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
// Phase 1: @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_structured_5F_if : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_structured_5F_if (const class cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_conditionExpression readProperty_mIfCondition (void) const ;

  public: class GGS_midrange_5F_instructionList readProperty_mThenInstructionList (void) const ;

  public: class GGS_midrange_5F_instructionList readProperty_mElseInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfElsePartLocation (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_structured_if class
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
// Phase 1: @midrange_5F_instruction_5F_structured_5F_if_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_structured_5F_if bang_midrange_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_structured_5F_if unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_partList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_partList final {
  public: DownEnumerator_midrange_5F_partList (const class GGS_midrange_5F_partList & inList) ;

  public: ~ DownEnumerator_midrange_5F_partList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_partList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_partList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_partList (const DownEnumerator_midrange_5F_partList &) = delete ;
  private: DownEnumerator_midrange_5F_partList & operator = (const DownEnumerator_midrange_5F_partList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_partList final {
  public: UpEnumerator_midrange_5F_partList (const class GGS_midrange_5F_partList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_partList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_partList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_partList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_partList (const UpEnumerator_midrange_5F_partList &) = delete ;
  private: UpEnumerator_midrange_5F_partList & operator = (const UpEnumerator_midrange_5F_partList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_partList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_partList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_partList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_partList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_partList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_partList (const GGS_midrange_5F_partList &) = default ;
  public: GGS_midrange_5F_partList & operator = (const GGS_midrange_5F_partList &) = default ;

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
  public : inline GenericArray <GGS_midrange_5F_partList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_partList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_partList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_midrange_5F_partList class_func_listWithValue (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                                                          const class GGS_midrange_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_midrange_5F_partList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_midrange_5F_conditionExpression & inOperand0,
                                   const class GGS_midrange_5F_instructionList & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_midrange_5F_partList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_midrange_5F_partList add_operation (const GGS_midrange_5F_partList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_midrange_5F_conditionExpression constinArgument0,
                              class GGS_midrange_5F_instructionList constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_midrange_5F_conditionExpression constinArgument0,
                                     class GGS_midrange_5F_instructionList constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_midrange_5F_conditionExpression & outArgument0,
                                class GGS_midrange_5F_instructionList & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_midrange_5F_conditionExpression & outArgument0,
                               class GGS_midrange_5F_instructionList & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_midrange_5F_conditionExpression & outArgument0,
                                     class GGS_midrange_5F_instructionList & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMConditionAtIndex (class GGS_midrange_5F_conditionExpression constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfPartLocationAtIndex (class GGS_location constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_midrange_5F_conditionExpression & outArgument0,
                             class GGS_midrange_5F_instructionList & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_midrange_5F_conditionExpression & outArgument0,
                            class GGS_midrange_5F_instructionList & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_conditionExpression getter_mConditionAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfPartLocationAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_partList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_partList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_partList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_partList ;
  friend class DownEnumerator_midrange_5F_partList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_partList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_partList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_partList_2E_element (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                               const GGS_midrange_5F_instructionList & in_mInstructionList,
                                               const GGS_location & in_mEndOfPartLocation) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_partList_2E_element (const GGS_midrange_5F_partList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_partList_2E_element & operator = (const GGS_midrange_5F_partList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_partList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_do_5F_while : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_do_5F_while (const class cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructionList (void) const ;

  public: class GGS_midrange_5F_partList readProperty_mWhilePartList (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_do_while class
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
                                                       const GGS_midrange_5F_partList & in_mWhilePartList,
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
// Phase 1: @midrange_5F_instruction_5F_do_5F_while_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_do_5F_while bang_midrange_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_do_5F_while unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_interruptDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_interruptDefinitionList final {
  public: DownEnumerator_midrange_5F_interruptDefinitionList (const class GGS_midrange_5F_interruptDefinitionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_interruptDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_interruptDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_interruptDefinitionList (const DownEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
  private: DownEnumerator_midrange_5F_interruptDefinitionList & operator = (const DownEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_interruptDefinitionList final {
  public: UpEnumerator_midrange_5F_interruptDefinitionList (const class GGS_midrange_5F_interruptDefinitionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_interruptDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_interruptDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_interruptDefinitionList (const UpEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
  private: UpEnumerator_midrange_5F_interruptDefinitionList & operator = (const UpEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_interruptDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_interruptDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_interruptDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_interruptDefinitionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList &) = default ;
  public: GGS_midrange_5F_interruptDefinitionList & operator = (const GGS_midrange_5F_interruptDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_interruptDefinitionList subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_interruptDefinitionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_midrange_5F_interruptDefinitionList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_lstring & inOperand3,
                                                                                         const class GGS_location & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_midrange_5F_interruptDefinitionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_location & inOperand0,
                                   const class GGS_midrange_5F_instructionList & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_lstring & inOperand3,
                                   const class GGS_location & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_midrange_5F_interruptDefinitionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_midrange_5F_interruptDefinitionList add_operation (const GGS_midrange_5F_interruptDefinitionList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_location constinArgument0,
                              class GGS_midrange_5F_instructionList constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_lstring constinArgument3,
                              class GGS_location constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_location constinArgument0,
                                     class GGS_midrange_5F_instructionList constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_lstring constinArgument3,
                                     class GGS_location constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_location & outArgument0,
                                class GGS_midrange_5F_instructionList & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_lstring & outArgument3,
                                class GGS_location & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_location & outArgument0,
                               class GGS_midrange_5F_instructionList & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_lstring & outArgument3,
                               class GGS_location & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_location & outArgument0,
                                     class GGS_midrange_5F_instructionList & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_lstring & outArgument3,
                                     class GGS_location & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMFirstSaveRegisterAtIndex (class GGS_lstring constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMSecondSaveRegisterAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_location & outArgument0,
                             class GGS_midrange_5F_instructionList & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_lstring & outArgument3,
                             class GGS_location & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_location & outArgument0,
                            class GGS_midrange_5F_instructionList & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_lstring & outArgument3,
                            class GGS_location & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFirstSaveRegisterAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSecondSaveRegisterAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_interruptDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_interruptDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_interruptDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_interruptDefinitionList ;
  friend class DownEnumerator_midrange_5F_interruptDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_interruptDefinitionList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_location & in_mInterruptLocation,
                                                              const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                              const GGS_lstring & in_mFirstSaveRegister,
                                                              const GGS_lstring & in_mSecondSaveRegister,
                                                              const GGS_location & in_mEndOfInterruptLocation) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_interruptDefinitionList_2E_element & operator = (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_routineDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_routineDefinitionList final {
  public: DownEnumerator_midrange_5F_routineDefinitionList (const class GGS_midrange_5F_routineDefinitionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_routineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

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

  private: GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_routineDefinitionList (const DownEnumerator_midrange_5F_routineDefinitionList &) = delete ;
  private: DownEnumerator_midrange_5F_routineDefinitionList & operator = (const DownEnumerator_midrange_5F_routineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_routineDefinitionList final {
  public: UpEnumerator_midrange_5F_routineDefinitionList (const class GGS_midrange_5F_routineDefinitionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_routineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

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

  private: GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_routineDefinitionList (const UpEnumerator_midrange_5F_routineDefinitionList &) = delete ;
  private: UpEnumerator_midrange_5F_routineDefinitionList & operator = (const UpEnumerator_midrange_5F_routineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_routineDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_routineDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_routineDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_routineDefinitionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList &) = default ;
  public: GGS_midrange_5F_routineDefinitionList & operator = (const GGS_midrange_5F_routineDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_routineDefinitionList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_routineDefinitionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_midrange_5F_routineDefinitionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_luint & inOperand1,
                                   const class GGS_luint & inOperand2,
                                   const class GGS_luint & inOperand3,
                                   const class GGS_bool & inOperand4,
                                   const class GGS_bool & inOperand5,
                                   const class GGS_midrange_5F_instructionList & inOperand6,
                                   const class GGS_location & inOperand7
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_midrange_5F_routineDefinitionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_midrange_5F_routineDefinitionList add_operation (const GGS_midrange_5F_routineDefinitionList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_luint constinArgument1,
                              class GGS_luint constinArgument2,
                              class GGS_luint constinArgument3,
                              class GGS_bool constinArgument4,
                              class GGS_bool constinArgument5,
                              class GGS_midrange_5F_instructionList constinArgument6,
                              class GGS_location constinArgument7,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
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

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_luint & outArgument1,
                                class GGS_luint & outArgument2,
                                class GGS_luint & outArgument3,
                                class GGS_bool & outArgument4,
                                class GGS_bool & outArgument5,
                                class GGS_midrange_5F_instructionList & outArgument6,
                                class GGS_location & outArgument7,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_luint & outArgument1,
                               class GGS_luint & outArgument2,
                               class GGS_luint & outArgument3,
                               class GGS_bool & outArgument4,
                               class GGS_bool & outArgument5,
                               class GGS_midrange_5F_instructionList & outArgument6,
                               class GGS_location & outArgument7,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
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

  public: void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
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

  public: void setter_setMPreservesBankAtIndex (class GGS_bool constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMRequiredBankAtIndex (class GGS_luint constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMReturnedBankAtIndex (class GGS_luint constinArgument0,
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
                             class GGS_luint & outArgument2,
                             class GGS_luint & outArgument3,
                             class GGS_bool & outArgument4,
                             class GGS_bool & outArgument5,
                             class GGS_midrange_5F_instructionList & outArgument6,
                             class GGS_location & outArgument7,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
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
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mPageAtIndex (const class GGS_uint & constinOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mPreservesBankAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mRequiredBankAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mReturnedBankAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRoutineNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_routineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_routineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_routineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_routineDefinitionList ;
  friend class DownEnumerator_midrange_5F_routineDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_routineDefinitionList_2E_element struct
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

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_routineDefinitionList_2E_element & operator = (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ;

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
  public: GGS_clusterList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_clusterList class_func_listWithValue (const class GGS_ipic_31__38_BlockList & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_clusterList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_ipic_31__38_BlockList & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_clusterList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_clusterList add_operation (const GGS_clusterList & inOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_ipic_31__38_BlockList constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_ipic_31__38_BlockList constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_ipic_31__38_BlockList & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_ipic_31__38_BlockList & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_ipic_31__38_BlockList & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBlockListAtIndex (class GGS_ipic_31__38_BlockList constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_ipic_31__38_BlockList & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_ipic_31__38_BlockList & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_BlockList getter_mBlockListAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_clusterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_clusterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_clusterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: static class GGS_neededConversionForClusterOrder class_func_mapWithMapToOverride (const class GGS_neededConversionForClusterOrder & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMConversionsForKey (class GGS_uint constinArgument0,
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

  public: class GGS_uint getter_mConversionsForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_neededConversionForClusterOrder getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_neededConversionForClusterOrder_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ;

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
// Phase 1: @baseline_5F_declaredRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_declaredRoutineMap final {

  public: DownEnumerator_baseline_5F_declaredRoutineMap (const class GGS_baseline_5F_declaredRoutineMap & inMap) ;

  public: ~ DownEnumerator_baseline_5F_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_declaredRoutineMap (const DownEnumerator_baseline_5F_declaredRoutineMap &) = delete ;
  private: DownEnumerator_baseline_5F_declaredRoutineMap & operator = (const DownEnumerator_baseline_5F_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_declaredRoutineMap final {
  public: UpEnumerator_baseline_5F_declaredRoutineMap (const class GGS_baseline_5F_declaredRoutineMap & inMap)  ;

  public: ~ UpEnumerator_baseline_5F_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_declaredRoutineMap (const UpEnumerator_baseline_5F_declaredRoutineMap &) = delete ;
  private: UpEnumerator_baseline_5F_declaredRoutineMap & operator = (const UpEnumerator_baseline_5F_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_declaredRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_declaredRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_baseline_5F_declaredRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_baseline_5F_declaredRoutineMap (void) ;

//--- Handle copy
  public: GGS_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inSource) ;
  public: GGS_baseline_5F_declaredRoutineMap & operator = (const GGS_baseline_5F_declaredRoutineMap & inSource) ;

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
  protected: void performInsert (const class GGS_baseline_5F_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_declaredRoutineMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_declaredRoutineMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_declaredRoutineMap class_func_mapWithMapToOverride (const class GGS_baseline_5F_declaredRoutineMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
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

  public: class GGS_baseline_5F_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_declaredRoutineMap ;
  friend class DownEnumerator_baseline_5F_declaredRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_declaredRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_declaredRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_declaredRoutineMap_2E_element & operator = (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baseline_declaredRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baseline_5F_declaredRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baseline_5F_declaredRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldTerminateWithMOVLW (class cPtr_baseline_5F_instruction * inObject,
                                                   const class GGS_string constin_inErrorMessage,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldNotContinueInSequence (class cPtr_baseline_5F_instruction * inObject,
                                                      const class GGS_string constin_inErrorMessage,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction bang_baseline_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_intermediate_5F_instruction mProperty_mInstruction ;
  public: inline GGS_baseline_5F_intermediate_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_baseline_5F_intermediate_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element & operator = (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instructionList_2E_element init_21_ (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_NULL : public GGS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_NULL (const class cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_NULL init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_NULL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_NULL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_NULL : public cPtr_baseline_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_NULL_init (Compiler * inCompiler) ;


//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_NULL (Compiler * inCompiler
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
// Phase 1: @baseline_5F_intermediate_5F_NULL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_NULL_2E_weak : public GGS_baseline_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_NULL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_NULL_2E_weak (const class GGS_baseline_5F_intermediate_5F_NULL & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_NULL_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_NULL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_NULL_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_NULL bang_baseline_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_NULL unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_NULL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_NULL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo : public GGS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo (const class cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo : public cPtr_baseline_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_init (Compiler * inCompiler) ;


//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_2E_weak : public GGS_baseline_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo bang_baseline_5F_intermediate_5F_pseudo_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_pseudo unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_pseudo_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mPage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE init_21_ (const class GGS_uint & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_PAGE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (const class GGS_uint & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentWordAdress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GGS_uint & in_mPage,
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL init_21_ (const class GGS_lstring & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_baselineSymbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_bool readProperty_mIsRegular (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBEGIN_ROUTINE
  public: virtual void method_optimizeBEGIN_5F_ROUTINE (const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_bool mProperty_mIsRegular ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                       const GGS_bool & in_mIsRegular,
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_uint readProperty_mPage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_uint mProperty_mPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                     const GGS_uint & in_mPage,
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_actualInstruction : public GGS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_actualInstruction (const class cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_actualInstruction : public cPtr_baseline_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_intermediate_5F_actualInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak : public GGS_baseline_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (const class GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_actualInstruction bang_baseline_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_actualInstruction unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FD : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                              const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD bang_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_F : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mInstruction (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                    const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_F : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                              const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                              Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                             const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                             const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F bang_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FB : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_bit_5F_oriented_5F_op readProperty_mInstruction (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                   const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_uint & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                              const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB bang_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                            const class GGS_uint & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_bool & in_mSkipIfSet,
                                                                       const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_GOTO : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_GOTO (const class cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_GOTO extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_GOTO : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_intermediate_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_GOTO_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (const class GGS_baseline_5F_intermediate_5F_GOTO & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_GOTO_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_GOTO bang_baseline_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_GOTO unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JUMP : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_JUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_uint readProperty_mCurrentPage (void) const ;

  public: class GGS_uint readProperty_mTargetPage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_JUMP init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_uint & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_JUMP extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JUMP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_uint & inOperand2,
                                                                      const class GGS_uint & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_uint mProperty_mCurrentPage ;
  public: GGS_uint mProperty_mTargetPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_uint & in_mCurrentPage,
                                                 const GGS_uint & in_mTargetPage,
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
// Phase 1: @baseline_5F_intermediate_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JUMP_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (const class GGS_baseline_5F_intermediate_5F_JUMP & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_JUMP_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_JUMP bang_baseline_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_JUMP unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_CALL : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_CALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_CALL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_CALL : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeCALL
  public: virtual void method_optimizeCALL (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_intermediate_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_CALL_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_CALL_2E_weak (const class GGS_baseline_5F_intermediate_5F_CALL & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_CALL_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_CALL_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_CALL bang_baseline_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_CALL unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JSR : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_JSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_uint readProperty_mCurrentPage (void) const ;

  public: class GGS_uint readProperty_mTargetPage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_JSR init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           const class GGS_uint & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     const class GGS_uint & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJSR
  public: virtual void method_optimizeJSR (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_uint mProperty_mCurrentPage ;
  public: GGS_uint mProperty_mTargetPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                const GGS_uint & in_mCurrentPage,
                                                const GGS_uint & in_mTargetPage,
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
// Phase 1: @baseline_5F_intermediate_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JSR_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_JSR_2E_weak (const class GGS_baseline_5F_intermediate_5F_JSR & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_JSR bang_baseline_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_JSR unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (const class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_TRIS : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_TRIS (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_TRIS (const class cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOperand (void) const ;

  public: class GGS_uint readProperty_mOpcode (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_TRIS init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_uint & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_TRIS extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_TRIS class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_TRIS : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_uint & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOperand ;
  public: GGS_uint mProperty_mOpcode ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mOperand,
                                                 const GGS_uint & in_mOpcode,
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
// Phase 1: @baseline_5F_intermediate_5F_TRIS_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_TRIS_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (const class GGS_baseline_5F_intermediate_5F_TRIS & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_TRIS & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_TRIS_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_TRIS bang_baseline_5F_intermediate_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_TRIS unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_TRIS_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_TRIS_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mInstruction (void) const ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                   const class GGS_uint & inOperand2,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
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
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_string readProperty_mTargetLabel (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_bool & inOperand3,
                                                                                                         const class GGS_bool & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_bool & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_string mProperty_mTargetLabel ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_string & in_mTargetLabel,
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
// Phase 1: @baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition unwrappedValue (void) const ;

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
  public: static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bootloaderReservedRAMmap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_bootloaderReservedRAMmap final {

  public: DownEnumerator_bootloaderReservedRAMmap (const class GGS_bootloaderReservedRAMmap & inMap) ;

  public: ~ DownEnumerator_bootloaderReservedRAMmap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mReservedSize (LOCATION_ARGS) const ;

  public: class GGS_bootloaderReservedRAMmap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bootloaderReservedRAMmap (const DownEnumerator_bootloaderReservedRAMmap &) = delete ;
  private: DownEnumerator_bootloaderReservedRAMmap & operator = (const DownEnumerator_bootloaderReservedRAMmap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bootloaderReservedRAMmap final {
  public: UpEnumerator_bootloaderReservedRAMmap (const class GGS_bootloaderReservedRAMmap & inMap)  ;

  public: ~ UpEnumerator_bootloaderReservedRAMmap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReservedSize (LOCATION_ARGS) const ;
  public: class GGS_bootloaderReservedRAMmap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bootloaderReservedRAMmap (const UpEnumerator_bootloaderReservedRAMmap &) = delete ;
  private: UpEnumerator_bootloaderReservedRAMmap & operator = (const UpEnumerator_bootloaderReservedRAMmap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_bootloaderReservedRAMmap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_bootloaderReservedRAMmap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_bootloaderReservedRAMmap (void) ;

//--- Handle copy
  public: GGS_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inSource) ;
  public: GGS_bootloaderReservedRAMmap & operator = (const GGS_bootloaderReservedRAMmap & inSource) ;

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
  protected: void performInsert (const class GGS_bootloaderReservedRAMmap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: static class GGS_bootloaderReservedRAMmap class_func_mapWithMapToOverride (const class GGS_bootloaderReservedRAMmap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_luint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMReservedSizeForKey (class GGS_luint constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_luint & outArgument1,
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

  public: class GGS_luint getter_mReservedSizeForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_bootloaderReservedRAMmap getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_bootloaderReservedRAMmap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bootloaderReservedRAMmap ;
  friend class DownEnumerator_bootloaderReservedRAMmap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bootloaderReservedRAMmap_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (const GGS_lstring & in_lkey,
                                                   const GGS_luint & in_mReservedSize) ;

//--------------------------------- Copy constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (const GGS_bootloaderReservedRAMmap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bootloaderReservedRAMmap_2E_element & operator = (const GGS_bootloaderReservedRAMmap_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: bootloaderReservedRAMmap.element? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_nobanksel reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_nobanksel class
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
  public: cPtr_pic_31__38_Instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_nobanksel_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_nobanksel bang_pic_31__38_Instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_nobanksel unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_checknobank reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_checknobank class
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
  public: cPtr_pic_31__38_Instruction_5F_checknobank (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_checknobank_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_checknobank bang_pic_31__38_Instruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_checknobank unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checkbank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checkbank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_checkbank (const class cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBankIndex (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_checkbank class
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
                                                    const GGS_uint & in_mBankIndex,
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
// Phase 1: @pic_31__38_Instruction_5F_checkbank_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_checkbank bang_pic_31__38_Instruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_checkbank unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloSimpleInstruction_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_PiccoloSimpleInstruction bang_pic_31__38_PiccoloSimpleInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_PiccoloSimpleInstruction unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_banksel (const class cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_banksel class
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
                                                  const GGS_bool & in_mWarningOnUselessBanksel,
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
// Phase 1: @pic_31__38_Instruction_5F_banksel_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_banksel bang_pic_31__38_Instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_banksel unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_5F_register : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register (const class cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_banksel_register class
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
                                                              const GGS_bool & in_mWarningOnUselessBanksel,
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
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register bang_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_savebank reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_savebank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_savebank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_savebank (const class cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSaveBankInstruction (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_savebank class
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
                                                   const GGS_location & in_mEndOfSaveBankInstruction,
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
// Phase 1: @pic_31__38_Instruction_5F_savebank_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_savebank bang_pic_31__38_Instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_savebank unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_repetitionStatique : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique (const class cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_repetitionStatique class
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
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique bang_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBlockTerminationForBlockInstruction_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractBlockTerminationForBlockInstruction bang_abstractBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractBlockTerminationForBlockInstruction unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @exitBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_exitBlockTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_exitBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_exitBlockTerminationForBlockInstruction (const class cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_exitBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @exitBlockTerminationForBlockInstruction class
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
  public: cPtr_exitBlockTerminationForBlockInstruction (const GGS_location & in_mLocation,
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
// Phase 1: @exitBlockTerminationForBlockInstruction_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_exitBlockTerminationForBlockInstruction bang_exitBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_exitBlockTerminationForBlockInstruction unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @gotoTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_gotoTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_gotoTerminationForBlockInstruction (const class cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNextBlock (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @gotoTerminationForBlockInstruction class
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
  public: cPtr_gotoTerminationForBlockInstruction (const GGS_lstring & in_mNextBlock,
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
// Phase 1: @gotoTerminationForBlockInstruction_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_gotoTerminationForBlockInstruction bang_gotoTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_gotoTerminationForBlockInstruction unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_testTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_testTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testTerminationForBlockInstruction (const class cPtr_testTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction readProperty_mTrueTermination (void) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction readProperty_mFalseTermination (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @testTerminationForBlockInstruction class
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
                                                   const GGS_location & in_mLocation,
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
// Phase 1: @testTerminationForBlockInstruction_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testTerminationForBlockInstruction bang_testTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_testTerminationForBlockInstruction unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BlockInstructionBlockList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_BlockInstructionBlockList final {
  public: DownEnumerator_pic_31__38_BlockInstructionBlockList (const class GGS_pic_31__38_BlockInstructionBlockList & inList) ;

  public: ~ DownEnumerator_pic_31__38_BlockInstructionBlockList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_BlockInstructionBlockList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_BlockInstructionBlockList (const DownEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
  private: DownEnumerator_pic_31__38_BlockInstructionBlockList & operator = (const DownEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_BlockInstructionBlockList final {
  public: UpEnumerator_pic_31__38_BlockInstructionBlockList (const class GGS_pic_31__38_BlockInstructionBlockList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_BlockInstructionBlockList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_BlockInstructionBlockList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_BlockInstructionBlockList (const UpEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
  private: UpEnumerator_pic_31__38_BlockInstructionBlockList & operator = (const UpEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18BlockInstructionBlockList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BlockInstructionBlockList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_BlockInstructionBlockList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_BlockInstructionBlockList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList &) = default ;
  public: GGS_pic_31__38_BlockInstructionBlockList & operator = (const GGS_pic_31__38_BlockInstructionBlockList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_BlockInstructionBlockList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_BlockInstructionBlockList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_pic_31__38_BlockInstructionBlockList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                          const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                          const class GGS_location & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_pic_31__38_BlockInstructionBlockList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_pic_31__38_InstructionList & inOperand1,
                                   const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                   const class GGS_location & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_pic_31__38_BlockInstructionBlockList add_operation (const GGS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_pic_31__38_InstructionList constinArgument1,
                              class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                              class GGS_location constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_pic_31__38_InstructionList constinArgument1,
                                     class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                     class GGS_location constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_pic_31__38_InstructionList & outArgument1,
                                class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                class GGS_location & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_pic_31__38_InstructionList & outArgument1,
                               class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                               class GGS_location & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_pic_31__38_InstructionList & outArgument1,
                                     class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                     class GGS_location & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBlockNameAtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMBlockTerminaisonForBlockInstructionAtIndex (class GGS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfBlockAtIndex (class GGS_location constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_pic_31__38_InstructionList & outArgument1,
                             class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                             class GGS_location & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_pic_31__38_InstructionList & outArgument1,
                            class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                            class GGS_location & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mBlockNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfBlockAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_BlockInstructionBlockList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_BlockInstructionBlockList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_BlockInstructionBlockList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_BlockInstructionBlockList ;
  friend class DownEnumerator_pic_31__38_BlockInstructionBlockList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BlockInstructionBlockList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_lstring & in_mBlockName,
                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                               const GGS_location & in_mEndOfBlock) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element & operator = (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_block reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_block : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_block (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_block (const class cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStartBlockName (void) const ;

  public: class GGS_pic_31__38_BlockInstructionBlockList readProperty_mBlockList (void) const ;

  public: class GGS_location readProperty_mEndOfBlockInstruction (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_block & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_block class
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
                                                const GGS_location & in_mEndOfBlockInstruction,
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
// Phase 1: @pic_31__38_Instruction_5F_block_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_block bang_pic_31__38_Instruction_5F_block_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_block unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FDA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FDA (const class cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_FDA class
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
// Phase 1: @pic_31__38_Instruction_5F_FDA_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_FDA bang_pic_31__38_Instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_FDA unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FA (const class cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_FA_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_FA class
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
// Phase 1: @pic_31__38_Instruction_5F_FA_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_FA bang_pic_31__38_Instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_FA unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2E_weak ;

