#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_LFSR reference class
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
                                                                          const class GGS_immediatExpression & inOperand2,
                                                                          class Compiler * inCompiler
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LFSR class
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
                                               const GGS_immediatExpression & in_mImmediatExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_LFSR_2E_weak weak reference class
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR reference class
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
                                                                             const class GGS_immediatExpression & inOperand1,
                                                                             class Compiler * inCompiler
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LTBLPTR class
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
                                                  const GGS_immediatExpression & in_mImmediatExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR_2E_weak weak reference class
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
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
                                                                                  const class GGS_luint & inOperand2,
                                                                                  class Compiler * inCompiler
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LDATA8PTR class
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
                                                       const GGS_luint & in_mDataIndex,
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak weak reference class
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR reference class
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
                                                                                      const class GGS_luint & inOperand2,
                                                                                      class Compiler * inCompiler
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LDATA16PTR class
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
                                                           const GGS_luint & in_mDataIndex,
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak weak reference class
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPostDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPostIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPreIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSimpleAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableAccessOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_TBLRD : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_TBLRD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_TBLRD (const class cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;
  public: void setProperty_mOption (const GGS_tableAccessOption & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_TBLRD init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_tableAccessOption & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_TBLRD extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_TBLRD class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_tableAccessOption & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_TBLRD : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_TBLRD_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_tableAccessOption & inOperand1,
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
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLRD (const GGS_location & in_mInstructionLocation,
                                                const GGS_tableAccessOption & in_mOption,
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
// Phase 1: @pic_31__38_Instruction_5F_TBLRD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak (const class GGS_pic_31__38_Instruction_5F_TBLRD & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_TBLRD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_TBLRD bang_pic_31__38_Instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_TBLRD unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_TBLRD result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (cPtr_pic_31__38_Instruction_5F_TBLRD *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_TBLRD (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_TBLWT : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_TBLWT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_TBLWT (const class cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;
  public: void setProperty_mOption (const GGS_tableAccessOption & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_TBLWT init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_tableAccessOption & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_TBLWT extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_TBLWT class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_tableAccessOption & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_TBLWT : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_TBLWT_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_tableAccessOption & inOperand1,
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
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                const GGS_tableAccessOption & in_mOption,
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
// Phase 1: @pic_31__38_Instruction_5F_TBLWT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak : public GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak (const class GGS_pic_31__38_Instruction_5F_TBLWT & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_TBLWT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_TBLWT bang_pic_31__38_Instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_TBLWT unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_TBLWT result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_TBLWT * p = (cPtr_pic_31__38_Instruction_5F_TBLWT *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_TBLWT (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_MNOP : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_MNOP (const class cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_luint & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_luint & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_MNOP : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_luint & inOperand1,
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
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                               const GGS_luint & in_mOccurrenceFactor,
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
// Phase 1: @pic_31__38_Instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_MNOP_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_MNOP_2E_weak (const class GGS_pic_31__38_Instruction_5F_MNOP & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_MNOP_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_MNOP bang_pic_31__38_Instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_MNOP unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_MNOP result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_MNOP * p = (cPtr_pic_31__38_Instruction_5F_MNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_MNOP (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_NOPBRA : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_NOPBRA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_NOPBRA (const class cPtr_pic_31__38_Instruction_5F_NOPBRA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_NOPBRA init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_luint & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_NOPBRA extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_NOPBRA class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_NOPBRA : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_luint & inOperand1,
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
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                 const GGS_luint & in_mOccurrenceFactor,
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
// Phase 1: @pic_31__38_Instruction_5F_NOPBRA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak (const class GGS_pic_31__38_Instruction_5F_NOPBRA & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_NOPBRA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_NOPBRA bang_pic_31__38_Instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_NOPBRA unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_NOPBRA result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (cPtr_pic_31__38_Instruction_5F_NOPBRA *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_NOPBRA (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FOREVER : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FOREVER (const class cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;
  public: void setProperty_mEndOfInstructionList (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FOREVER init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FOREVER extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FOREVER class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                             const class GGS_location & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FOREVER : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FOREVER_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                   const class GGS_location & inOperand2,
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
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const GGS_location & in_mEndOfInstructionList,
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
// Phase 1: @pic_31__38_Instruction_5F_FOREVER_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak (const class GGS_pic_31__38_Instruction_5F_FOREVER & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_FOREVER & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_FOREVER bang_pic_31__38_Instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_FOREVER unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_FOREVER result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_FOREVER * p = (cPtr_pic_31__38_Instruction_5F_FOREVER *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_FOREVER (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum if_5F_semi_5F_colon_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_if_5F_semi_5F_colon_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_if_5F_semi_5F_colon_5F_op (void) ;

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
  public: static GGS_if_5F_semi_5F_colon_5F_op extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_PiccoloSimpleInstruction readProperty_mEmbeddedInstruction (void) const ;
  public: void setProperty_mEmbeddedInstruction (const GGS_pic_31__38_PiccoloSimpleInstruction & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON init_21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                           Compiler * inCompiler) ;


//--- Properties
  public: GGS_pic_31__38_PiccoloSimpleInstruction mProperty_mEmbeddedInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                              const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const class GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON bang_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_if_5F_semi_5F_colon_5F_op readProperty_mOpCode (void) const ;
  public: void setProperty_mOpCode (const GGS_if_5F_semi_5F_colon_5F_op & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                               const class GGS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                               const class GGS_registerExpression & inOperand3,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                               const class GGS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                               const class GGS_registerExpression & inOperand3,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                         const class GGS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                         const class GGS_registerExpression & inOperand3,
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
  public: GGS_if_5F_semi_5F_colon_5F_op mProperty_mOpCode ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                    const GGS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                    const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (const class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON bang_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (const class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GGS_bool & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_BitTest init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_registerExpression & inOperand3,
                                                                                       const class GGS_bitNumberExpression & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_BitTest extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   const class GGS_registerExpression & inOperand3,
                                                                                   const class GGS_bitNumberExpression & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_registerExpression & inOperand3,
                                                                                 const class GGS_bitNumberExpression & inOperand4,
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
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                        const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                        const GGS_bool & in_mSkipIfSet,
                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bitNumberExpression & in_mBitNumber,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (const class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest bang_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_IF_5F_BitTest unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (const class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mSkipIfZero (void) const ;
  public: void setProperty_mSkipIfZero (const GGS_bool & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_IncDec init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          const class GGS_bool & inOperand3,
                                                                                          const class GGS_registerExpression & inOperand4,
                                                                                          const class GGS_bool & inOperand5,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_IncDec extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  const class GGS_registerExpression & inOperand4,
                                                                                  const class GGS_bool & inOperand5,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_IncDec_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_bool & inOperand3,
                                                                                    const class GGS_registerExpression & inOperand4,
                                                                                    const class GGS_bool & inOperand5,
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
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_mSkipIfZero ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                       const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                       const GGS_bool & in_mIncrement,
                                                       const GGS_bool & in_mSkipIfZero,
                                                       const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (const class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec bang_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_IF_5F_IncDec unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_retlw reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_retlw : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw (const class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpressionList readProperty_mImmediateExpressionList (void) const ;
  public: void setProperty_mImmediateExpressionList (const GGS_immediatExpressionList & inValue) ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_retlw init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_immediatExpressionList & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_retlw extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_retlw class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_immediatExpressionList & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_retlw class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_retlw_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1,
                                                                                 const class GGS_immediatExpressionList & inOperand2,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_immediatExpressionList mProperty_mImmediateExpressionList ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GGS_location & in_mInstructionLocation,
                                                            const GGS_immediatExpression & in_mSizeExpression,
                                                            const GGS_immediatExpressionList & in_mImmediateExpressionList,
                                                            const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (const class GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw bang_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_computed_5F_retlw unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_computed_5F_retlw (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_bra reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_bra : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra (const class cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GGS_lstringlist & inValue) ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_bra init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_immediatExpression & inOperand1,
                                                                                     const class GGS_lstringlist & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_bra extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_bra class_func_new (const class GGS_location & inOperand0,
                                                                                     const class GGS_immediatExpression & inOperand1,
                                                                                     const class GGS_lstringlist & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_bra class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_bra : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_bra_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_immediatExpression & inOperand1,
                                                                               const class GGS_lstringlist & inOperand2,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_bra (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GGS_location & in_mInstructionLocation,
                                                          const GGS_immediatExpression & in_mSizeExpression,
                                                          const GGS_lstringlist & in_mTargetLabels,
                                                          const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_bra_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (const class GGS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra bang_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_computed_5F_bra unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_computed_5F_bra result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_computed_5F_bra (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_goto reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_goto : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto (const class cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GGS_lstringlist & inValue) ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_goto init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_immediatExpression & inOperand1,
                                                                                      const class GGS_lstringlist & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_goto extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_goto class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_immediatExpression & inOperand1,
                                                                                      const class GGS_lstringlist & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_goto class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_goto : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_goto_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_immediatExpression & inOperand1,
                                                                                const class GGS_lstringlist & inOperand2,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_goto (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GGS_location & in_mInstructionLocation,
                                                           const GGS_immediatExpression & in_mSizeExpression,
                                                           const GGS_lstringlist & in_mTargetLabels,
                                                           const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_goto_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (const class GGS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto bang_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_computed_5F_goto unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_computed_5F_goto result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_computed_5F_goto (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_rcall : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall (const class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GGS_lstringlist & inValue) ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_rcall init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_lstringlist & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_rcall extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_rcall class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_lstringlist & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_rcall_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1,
                                                                                 const class GGS_lstringlist & inOperand2,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                            const GGS_immediatExpression & in_mSizeExpression,
                                                            const GGS_lstringlist & in_mTargetLabels,
                                                            const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (const class GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall bang_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_computed_5F_rcall unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_computed_5F_rcall (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_ConditionExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_ConditionExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_ConditionExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_ConditionExpression_2E_weak (const class GGS_pic_31__38_ConditionExpression & inSource) ;

  public: GGS_pic_31__38_ConditionExpression_2E_weak & operator = (const class GGS_pic_31__38_ConditionExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_ConditionExpression_2E_weak init_nil (void) {
    GGS_pic_31__38_ConditionExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_ConditionExpression bang_pic_31__38_ConditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_ConditionExpression unwrappedValue (void) const {
    GGS_pic_31__38_ConditionExpression result ;
    if (isValid ()) {
      const cPtr_pic_31__38_ConditionExpression * p = (cPtr_pic_31__38_ConditionExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_ConditionExpression (p) ;
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
  public: static GGS_pic_31__38_ConditionExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_ConditionExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_ConditionExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RegisterTestCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterTestCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterTestCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_RegisterTestCondition (const class cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RegisterTestCondition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RegisterTestCondition extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterTestCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                            const class GGS_bool & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterTestCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18RegisterTestCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterTestCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterTestCondition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterTestCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterTestCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                 const GGS_bool & in_mBranchIfZero,
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
// Phase 1: @pic_31__38_RegisterTestCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterTestCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterTestCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_RegisterTestCondition_2E_weak (const class GGS_pic_31__38_RegisterTestCondition & inSource) ;

  public: GGS_pic_31__38_RegisterTestCondition_2E_weak & operator = (const class GGS_pic_31__38_RegisterTestCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_RegisterTestCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_RegisterTestCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_RegisterTestCondition bang_pic_31__38_RegisterTestCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_RegisterTestCondition unwrappedValue (void) const {
    GGS_pic_31__38_RegisterTestCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_RegisterTestCondition (p) ;
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
  public: static GGS_pic_31__38_RegisterTestCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterTestCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterTestCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_notEqual,
    enum_equal,
    enum_greaterOrEqual,
    enum_greater,
    enum_lowerOrEqual,
    enum_lower
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
  public: static GGS_pic_31__38_RegisterComparison extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparison class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_greater (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_lower (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RegisterComparisonCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_RegisterComparisonCondition (const class cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_pic_31__38_RegisterComparison readProperty_mComparison (void) const ;
  public: void setProperty_mComparison (const GGS_pic_31__38_RegisterComparison & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RegisterComparisonCondition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                          const class GGS_pic_31__38_RegisterComparison & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RegisterComparisonCondition extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparisonCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                  const class GGS_pic_31__38_RegisterComparison & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18RegisterComparisonCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterComparisonCondition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                    const class GGS_pic_31__38_RegisterComparison & inOperand1,
                                                                    Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_pic_31__38_RegisterComparison mProperty_mComparison ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                       const GGS_pic_31__38_RegisterComparison & in_mComparison,
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
// Phase 1: @pic_31__38_RegisterComparisonCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_RegisterComparisonCondition_2E_weak (const class GGS_pic_31__38_RegisterComparisonCondition & inSource) ;

  public: GGS_pic_31__38_RegisterComparisonCondition_2E_weak & operator = (const class GGS_pic_31__38_RegisterComparisonCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_RegisterComparisonCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_RegisterComparisonCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_RegisterComparisonCondition bang_pic_31__38_RegisterComparisonCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_RegisterComparisonCondition unwrappedValue (void) const {
    GGS_pic_31__38_RegisterComparisonCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_RegisterComparisonCondition * p = (cPtr_pic_31__38_RegisterComparisonCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_RegisterComparisonCondition (p) ;
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
  public: static GGS_pic_31__38_RegisterComparisonCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparisonCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_IncDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IncDecRegisterInCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IncDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_IncDecRegisterInCondition (const class cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) ;

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
  public: static GGS_pic_31__38_IncDecRegisterInCondition init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_bool & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IncDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IncDecRegisterInCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_bool & inOperand3,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IncDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18IncDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IncDecRegisterInCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IncDecRegisterInCondition_init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                          const class GGS_bool & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_bool & inOperand3,
                                                                          Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                     const GGS_bool & in_mIncrement,
                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                     const GGS_bool & in_mBranchIfZero,
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
// Phase 1: @pic_31__38_IncDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IncDecRegisterInCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IncDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_IncDecRegisterInCondition_2E_weak (const class GGS_pic_31__38_IncDecRegisterInCondition & inSource) ;

  public: GGS_pic_31__38_IncDecRegisterInCondition_2E_weak & operator = (const class GGS_pic_31__38_IncDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_IncDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_IncDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_IncDecRegisterInCondition bang_pic_31__38_IncDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_IncDecRegisterInCondition unwrappedValue (void) const {
    GGS_pic_31__38_IncDecRegisterInCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_IncDecRegisterInCondition (p) ;
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
  public: static GGS_pic_31__38_IncDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IncDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IncDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BccInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BccInStructuredCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BccInStructuredCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_BccInStructuredCondition (const class cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mConditionLocation (void) const ;
  public: void setProperty_mConditionLocation (const GGS_location & inValue) ;

  public: class GGS_conditional_5F_branch readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GGS_conditional_5F_branch & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BccInStructuredCondition init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_conditional_5F_branch & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BccInStructuredCondition extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BccInStructuredCondition class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_conditional_5F_branch & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BccInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18BccInStructuredCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BccInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BccInStructuredCondition_init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_conditional_5F_branch & inOperand1,
                                                                 Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mConditionLocation ;
  public: GGS_conditional_5F_branch mProperty_mCondition ;


//--- Default constructor
  public: cPtr_pic_31__38_BccInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BccInStructuredCondition (const GGS_location & in_mConditionLocation,
                                                    const GGS_conditional_5F_branch & in_mCondition,
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
// Phase 1: @pic_31__38_BccInStructuredCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BccInStructuredCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BccInStructuredCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_BccInStructuredCondition_2E_weak (const class GGS_pic_31__38_BccInStructuredCondition & inSource) ;

  public: GGS_pic_31__38_BccInStructuredCondition_2E_weak & operator = (const class GGS_pic_31__38_BccInStructuredCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_BccInStructuredCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_BccInStructuredCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_BccInStructuredCondition bang_pic_31__38_BccInStructuredCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_BccInStructuredCondition unwrappedValue (void) const {
    GGS_pic_31__38_BccInStructuredCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_BccInStructuredCondition (p) ;
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
  public: static GGS_pic_31__38_BccInStructuredCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BccInStructuredCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BccInStructuredCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_NegateCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_NegateCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_NegateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_NegateCondition (const class cPtr_pic_31__38_NegateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GGS_pic_31__38_ConditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_NegateCondition init_21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_NegateCondition extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_NegateCondition class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_NegateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18NegateCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_NegateCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_NegateCondition_init_21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                    Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mCondition ;


//--- Default constructor
  public: cPtr_pic_31__38_NegateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_NegateCondition (const GGS_pic_31__38_ConditionExpression & in_mCondition,
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
// Phase 1: @pic_31__38_NegateCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_NegateCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_NegateCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_NegateCondition_2E_weak (const class GGS_pic_31__38_NegateCondition & inSource) ;

  public: GGS_pic_31__38_NegateCondition_2E_weak & operator = (const class GGS_pic_31__38_NegateCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_NegateCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_NegateCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_NegateCondition bang_pic_31__38_NegateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_NegateCondition unwrappedValue (void) const {
    GGS_pic_31__38_NegateCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_NegateCondition * p = (cPtr_pic_31__38_NegateCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_NegateCondition (p) ;
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
  public: static GGS_pic_31__38_NegateCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_NegateCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_NegateCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_AndCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AndCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AndCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_AndCondition (const class cPtr_pic_31__38_AndCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_pic_31__38_ConditionExpression & inValue) ;

  public: class GGS_pic_31__38_ConditionExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_pic_31__38_ConditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AndCondition init_21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                           const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AndCondition extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AndCondition class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                   const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AndCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18AndCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AndCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_AndCondition_init_21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                     const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                     Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mLeftExpression ;
  public: GGS_pic_31__38_ConditionExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_AndCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_AndCondition (const GGS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                        const GGS_pic_31__38_ConditionExpression & in_mRightExpression,
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
// Phase 1: @pic_31__38_AndCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AndCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AndCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_AndCondition_2E_weak (const class GGS_pic_31__38_AndCondition & inSource) ;

  public: GGS_pic_31__38_AndCondition_2E_weak & operator = (const class GGS_pic_31__38_AndCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_AndCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_AndCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_AndCondition bang_pic_31__38_AndCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_AndCondition unwrappedValue (void) const {
    GGS_pic_31__38_AndCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_AndCondition (p) ;
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
  public: static GGS_pic_31__38_AndCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AndCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AndCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BitTestInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestInStructuredCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestInStructuredCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_BitTestInStructuredCondition (const class cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BitTestInStructuredCondition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                           const class GGS_bitNumberExpression & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BitTestInStructuredCondition extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BitTestInStructuredCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                   const class GGS_bitNumberExpression & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18BitTestInStructuredCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BitTestInStructuredCondition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                     const class GGS_bitNumberExpression & inOperand1,
                                                                     Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bitNumberExpression & in_mBitNumber,
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
// Phase 1: @pic_31__38_BitTestInStructuredCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestInStructuredCondition_2E_weak : public GGS_pic_31__38_ConditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestInStructuredCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_BitTestInStructuredCondition_2E_weak (const class GGS_pic_31__38_BitTestInStructuredCondition & inSource) ;

  public: GGS_pic_31__38_BitTestInStructuredCondition_2E_weak & operator = (const class GGS_pic_31__38_BitTestInStructuredCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_BitTestInStructuredCondition_2E_weak init_nil (void) {
    GGS_pic_31__38_BitTestInStructuredCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_BitTestInStructuredCondition bang_pic_31__38_BitTestInStructuredCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_BitTestInStructuredCondition unwrappedValue (void) const {
    GGS_pic_31__38_BitTestInStructuredCondition result ;
    if (isValid ()) {
      const cPtr_pic_31__38_BitTestInStructuredCondition * p = (cPtr_pic_31__38_BitTestInStructuredCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_BitTestInStructuredCondition (p) ;
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
  public: static GGS_pic_31__38_BitTestInStructuredCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BitTestInStructuredCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestInStructuredCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_structured_5F_if : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if (const class cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mIfCondition (void) const ;
  public: void setProperty_mIfCondition (const GGS_pic_31__38_ConditionExpression & inValue) ;

  public: class GGS_pic_31__38_InstructionList readProperty_mThenInstructionList (void) const ;
  public: void setProperty_mThenInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

  public: class GGS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfElsePartLocation (void) const ;
  public: void setProperty_mEndOfElsePartLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_structured_5F_if init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                                          const class GGS_location & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_structured_5F_if extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_structured_5F_if class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                                      const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                      const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                                      const class GGS_location & inOperand4,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_structured_if class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_structured_5F_if : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                                    const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                    const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                                    const class GGS_location & inOperand4,
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
  public: GGS_pic_31__38_ConditionExpression mProperty_mIfCondition ;
  public: GGS_pic_31__38_InstructionList mProperty_mThenInstructionList ;
  public: GGS_pic_31__38_InstructionList mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElsePartLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                           const GGS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                           const GGS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                           const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                           const GGS_location & in_mEndOfElsePartLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (const class GGS_pic_31__38_Instruction_5F_structured_5F_if & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if bang_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_structured_5F_if unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_structured_5F_if result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_structured_5F_if (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_DoWhilePartList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_DoWhilePartList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_DoWhilePartList (const class GGS_pic_31__38_DoWhilePartList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_DoWhilePartList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_DoWhilePartList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_DoWhilePartList (const class GGS_pic_31__38_DoWhilePartList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_DoWhilePartList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18DoWhilePartList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_DoWhilePartList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_DoWhilePartList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_DoWhilePartList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_DoWhilePartList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_DoWhilePartList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_DoWhilePartList class_func_listWithValue (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GGS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_DoWhilePartList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                    const class GGS_pic_31__38_InstructionList & inOperand1,
                                                    const class GGS_location & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_DoWhilePartList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_DoWhilePartList add_operation (const GGS_pic_31__38_DoWhilePartList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_ConditionExpression constinArgument0,
                                               class GGS_pic_31__38_InstructionList constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_ConditionExpression constinArgument0,
                                                      class GGS_pic_31__38_InstructionList constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                 class GGS_pic_31__38_InstructionList & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                class GGS_pic_31__38_InstructionList & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                      class GGS_pic_31__38_InstructionList & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GGS_pic_31__38_ConditionExpression constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                              class GGS_pic_31__38_InstructionList & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                             class GGS_pic_31__38_InstructionList & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_ConditionExpression getter_mConditionAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfPartLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_DoWhilePartList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_DoWhilePartList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_DoWhilePartList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_DoWhilePartList ;
  friend class DownEnumerator_pic_31__38_DoWhilePartList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_DoWhilePartList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_DoWhilePartList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: inline GGS_pic_31__38_ConditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
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
  public: GGS_pic_31__38_DoWhilePartList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GGS_pic_31__38_ConditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_DoWhilePartList_2E_element (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                     const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfPartLocation) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_DoWhilePartList_2E_element (const GGS_pic_31__38_DoWhilePartList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_DoWhilePartList_2E_element & operator = (const GGS_pic_31__38_DoWhilePartList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_DoWhilePartList_2E_element init_21__21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                             const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                             const class GGS_location & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_DoWhilePartList_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_DoWhilePartList_2E_element class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_do_5F_while : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_do_5F_while (const class cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionList readProperty_mRepeatedInstructionList (void) const ;
  public: void setProperty_mRepeatedInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructionList (void) const ;
  public: void setProperty_mEndOfRepeatedInstructionList (const GGS_location & inValue) ;

  public: class GGS_pic_31__38_DoWhilePartList readProperty_mWhilePartList (void) const ;
  public: void setProperty_mWhilePartList (const GGS_pic_31__38_DoWhilePartList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_do_5F_while init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_pic_31__38_DoWhilePartList & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_do_5F_while extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_do_5F_while class_func_new (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_pic_31__38_DoWhilePartList & inOperand3,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_do_while class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_do_5F_while : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_do_5F_while_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           const class GGS_pic_31__38_DoWhilePartList & inOperand3,
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
  public: GGS_pic_31__38_InstructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GGS_pic_31__38_DoWhilePartList mProperty_mWhilePartList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                      const GGS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                      const GGS_location & in_mEndOfRepeatedInstructionList,
                                                      const GGS_pic_31__38_DoWhilePartList & in_mWhilePartList,
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
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak (const class GGS_pic_31__38_Instruction_5F_do_5F_while & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_do_5F_while bang_pic_31__38_Instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_do_5F_while unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_do_5F_while result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_do_5F_while (p) ;
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
  public: static GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_InterruptDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_InterruptDefinitionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_InterruptDefinitionList (const class GGS_pic_31__38_InterruptDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InterruptDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_InterruptDefinitionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_InterruptDefinitionList (const class GGS_pic_31__38_InterruptDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InterruptDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18InterruptDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InterruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_InterruptDefinitionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInterruptName,
                                                 const class GGS_bool & in_mFastReturn,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfInterruptLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InterruptDefinitionList init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InterruptDefinitionList extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InterruptDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InterruptDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_bool & inOperand1,
                                                                                        const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                        const class GGS_location & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_bool & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2,
                                                    const class GGS_location & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_InterruptDefinitionList add_operation (const GGS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               class GGS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_location constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 class GGS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                class GGS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_location & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFastReturnAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              class GGS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             class GGS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mFastReturnAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInterruptNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InterruptDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InterruptDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InterruptDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_InterruptDefinitionList ;
  friend class DownEnumerator_pic_31__38_InterruptDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_InterruptDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InterruptDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInterruptName ;
  public: inline GGS_lstring readProperty_mInterruptName (void) const {
    return mProperty_mInterruptName ;
  }

  public: GGS_bool mProperty_mFastReturn ;
  public: inline GGS_bool readProperty_mFastReturn (void) const {
    return mProperty_mFastReturn ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfInterruptLocation ;
  public: inline GGS_location readProperty_mEndOfInterruptLocation (void) const {
    return mProperty_mEndOfInterruptLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptName = inValue ;
  }

  public: inline void setter_setMFastReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFastReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInterruptLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInterruptLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element (const GGS_lstring & in_mInterruptName,
                                                             const GGS_bool & in_mFastReturn,
                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                             const GGS_location & in_mEndOfInterruptLocation) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element & operator = (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InterruptDefinitionList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_bool & inOperand1,
                                                                                         const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                         const class GGS_location & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InterruptDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InterruptDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_bool & inOperand1,
                                                                                         const class GGS_pic_31__38_InstructionList & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RoutineDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_RoutineDefinitionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_RoutineDefinitionList (const class GGS_pic_31__38_RoutineDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_RoutineDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_RoutineDefinitionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_RoutineDefinitionList (const class GGS_pic_31__38_RoutineDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_RoutineDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18RoutineDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RoutineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RoutineDefinitionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mRequiredBank,
                                                 const class GGS_luint & in_mReturnedBank,
                                                 const class GGS_bool & in_mPreservesBank,
                                                 const class GGS_bool & in_mIsNoReturn,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RoutineDefinitionList init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RoutineDefinitionList extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RoutineDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RoutineDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_luint & inOperand1,
                                                                                      const class GGS_luint & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      const class GGS_bool & inOperand4,
                                                                                      const class GGS_pic_31__38_InstructionList & inOperand5,
                                                                                      const class GGS_location & inOperand6
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_luint & inOperand1,
                                                    const class GGS_luint & inOperand2,
                                                    const class GGS_bool & inOperand3,
                                                    const class GGS_bool & inOperand4,
                                                    const class GGS_pic_31__38_InstructionList & inOperand5,
                                                    const class GGS_location & inOperand6
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_RoutineDefinitionList add_operation (const GGS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_luint constinArgument2,
                                               class GGS_bool constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_pic_31__38_InstructionList constinArgument5,
                                               class GGS_location constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_luint constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_pic_31__38_InstructionList constinArgument5,
                                                      class GGS_location constinArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_luint & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_pic_31__38_InstructionList & outArgument5,
                                                 class GGS_location & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_luint & outArgument2,
                                                class GGS_bool & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_pic_31__38_InstructionList & outArgument5,
                                                class GGS_location & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_luint & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_pic_31__38_InstructionList & outArgument5,
                                                      class GGS_location & outArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
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
                                              class GGS_bool & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_pic_31__38_InstructionList & outArgument5,
                                              class GGS_location & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_luint & outArgument2,
                                             class GGS_bool & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_pic_31__38_InstructionList & outArgument5,
                                             class GGS_location & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
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

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_RoutineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_RoutineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_RoutineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_RoutineDefinitionList ;
  friend class DownEnumerator_pic_31__38_RoutineDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RoutineDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RoutineDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: inline GGS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
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

  public: GGS_location mProperty_mEndOfRoutineLocation ;
  public: inline GGS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_RoutineDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
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

  public: inline void setter_setMEndOfRoutineLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_RoutineDefinitionList_2E_element (const GGS_lstring & in_mRoutineName,
                                                           const GGS_luint & in_mRequiredBank,
                                                           const GGS_luint & in_mReturnedBank,
                                                           const GGS_bool & in_mPreservesBank,
                                                           const GGS_bool & in_mIsNoReturn,
                                                           const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                           const GGS_location & in_mEndOfRoutineLocation) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_RoutineDefinitionList_2E_element (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_RoutineDefinitionList_2E_element & operator = (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RoutineDefinitionList_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_luint & inOperand1,
                                                                                                   const class GGS_luint & inOperand2,
                                                                                                   const class GGS_bool & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS_pic_31__38_InstructionList & inOperand5,
                                                                                                   const class GGS_location & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RoutineDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RoutineDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       const class GGS_luint & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       const class GGS_pic_31__38_InstructionList & inOperand5,
                                                                                       const class GGS_location & inOperand6,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_MacroDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_MacroDefinitionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_MacroDefinitionList (const class GGS_pic_31__38_MacroDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_MacroDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_MacroDefinitionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_MacroDefinitionList (const class GGS_pic_31__38_MacroDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_MacroDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18MacroDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_MacroDefinitionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mMacroName,
                                                 const class GGS_lstringlist & in_mConstantNameList,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_MacroDefinitionList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_MacroDefinitionList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_MacroDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_MacroDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
                                                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_MacroDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstringlist & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_MacroDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_MacroDefinitionList add_operation (const GGS_pic_31__38_MacroDefinitionList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListAtIndex (class GGS_lstringlist constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mConstantNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMacroNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_MacroDefinitionList ;
  friend class DownEnumerator_pic_31__38_MacroDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_MacroDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMacroName ;
  public: inline GGS_lstring readProperty_mMacroName (void) const {
    return mProperty_mMacroName ;
  }

  public: GGS_lstringlist mProperty_mConstantNameList ;
  public: inline GGS_lstringlist readProperty_mConstantNameList (void) const {
    return mProperty_mConstantNameList ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_MacroDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMacroName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroName = inValue ;
  }

  public: inline void setter_setMConstantNameList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantNameList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_MacroDefinitionList_2E_element (const GGS_lstring & in_mMacroName,
                                                         const GGS_lstringlist & in_mConstantNameList,
                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_MacroDefinitionList_2E_element (const GGS_pic_31__38_MacroDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_MacroDefinitionList_2E_element & operator = (const GGS_pic_31__38_MacroDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_MacroDefinitionList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstringlist & inOperand1,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_MacroDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_MacroDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstringlist & inOperand1,
                                                                                     const class GGS_pic_31__38_InstructionList & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_MacroMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_MacroMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_MacroMap (const class GGS_pic_31__38_MacroMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_MacroMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_MacroMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_MacroMap (const class GGS_pic_31__38_MacroMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_MacroMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18MacroMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38_MacroMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38_MacroMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_MacroMap (void) ;

//--------------------------------- Handle copy
  public: GGS_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inSource) ;
  public: GGS_pic_31__38_MacroMap & operator = (const GGS_pic_31__38_MacroMap & inSource) ;
  
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
  public: static class GGS_pic_31__38_MacroMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_MacroMap class_func_mapWithMapToOverride (const class GGS_pic_31__38_MacroMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstringlist constinArgument1,
                                                  class GGS_pic_31__38_InstructionList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListForKey (class GGS_lstringlist constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstringlist & outArgument1,
                                                  class GGS_pic_31__38_InstructionList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mConstantNameListForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38_MacroMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GGS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_MacroMap ;
  friend class DownEnumerator_pic_31__38_MacroMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@pic18MacroMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38_MacroMap : public cMapElement {
//--- Map attributes
  public: GGS_lstringlist mProperty_mConstantNameList ;
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--- Constructors
  public: cMapElement_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap_2E_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_pic_31__38_MacroMap (const GGS_lstring & inKey,
                                           const GGS_lstringlist & in_mConstantNameList,
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
// Phase 1: @pic_31__38_MacroMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstringlist mProperty_mConstantNameList ;
  public: inline GGS_lstringlist readProperty_mConstantNameList (void) const {
    return mProperty_mConstantNameList ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_MacroMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantNameList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantNameList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_MacroMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_lstringlist & in_mConstantNameList,
                                              const GGS_pic_31__38_InstructionList & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_MacroMap_2E_element (const GGS_pic_31__38_MacroMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_MacroMap_2E_element & operator = (const GGS_pic_31__38_MacroMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_MacroMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstringlist & inOperand1,
                                                                      const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_MacroMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_MacroMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstringlist & inOperand1,
                                                                          const class GGS_pic_31__38_InstructionList & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: pic18MacroMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_pic_31__38_MacroMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_MacroMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_pic_31__38_MacroMap_2E_element_3F_ (const GGS_pic_31__38_MacroMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_pic_31__38_MacroMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_pic_31__38_MacroMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_pic_31__38_MacroMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineDeclarationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_routineDeclarationList (const class GGS_routineDeclarationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineDeclarationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_routineDeclarationList (const class GGS_routineDeclarationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_routineDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_routineDeclarationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_routineDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mRequiredBank,
                                                 const class GGS_luint & in_mReturnedBank,
                                                 const class GGS_bool & in_mPreservesBank,
                                                 const class GGS_bool & in_mIsNoReturn
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineDeclarationList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineDeclarationList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_routineDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            const class GGS_luint & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            const class GGS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_routineDeclarationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_luint & inOperand1,
                                                    const class GGS_luint & inOperand2,
                                                    const class GGS_bool & inOperand3,
                                                    const class GGS_bool & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_routineDeclarationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineDeclarationList add_operation (const GGS_routineDeclarationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_luint constinArgument2,
                                               class GGS_bool constinArgument3,
                                               class GGS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_luint constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_luint & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_luint & outArgument2,
                                                class GGS_bool & outArgument3,
                                                class GGS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_luint & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
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
                                              class GGS_bool & outArgument3,
                                              class GGS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_luint & outArgument2,
                                             class GGS_bool & outArgument3,
                                             class GGS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
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

  public: VIRTUAL_IN_DEBUG class GGS_routineDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineDeclarationList ;
  friend class DownEnumerator_routineDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: inline GGS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
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

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineDeclarationList_2E_element (const GGS_lstring & in_mRoutineName,
                                                 const GGS_luint & in_mRequiredBank,
                                                 const GGS_luint & in_mReturnedBank,
                                                 const GGS_bool & in_mPreservesBank,
                                                 const GGS_bool & in_mIsNoReturn) ;

//--------------------------------- Copy constructor
  public: GGS_routineDeclarationList_2E_element (const GGS_routineDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineDeclarationList_2E_element & operator = (const GGS_routineDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineDeclarationList_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_luint & inOperand1,
                                                                                 const class GGS_luint & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineDeclarationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             const class GGS_luint & inOperand2,
                                                                             const class GGS_bool & inOperand3,
                                                                             const class GGS_bool & inOperand4,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum programKind
//--------------------------------------------------------------------------------------------------

class GGS_programKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_programKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regularProgram,
    enum_bootloaderProgram,
    enum_userProgram
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
  public: static GGS_programKind extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programKind class_func_bootloaderProgram (LOCATION_ARGS) ;

  public: static class GGS_programKind class_func_regularProgram (LOCATION_ARGS) ;

  public: static class GGS_programKind class_func_userProgram (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_programKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBootloaderProgram (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegularProgram (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUserProgram (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dataList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_dataList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_dataList (const class GGS_dataList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mDataName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsByteList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_dataList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_dataList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_dataList (const class GGS_dataList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mDataName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsByteList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_dataList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dataList list
//--------------------------------------------------------------------------------------------------

class GGS_dataList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_dataList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_dataList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mDataName,
                                                 const class GGS_immediatExpressionList & in_mValueList,
                                                 const class GGS_bool & in_mIsByteList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dataList init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dataList extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dataList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_dataList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                              const class GGS_immediatExpressionList & inOperand1,
                                                              const class GGS_bool & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_dataList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_immediatExpressionList & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_dataList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_dataList add_operation (const GGS_dataList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_immediatExpressionList constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_immediatExpressionList constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_immediatExpressionList & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_immediatExpressionList & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_immediatExpressionList & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsByteListAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GGS_immediatExpressionList constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_immediatExpressionList & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_immediatExpressionList & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDataNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsByteListAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_mValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dataList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dataList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dataList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_dataList ;
  friend class DownEnumerator_dataList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dataList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_dataList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDataName ;
  public: inline GGS_lstring readProperty_mDataName (void) const {
    return mProperty_mDataName ;
  }

  public: GGS_immediatExpressionList mProperty_mValueList ;
  public: inline GGS_immediatExpressionList readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

  public: GGS_bool mProperty_mIsByteList ;
  public: inline GGS_bool readProperty_mIsByteList (void) const {
    return mProperty_mIsByteList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_dataList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDataName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataName = inValue ;
  }

  public: inline void setter_setMValueList (const GGS_immediatExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

  public: inline void setter_setMIsByteList (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsByteList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_dataList_2E_element (const GGS_lstring & in_mDataName,
                                   const GGS_immediatExpressionList & in_mValueList,
                                   const GGS_bool & in_mIsByteList) ;

//--------------------------------- Copy constructor
  public: GGS_dataList_2E_element (const GGS_dataList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_dataList_2E_element & operator = (const GGS_dataList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dataList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_immediatExpressionList & inOperand1,
                                                           const class GGS_bool & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dataList_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dataList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_immediatExpressionList & inOperand1,
                                                               const class GGS_bool & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkpicList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_checkpicList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_checkpicList (const class GGS_checkpicList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkpicList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_checkpicList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_checkpicList (const class GGS_checkpicList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkpicList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkpicList list
//--------------------------------------------------------------------------------------------------

class GGS_checkpicList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_checkpicList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_checkpicList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mErrorLocation,
                                                 const class GGS_lstringlist & in_mValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkpicList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkpicList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkpicList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_checkpicList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                  const class GGS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_checkpicList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_lstringlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_checkpicList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_checkpicList add_operation (const GGS_checkpicList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GGS_lstringlist constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_checkpicList ;
  friend class DownEnumerator_checkpicList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkpicList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_checkpicList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mErrorLocation ;
  public: inline GGS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

  public: GGS_lstringlist mProperty_mValueList ;
  public: inline GGS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_checkpicList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

  public: inline void setter_setMValueList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_checkpicList_2E_element (const GGS_location & in_mErrorLocation,
                                       const GGS_lstringlist & in_mValueList) ;

//--------------------------------- Copy constructor
  public: GGS_checkpicList_2E_element (const GGS_checkpicList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_checkpicList_2E_element & operator = (const GGS_checkpicList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkpicList_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_lstringlist & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkpicList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkpicList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_lstringlist & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList_2E_element ;

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
//Extension getter '@conditional_branch condition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_condition (const class GGS_conditional_5F_branch & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind assemblyCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_assemblyCode (const class GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
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
//
//Extension getter '@bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_conditional_5F_branch & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@tableAccessOption mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_tableAccessOption & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_ (class GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GGS_lstringlist & ioArgument3,
                                    class GGS_lstringlist & ioArgument4,
                                    class GGS_ramDefinitionList & ioArgument5,
                                    class GGS_lstringlist & ioArgument6,
                                    class GGS_configDefinitionList & ioArgument7,
                                    class GGS_constantDefinitionList & ioArgument8,
                                    class GGS_checkpicList & ioArgument9,
                                    class GGS_dataList & ioArgument10,
                                    class GGS_bool & ioArgument11,
                                    class GGS_bool & ioArgument12,
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_ (class GGS_checkpicList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_ (class GGS_dataList & ioArgument0,
                                                  class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GGS_pic_31__38_InstructionList & outArgument0,
                                                   class GGS_bool & ioArgument1,
                                                   class GGS_bool & ioArgument2,
                                                   class GGS_labelMap & ioArgument3,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       class GGS_bool & ioArgument1,
                                                       class GGS_bool & ioArgument2,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                     class GGS_bool & ioArgument1,
                                                     class GGS_bool & ioArgument2,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_ (class GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                               class GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_bool & ioArgument3,
                                                               class GGS_labelMap & ioArgument4,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_ (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GGS_bool & ioArgument1,
                                                         class GGS_bool & ioArgument2,
                                                         class GGS_labelMap & ioArgument3,
                                                         class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_syntax_body_i0_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
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
                                                       Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GGS_checkpicList & ioArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                                      GGS_bool & ioArgument1,
                                                                      GGS_bool & ioArgument2,
                                                                      GGS_labelMap & ioArgument3,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                          GGS_bool & ioArgument1,
                                                                          GGS_bool & ioArgument2,
                                                                          Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                        GGS_bool & ioArgument1,
                                                                        GGS_bool & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                             GGS_bool & ioArgument1,
                                                                             GGS_bool & ioArgument2,
                                                                             GGS_labelMap & ioArgument3,
                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GGS_lstring constinArgument0,
                                                                                   GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   GGS_bool & ioArgument3,
                                                                                   GGS_labelMap & ioArgument4,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_switch reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_switch (const class cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_SwitchInstructionCaseList readProperty_mCaseList (void) const ;
  public: void setProperty_mCaseList (const GGS_pic_31__38_SwitchInstructionCaseList & inValue) ;

  public: class GGS_location readProperty_mElseBranchStartLocation (void) const ;
  public: void setProperty_mElseBranchStartLocation (const GGS_location & inValue) ;

  public: class GGS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GGS_pic_31__38_InstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_switch init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_switch extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_switch class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SwitchInstructionCaseList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_SwitchInstructionCaseList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_SwitchInstructionCaseList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18SwitchInstructionCaseList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mStartOfCase,
                                                 const class GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SwitchInstructionCaseList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SwitchInstructionCaseList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_SwitchInstructionCaseList add_operation (const GGS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionListAtIndex (class GGS_pic_31__38_CaseExpressionList constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartOfCaseAtIndex (class GGS_location constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_mCaseExpressionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mStartOfCaseAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_SwitchInstructionCaseList ;
  friend class DownEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_pic_31__38_InstructionList & inOperand3,
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
  public: GGS_pic_31__38_SwitchInstructionCaseList mProperty_mCaseList ;
  public: GGS_location mProperty_mElseBranchStartLocation ;
  public: GGS_pic_31__38_InstructionList mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (const GGS_location & in_mInstructionLocation,
                                                 const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                 const GGS_location & in_mElseBranchStartLocation,
                                                 const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
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
// Phase 1: @pic_31__38_IntervalCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IntervalCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IntervalCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_IntervalCaseItem (const class cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mMinExpression (void) const ;
  public: void setProperty_mMinExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mMaxExpression (void) const ;
  public: void setProperty_mMaxExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;
  public: void setProperty_mCaseExpressionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_IntervalCaseItem init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                   const class GGS_immediatExpression & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IntervalCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IntervalCaseItem class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                       const class GGS_immediatExpression & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IntervalCaseItem_init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             const class GGS_location & inOperand2,
                                                             Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mMinExpression ;
  public: GGS_immediatExpression mProperty_mMaxExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IntervalCaseItem (const GGS_immediatExpression & in_mMinExpression,
                                            const GGS_immediatExpression & in_mMaxExpression,
                                            const GGS_location & in_mCaseExpressionLocation,
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
// Phase 1: @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_SimpleConstantCaseItem (const class cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mCaseExpression (void) const ;
  public: void setProperty_mCaseExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;
  public: void setProperty_mCaseExpressionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SimpleConstantCaseItem init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SimpleConstantCaseItem extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SimpleConstantCaseItem class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_SimpleConstantCaseItem_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                               const class GGS_location & inOperand1,
                                                               Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mCaseExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (const GGS_immediatExpression & in_mCaseExpression,
                                                  const GGS_location & in_mCaseExpressionLocation,
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
//
//Parser class 'communs' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_communs {
//--- Virtual destructor
  public: virtual ~ cParser_communs (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                              class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_ (class GGS_immediatExpression & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_communs_configuration_5F_definition_i0_ (GGS_configDefinitionList & ioArgument0,
                                                                Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_ (GGS_declarationInRam & outArgument0,
                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_ (GGS_ramDefinitionList & ioArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_ (GGS_constantDefinitionList & ioArgument0,
                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_ (GGS_immediatExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_ (GGS_immediatExpression & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GGS_immediatExpression & outArgument0,
                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_ (GGS_immediatExpression & outArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_ (GGS_immediatExpression & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_ (GGS_registerExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GGS_bool & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_include_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_include_5F_grammar : public cParser_pic_31__38__5F_syntax,
                                                   public cParser_communs {
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

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
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
                                                  GGS_bool & ioArgument12
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
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
                                                    GGS_bool & ioArgument12
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

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GGS_bool & outArgument0,
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

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

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
//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_CaseExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_CaseExpressionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_CaseExpressionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18CaseExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_CaseExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_CaseExpressionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_CaseExpressionList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_CaseExpressionList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_CaseExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_CaseExpressionList class_func_listWithValue (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_CaseExpressionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_CaseExpressionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_CaseExpressionList add_operation (const GGS_pic_31__38_CaseExpressionList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseItemAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_AbstractCaseItem getter_mCaseItemAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_CaseExpressionList ;
  friend class DownEnumerator_pic_31__38_CaseExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

