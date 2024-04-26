#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_fnop_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_fnop & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_fnop & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_fnop bang_pic_31__38_Instruction_5F_fnop_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LFSR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LFSR : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LFSR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_LFSR (const class cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mFSRindex (void) const ;
  public: void setProperty_mFSRindex (const GALGAS_luint & inValue) ;

  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GALGAS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_LFSR init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_luint & inOperand1,
                                                                         const class GALGAS_immediatExpression & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LFSR class_func_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_luint & inOperand1,
                                                                             const class GALGAS_immediatExpression & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LFSR class


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
  public: void pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_luint & inOperand1,
                                                                const class GALGAS_immediatExpression & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mFSRindex ;
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_luint & in_mFSRindex,
                                               const GALGAS_immediatExpression & in_mImmediatExpression
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
// Phase 1: @pic_31__38_Instruction_5F_LFSR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_LFSR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_LFSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_LFSR bang_pic_31__38_Instruction_5F_LFSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LTBLPTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LTBLPTR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_LTBLPTR (const class cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GALGAS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_LTBLPTR init_21__21_ (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_immediatExpression & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LTBLPTR extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LTBLPTR class_func_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_immediatExpression & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LTBLPTR class


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
  public: void pic_31__38_Instruction_5F_LTBLPTR_init_21__21_ (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_immediatExpression & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LTBLPTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_immediatExpression & in_mImmediatExpression
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
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_LTBLPTR bang_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mDataName (void) const ;
  public: void setProperty_mDataName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_luint readProperty_mDataIndex (void) const ;
  public: void setProperty_mDataIndex (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_luint & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR class_func_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_luint & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR class


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
  public: void pic_31__38_Instruction_5F_LDATA_38_PTR_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_luint & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: GALGAS_luint mProperty_mDataIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mDataName,
                                                       const GALGAS_luint & in_mDataIndex
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR bang_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mDataName (void) const ;
  public: void setProperty_mDataName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_luint readProperty_mDataIndex (void) const ;
  public: void setProperty_mDataIndex (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_luint & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR class_func_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_luint & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR class


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
  public: void pic_31__38_Instruction_5F_LDATA_31__36_PTR_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_luint & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: GALGAS_luint mProperty_mDataIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_lstring & in_mDataName,
                                                           const GALGAS_luint & in_mDataIndex
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR bang_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum tableAccessOption
//--------------------------------------------------------------------------------------------------

class GALGAS_tableAccessOption : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_tableAccessOption (void) ;

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
  public: static GALGAS_tableAccessOption extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_tableAccessOption class_func_postDecrement (LOCATION_ARGS) ;

  public: static class GALGAS_tableAccessOption class_func_postIncrement (LOCATION_ARGS) ;

  public: static class GALGAS_tableAccessOption class_func_preIncrement (LOCATION_ARGS) ;

  public: static class GALGAS_tableAccessOption class_func_simpleAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPostDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPostIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPreIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSimpleAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_tableAccessOption class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableAccessOption ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_TBLRD reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_TBLRD : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_TBLRD (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_TBLRD (const class cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;
  public: void setProperty_mOption (const GALGAS_tableAccessOption & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_TBLRD init_21__21_ (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_tableAccessOption & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLRD class_func_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_tableAccessOption & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_TBLRD class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_TBLRD class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_TBLRD : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_TBLRD_init_21__21_ (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_tableAccessOption & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_tableAccessOption & in_mOption
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
// Phase 1: @pic_31__38_Instruction_5F_TBLRD_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_TBLRD & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_TBLRD & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_TBLRD bang_pic_31__38_Instruction_5F_TBLRD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_TBLWT reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_TBLWT : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_TBLWT (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_TBLWT (const class cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;
  public: void setProperty_mOption (const GALGAS_tableAccessOption & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_TBLWT init_21__21_ (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_tableAccessOption & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLWT class_func_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_tableAccessOption & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_TBLWT class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_TBLWT class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_TBLWT : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_TBLWT_init_21__21_ (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_tableAccessOption & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_tableAccessOption & in_mOption
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
// Phase 1: @pic_31__38_Instruction_5F_TBLWT_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_TBLWT & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_TBLWT & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_TBLWT bang_pic_31__38_Instruction_5F_TBLWT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_MNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_MNOP : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_MNOP (const class cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_MNOP init_21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_luint & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_MNOP class_func_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_luint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_MNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_MNOP : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_MNOP_init_21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_luint & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_luint & in_mOccurrenceFactor
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
// Phase 1: @pic_31__38_Instruction_5F_MNOP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_MNOP & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_MNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_MNOP bang_pic_31__38_Instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_NOPBRA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_NOPBRA : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_NOPBRA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_NOPBRA (const class cPtr_pic_31__38_Instruction_5F_NOPBRA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_NOPBRA init_21__21_ (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_luint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_NOPBRA extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_NOPBRA class_func_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_luint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_NOPBRA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_NOPBRA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_NOPBRA : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_luint & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_luint & in_mOccurrenceFactor
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
// Phase 1: @pic_31__38_Instruction_5F_NOPBRA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_NOPBRA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_NOPBRA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_NOPBRA bang_pic_31__38_Instruction_5F_NOPBRA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FOREVER reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FOREVER : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FOREVER (const class cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) ;

  public: class GALGAS_location readProperty_mEndOfInstructionList (void) const ;
  public: void setProperty_mEndOfInstructionList (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_FOREVER init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                            const class GALGAS_location & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_FOREVER class_func_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FOREVER class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FOREVER class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FOREVER : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FOREVER_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                   const class GALGAS_location & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset arg_inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GALGAS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const GALGAS_location & in_mEndOfInstructionList
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
// Phase 1: @pic_31__38_Instruction_5F_FOREVER_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FOREVER & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FOREVER & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FOREVER bang_pic_31__38_Instruction_5F_FOREVER_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum if_5F_semi_5F_colon_5F_op
//--------------------------------------------------------------------------------------------------

class GALGAS_if_5F_semi_5F_colon_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_if_5F_semi_5F_colon_5F_op (void) ;

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
  public: static GALGAS_if_5F_semi_5F_colon_5F_op extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_if_5F_semi_5F_colon_5F_op class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GALGAS_if_5F_semi_5F_colon_5F_op class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GALGAS_if_5F_semi_5F_colon_5F_op class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GALGAS_if_5F_semi_5F_colon_5F_op class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_if_5F_semi_5F_colon_5F_op class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_PiccoloSimpleInstruction readProperty_mEmbeddedInstruction (void) const ;
  public: void setProperty_mEmbeddedInstruction (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_SEMI_COLON class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                           Compiler * inCompiler) ;


//--- Properties
  public: GALGAS_pic_31__38_PiccoloSimpleInstruction mProperty_mEmbeddedInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON bang_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_if_5F_semi_5F_colon_5F_op readProperty_mOpCode (void) const ;
  public: void setProperty_mOpCode (const GALGAS_if_5F_semi_5F_colon_5F_op & inValue) ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                                  const class GALGAS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                                  const class GALGAS_registerExpression & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class_func_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                                  const class GALGAS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                                  const class GALGAS_registerExpression & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                         const class GALGAS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                         const class GALGAS_registerExpression & inOperand3,
                                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_if_5F_semi_5F_colon_5F_op mProperty_mOpCode ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                    const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                    const GALGAS_registerExpression & in_mRegisterExpression
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON bang_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GALGAS_bool & inValue) ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          const class GALGAS_registerExpression & inOperand3,
                                                                                          const class GALGAS_bitNumberExpression & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest class_func_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_registerExpression & inOperand3,
                                                                                      const class GALGAS_bitNumberExpression & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_BitTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_registerExpression & inOperand3,
                                                                                 const class GALGAS_bitNumberExpression & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                        const GALGAS_bool & in_mSkipIfSet,
                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bitNumberExpression & in_mBitNumber
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest bang_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GALGAS_bool & inValue) ;

  public: class GALGAS_bool readProperty_mSkipIfZero (void) const ;
  public: void setProperty_mSkipIfZero (const GALGAS_bool & inValue) ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec init_21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             const class GALGAS_bool & inOperand3,
                                                                                             const class GALGAS_registerExpression & inOperand4,
                                                                                             const class GALGAS_bool & inOperand5,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec class_func_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3,
                                                                                     const class GALGAS_registerExpression & inOperand4,
                                                                                     const class GALGAS_bool & inOperand5
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_IncDec class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_IncDec_init_21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3,
                                                                                    const class GALGAS_registerExpression & inOperand4,
                                                                                    const class GALGAS_bool & inOperand5,
                                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_mSkipIfZero ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                       const GALGAS_bool & in_mIncrement,
                                                       const GALGAS_bool & in_mSkipIfZero,
                                                       const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec bang_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_retlw reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (const class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_immediatExpressionList readProperty_mImmediateExpressionList (void) const ;
  public: void setProperty_mImmediateExpressionList (const GALGAS_immediatExpressionList & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_immediatExpression & inOperand1,
                                                                                          const class GALGAS_immediatExpressionList & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw class_func_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_immediatExpression & inOperand1,
                                                                                          const class GALGAS_immediatExpressionList & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_computed_retlw class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_retlw_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_immediatExpression & inOperand1,
                                                                                 const class GALGAS_immediatExpressionList & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mSizeExpression ;
  public: GALGAS_immediatExpressionList mProperty_mImmediateExpressionList ;
  public: GALGAS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_immediatExpression & in_mSizeExpression,
                                                            const GALGAS_immediatExpressionList & in_mImmediateExpressionList,
                                                            const GALGAS_bool & in_mUsesRelativeCall
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw bang_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_bra reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (const class cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GALGAS_lstringlist & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_bra init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_immediatExpression & inOperand1,
                                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                                        const class GALGAS_bool & inOperand3,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_bra extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra class_func_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_immediatExpression & inOperand1,
                                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                                        const class GALGAS_bool & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_bra class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_computed_bra class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_bra : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_bra_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_immediatExpression & inOperand1,
                                                                               const class GALGAS_lstringlist & inOperand2,
                                                                               const class GALGAS_bool & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mSizeExpression ;
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_bra (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_immediatExpression & in_mSizeExpression,
                                                          const GALGAS_lstringlist & in_mTargetLabels,
                                                          const GALGAS_bool & in_mUsesRelativeCall
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_bra_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_bra bang_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_goto reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (const class cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GALGAS_lstringlist & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_goto init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_immediatExpression & inOperand1,
                                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                                         const class GALGAS_bool & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_goto extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto class_func_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_immediatExpression & inOperand1,
                                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                                         const class GALGAS_bool & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_goto class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_computed_goto class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_goto : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_goto_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_immediatExpression & inOperand1,
                                                                                const class GALGAS_lstringlist & inOperand2,
                                                                                const class GALGAS_bool & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mSizeExpression ;
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_goto (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_immediatExpression & in_mSizeExpression,
                                                           const GALGAS_lstringlist & in_mTargetLabels,
                                                           const GALGAS_bool & in_mUsesRelativeCall
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_goto_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_goto bang_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_rcall reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (const class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GALGAS_lstringlist & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRelativeCall (void) const ;
  public: void setProperty_mUsesRelativeCall (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_immediatExpression & inOperand1,
                                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall class_func_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_immediatExpression & inOperand1,
                                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_computed_rcall class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_rcall_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_immediatExpression & inOperand1,
                                                                                 const class GALGAS_lstringlist & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mSizeExpression ;
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_immediatExpression & in_mSizeExpression,
                                                            const GALGAS_lstringlist & in_mTargetLabels,
                                                            const GALGAS_bool & in_mUsesRelativeCall
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall bang_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_ConditionExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_ConditionExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_ConditionExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_ConditionExpression_2D_weak (const class GALGAS_pic_31__38_ConditionExpression & inSource) ;

  public: GALGAS_pic_31__38_ConditionExpression_2D_weak & operator = (const class GALGAS_pic_31__38_ConditionExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_ConditionExpression bang_pic_31__38_ConditionExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_ConditionExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_ConditionExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_ConditionExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_ConditionExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterTestCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterTestCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterTestCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_RegisterTestCondition (const class cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_RegisterTestCondition init_21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterTestCondition extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterTestCondition class_func_new (const class GALGAS_registerExpression & inOperand0,
                                                                               const class GALGAS_bool & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterTestCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterTestCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18RegisterTestCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterTestCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterTestCondition_init_21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                              const class GALGAS_bool & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterTestCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                 const GALGAS_bool & in_mBranchIfZero
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
// Phase 1: @pic_31__38_RegisterTestCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterTestCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterTestCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_RegisterTestCondition_2D_weak (const class GALGAS_pic_31__38_RegisterTestCondition & inSource) ;

  public: GALGAS_pic_31__38_RegisterTestCondition_2D_weak & operator = (const class GALGAS_pic_31__38_RegisterTestCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_RegisterTestCondition bang_pic_31__38_RegisterTestCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterTestCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterTestCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterTestCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterTestCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparison (void) ;

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
  public: static GALGAS_pic_31__38_RegisterComparison extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterComparison class_func_equal (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RegisterComparison class_func_greater (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RegisterComparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RegisterComparison class_func_lower (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RegisterComparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RegisterComparison class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparison class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_RegisterComparisonCondition (const class cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

  public: class GALGAS_pic_31__38_RegisterComparison readProperty_mComparison (void) const ;
  public: void setProperty_mComparison (const GALGAS_pic_31__38_RegisterComparison & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_RegisterComparisonCondition init_21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                             const class GALGAS_pic_31__38_RegisterComparison & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonCondition extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterComparisonCondition class_func_new (const class GALGAS_registerExpression & inOperand0,
                                                                                     const class GALGAS_pic_31__38_RegisterComparison & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18RegisterComparisonCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterComparisonCondition_init_21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                    const class GALGAS_pic_31__38_RegisterComparison & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_pic_31__38_RegisterComparison mProperty_mComparison ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_pic_31__38_RegisterComparison & in_mComparison
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
// Phase 1: @pic_31__38_RegisterComparisonCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (const class GALGAS_pic_31__38_RegisterComparisonCondition & inSource) ;

  public: GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak & operator = (const class GALGAS_pic_31__38_RegisterComparisonCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_RegisterComparisonCondition bang_pic_31__38_RegisterComparisonCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_IncDecRegisterInCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IncDecRegisterInCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IncDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_IncDecRegisterInCondition (const class cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GALGAS_bool & inValue) ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_IncDecRegisterInCondition init_21__21__21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_bool & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IncDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_IncDecRegisterInCondition class_func_new (const class GALGAS_registerExpression & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_bool & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_IncDecRegisterInCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18IncDecRegisterInCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IncDecRegisterInCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IncDecRegisterInCondition_init_21__21__21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_bool & inOperand3,
                                                                          Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                     const GALGAS_bool & in_mIncrement,
                                                     const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                     const GALGAS_bool & in_mBranchIfZero
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
// Phase 1: @pic_31__38_IncDecRegisterInCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (const class GALGAS_pic_31__38_IncDecRegisterInCondition & inSource) ;

  public: GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak & operator = (const class GALGAS_pic_31__38_IncDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_IncDecRegisterInCondition bang_pic_31__38_IncDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BccInStructuredCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BccInStructuredCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BccInStructuredCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_BccInStructuredCondition (const class cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mConditionLocation (void) const ;
  public: void setProperty_mConditionLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_conditional_5F_branch readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GALGAS_conditional_5F_branch & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_BccInStructuredCondition init_21__21_ (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_conditional_5F_branch & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BccInStructuredCondition extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_BccInStructuredCondition class_func_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_conditional_5F_branch & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_BccInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BccInStructuredCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18BccInStructuredCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BccInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BccInStructuredCondition_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_conditional_5F_branch & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mConditionLocation ;
  public: GALGAS_conditional_5F_branch mProperty_mCondition ;


//--- Default constructor
  public: cPtr_pic_31__38_BccInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BccInStructuredCondition (const GALGAS_location & in_mConditionLocation,
                                                    const GALGAS_conditional_5F_branch & in_mCondition
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
// Phase 1: @pic_31__38_BccInStructuredCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BccInStructuredCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BccInStructuredCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_BccInStructuredCondition_2D_weak (const class GALGAS_pic_31__38_BccInStructuredCondition & inSource) ;

  public: GALGAS_pic_31__38_BccInStructuredCondition_2D_weak & operator = (const class GALGAS_pic_31__38_BccInStructuredCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_BccInStructuredCondition bang_pic_31__38_BccInStructuredCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BccInStructuredCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_BccInStructuredCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_BccInStructuredCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BccInStructuredCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_NegateCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_NegateCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_NegateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_NegateCondition (const class cPtr_pic_31__38_NegateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GALGAS_pic_31__38_ConditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_NegateCondition init_21_ (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_NegateCondition extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_NegateCondition class_func_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_NegateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_NegateCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18NegateCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_NegateCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_NegateCondition_init_21_ (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mCondition ;


//--- Default constructor
  public: cPtr_pic_31__38_NegateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_NegateCondition (const GALGAS_pic_31__38_ConditionExpression & in_mCondition
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
// Phase 1: @pic_31__38_NegateCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_NegateCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_NegateCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_NegateCondition_2D_weak (const class GALGAS_pic_31__38_NegateCondition & inSource) ;

  public: GALGAS_pic_31__38_NegateCondition_2D_weak & operator = (const class GALGAS_pic_31__38_NegateCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_NegateCondition bang_pic_31__38_NegateCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_NegateCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_NegateCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_NegateCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_NegateCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AndCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AndCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AndCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_AndCondition (const class cPtr_pic_31__38_AndCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GALGAS_pic_31__38_ConditionExpression & inValue) ;

  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GALGAS_pic_31__38_ConditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_AndCondition init_21__21_ (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                              const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AndCondition extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_AndCondition class_func_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                      const class GALGAS_pic_31__38_ConditionExpression & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_AndCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_AndCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18AndCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AndCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_AndCondition_init_21__21_ (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                     const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mLeftExpression ;
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_AndCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_AndCondition (const GALGAS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                        const GALGAS_pic_31__38_ConditionExpression & in_mRightExpression
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
// Phase 1: @pic_31__38_AndCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AndCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AndCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_AndCondition_2D_weak (const class GALGAS_pic_31__38_AndCondition & inSource) ;

  public: GALGAS_pic_31__38_AndCondition_2D_weak & operator = (const class GALGAS_pic_31__38_AndCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_AndCondition bang_pic_31__38_AndCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AndCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_AndCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_AndCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_AndCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BitTestInStructuredCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BitTestInStructuredCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BitTestInStructuredCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_BitTestInStructuredCondition (const class cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_BitTestInStructuredCondition init_21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                              const class GALGAS_bitNumberExpression & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestInStructuredCondition extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_BitTestInStructuredCondition class_func_new (const class GALGAS_registerExpression & inOperand0,
                                                                                      const class GALGAS_bitNumberExpression & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BitTestInStructuredCondition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18BitTestInStructuredCondition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BitTestInStructuredCondition_init_21__21_ (const class GALGAS_registerExpression & inOperand0,
                                                                     const class GALGAS_bitNumberExpression & inOperand1,
                                                                     Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint arg_inAccessBankSplitOffset,
           const class GALGAS_uint arg_inCurrentBank,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_lstring arg_inConditionFalseLabel,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bitNumberExpression & in_mBitNumber
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
// Phase 1: @pic_31__38_BitTestInStructuredCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (const class GALGAS_pic_31__38_BitTestInStructuredCondition & inSource) ;

  public: GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak & operator = (const class GALGAS_pic_31__38_BitTestInStructuredCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_BitTestInStructuredCondition bang_pic_31__38_BitTestInStructuredCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_structured_5F_if : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const class cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mIfCondition (void) const ;
  public: void setProperty_mIfCondition (const GALGAS_pic_31__38_ConditionExpression & inValue) ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mThenInstructionList (void) const ;
  public: void setProperty_mThenInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) ;

  public: class GALGAS_location readProperty_mEndOfElsePartLocation (void) const ;
  public: void setProperty_mEndOfElsePartLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_structured_5F_if init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                                             const class GALGAS_location & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_structured_5F_if class_func_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                                         const class GALGAS_location & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_structured_5F_if class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_structured_if class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_structured_5F_if : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                                    const class GALGAS_location & inOperand4,
                                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset arg_inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GALGAS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mIfCondition ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mThenInstructionList ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mElseInstructionList ;
  public: GALGAS_location mProperty_mEndOfElsePartLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                           const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                           const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                           const GALGAS_location & in_mEndOfElsePartLocation
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
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if bang_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18DoWhilePartList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_DoWhilePartList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_DoWhilePartList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_DoWhilePartList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_DoWhilePartList extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_DoWhilePartList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_DoWhilePartList class_func_listWithValue (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                   const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                   const class GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_DoWhilePartList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_DoWhilePartList add_operation (const GALGAS_pic_31__38_DoWhilePartList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_ConditionExpression constinArgument0,
                                               class GALGAS_pic_31__38_InstructionList constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_pic_31__38_ConditionExpression constinArgument0,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GALGAS_pic_31__38_ConditionExpression constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GALGAS_location constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              class GALGAS_pic_31__38_InstructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                             class GALGAS_pic_31__38_InstructionList & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression getter_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_DoWhilePartList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_DoWhilePartList ;
 
} ; // End of GALGAS_pic_31__38_DoWhilePartList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_DoWhilePartList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_DoWhilePartList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_DoWhilePartList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_DoWhilePartList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: inline GALGAS_pic_31__38_ConditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfPartLocation ;
  public: inline GALGAS_location readProperty_mEndOfPartLocation (void) const {
    return mProperty_mEndOfPartLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_DoWhilePartList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GALGAS_pic_31__38_ConditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_DoWhilePartList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_DoWhilePartList_2D_element (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                        const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                        const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_DoWhilePartList_2D_element init_21__21__21_ (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_DoWhilePartList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_DoWhilePartList_2D_element class_func_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                    const class GALGAS_location & inOperand2,
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
 
} ; // End of GALGAS_pic_31__38_DoWhilePartList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_do_5F_while : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while (const class cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_InstructionList readProperty_mRepeatedInstructionList (void) const ;
  public: void setProperty_mRepeatedInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) ;

  public: class GALGAS_location readProperty_mEndOfRepeatedInstructionList (void) const ;
  public: void setProperty_mEndOfRepeatedInstructionList (const GALGAS_location & inValue) ;

  public: class GALGAS_pic_31__38_DoWhilePartList readProperty_mWhilePartList (void) const ;
  public: void setProperty_mWhilePartList (const GALGAS_pic_31__38_DoWhilePartList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                    const class GALGAS_location & inOperand2,
                                                                                    const class GALGAS_pic_31__38_DoWhilePartList & inOperand3,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_do_5F_while class_func_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                    const class GALGAS_location & inOperand2,
                                                                                    const class GALGAS_pic_31__38_DoWhilePartList & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_do_5F_while class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_do_while class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_do_5F_while : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_do_5F_while_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                           const class GALGAS_location & inOperand2,
                                                                           const class GALGAS_pic_31__38_DoWhilePartList & inOperand3,
                                                                           Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset arg_inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GALGAS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_InstructionList mProperty_mRepeatedInstructionList ;
  public: GALGAS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GALGAS_pic_31__38_DoWhilePartList mProperty_mWhilePartList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                      const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                      const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
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
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while bang_pic_31__38_Instruction_5F_do_5F_while_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18InterruptDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InterruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InterruptDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInterruptName,
                                                 const class GALGAS_bool & in_mFastReturn,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInterruptLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_InterruptDefinitionList init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InterruptDefinitionList extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_InterruptDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InterruptDefinitionList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1,
                                                                                           const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                           const class GALGAS_location & inOperand3
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_InterruptDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                     const class GALGAS_location & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InterruptDefinitionList add_operation (const GALGAS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_bool constinArgument1,
                                               class GALGAS_pic_31__38_InstructionList constinArgument2,
                                               class GALGAS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GALGAS_location constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFastReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             class GALGAS_pic_31__38_InstructionList & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFastReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInterruptNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_InterruptDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_InterruptDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_InterruptDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_InterruptDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_InterruptDefinitionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InterruptDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInterruptName ;
  public: inline GALGAS_lstring readProperty_mInterruptName (void) const {
    return mProperty_mInterruptName ;
  }

  public: GALGAS_bool mProperty_mFastReturn ;
  public: inline GALGAS_bool readProperty_mFastReturn (void) const {
    return mProperty_mFastReturn ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInterruptLocation ;
  public: inline GALGAS_location readProperty_mEndOfInterruptLocation (void) const {
    return mProperty_mEndOfInterruptLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptName = inValue ;
  }

  public: inline void setter_setMFastReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFastReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInterruptLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInterruptLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & in_mInterruptName,
                                                                const GALGAS_bool & in_mFastReturn,
                                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                const GALGAS_location & in_mEndOfInterruptLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_InterruptDefinitionList_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_bool & inOperand1,
                                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                            const class GALGAS_location & inOperand3,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InterruptDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_InterruptDefinitionList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_bool & inOperand1,
                                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                            const class GALGAS_location & inOperand3,
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
 
} ; // End of GALGAS_pic_31__38_InterruptDefinitionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18RoutineDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RoutineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RoutineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mRoutineName,
                                                 const class GALGAS_luint & in_mRequiredBank,
                                                 const class GALGAS_luint & in_mReturnedBank,
                                                 const class GALGAS_bool & in_mPreservesBank,
                                                 const class GALGAS_bool & in_mIsNoReturn,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_RoutineDefinitionList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RoutineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RoutineDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RoutineDefinitionList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_luint & inOperand1,
                                                                                         const class GALGAS_luint & inOperand2,
                                                                                         const class GALGAS_bool & inOperand3,
                                                                                         const class GALGAS_bool & inOperand4,
                                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                         const class GALGAS_location & inOperand6
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_RoutineDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                     const class GALGAS_location & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_RoutineDefinitionList add_operation (const GALGAS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_luint constinArgument1,
                                               class GALGAS_luint constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               class GALGAS_pic_31__38_InstructionList constinArgument5,
                                               class GALGAS_location constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_luint constinArgument1,
                                                      class GALGAS_luint constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument5,
                                                      class GALGAS_location constinArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_luint & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_luint & outArgument1,
                                                class GALGAS_luint & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                class GALGAS_location & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_luint & outArgument1,
                                                      class GALGAS_luint & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                      class GALGAS_location & outArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_pic_31__38_InstructionList & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_luint & outArgument1,
                                             class GALGAS_luint & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_pic_31__38_InstructionList & outArgument5,
                                             class GALGAS_location & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_RoutineDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_RoutineDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_RoutineDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_RoutineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RoutineDefinitionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RoutineDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: inline GALGAS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GALGAS_luint mProperty_mRequiredBank ;
  public: inline GALGAS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GALGAS_luint mProperty_mReturnedBank ;
  public: inline GALGAS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GALGAS_bool mProperty_mPreservesBank ;
  public: inline GALGAS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfRoutineLocation ;
  public: inline GALGAS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_RoutineDefinitionList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                              const GALGAS_luint & in_mRequiredBank,
                                                              const GALGAS_luint & in_mReturnedBank,
                                                              const GALGAS_bool & in_mPreservesBank,
                                                              const GALGAS_bool & in_mIsNoReturn,
                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                              const GALGAS_location & in_mEndOfRoutineLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_RoutineDefinitionList_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_luint & inOperand1,
                                                                                                      const class GALGAS_luint & inOperand2,
                                                                                                      const class GALGAS_bool & inOperand3,
                                                                                                      const class GALGAS_bool & inOperand4,
                                                                                                      const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                      const class GALGAS_location & inOperand6,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RoutineDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RoutineDefinitionList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_luint & inOperand1,
                                                                                          const class GALGAS_luint & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                          const class GALGAS_location & inOperand6,
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
 
} ; // End of GALGAS_pic_31__38_RoutineDefinitionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18MacroDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMacroName,
                                                 const class GALGAS_lstringlist & in_mConstantNameList,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_MacroDefinitionList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroDefinitionList extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_MacroDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_MacroDefinitionList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstringlist & inOperand1,
                                                                                       const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_MacroDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_MacroDefinitionList add_operation (const GALGAS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstringlist constinArgument1,
                                               class GALGAS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             class GALGAS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMacroNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_MacroDefinitionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_MacroDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_MacroDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_MacroDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_MacroDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_MacroDefinitionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMacroName ;
  public: inline GALGAS_lstring readProperty_mMacroName (void) const {
    return mProperty_mMacroName ;
  }

  public: GALGAS_lstringlist mProperty_mConstantNameList ;
  public: inline GALGAS_lstringlist readProperty_mConstantNameList (void) const {
    return mProperty_mConstantNameList ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMacroName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroName = inValue ;
  }

  public: inline void setter_setMConstantNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantNameList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & in_mMacroName,
                                                            const GALGAS_lstringlist & in_mConstantNameList,
                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_MacroDefinitionList_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstringlist & inOperand1,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_MacroDefinitionList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1,
                                                                                        const class GALGAS_pic_31__38_InstructionList & inOperand2,
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
 
} ; // End of GALGAS_pic_31__38_MacroDefinitionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18MacroMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38_MacroMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38_MacroMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inSource) ;
  public: GALGAS_pic_31__38_MacroMap & operator = (const GALGAS_pic_31__38_MacroMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_MacroMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_MacroMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_MacroMap class_func_mapWithMapToOverride (const class GALGAS_pic_31__38_MacroMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_MacroMap add_operation (const GALGAS_pic_31__38_MacroMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstringlist constinArgument1,
                                                  class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListForKey (class GALGAS_lstringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameListForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38_MacroMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_MacroMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_MacroMap ;
 
} ; // End of GALGAS_pic_31__38_MacroMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_MacroMap : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_MacroMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@pic18MacroMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38_MacroMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstringlist mProperty_mConstantNameList ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--- Constructors
  public: cMapElement_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_pic_31__38_MacroMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lstringlist & in_mConstantNameList,
                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList
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
// Phase 1: @pic_31__38_MacroMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstringlist mProperty_mConstantNameList ;
  public: inline GALGAS_lstringlist readProperty_mConstantNameList (void) const {
    return mProperty_mConstantNameList ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantNameList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_MacroMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lstringlist & in_mConstantNameList,
                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_MacroMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_MacroMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstringlist & inOperand1,
                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand2,
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
 
} ; // End of GALGAS_pic_31__38_MacroMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: pic18MacroMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_pic_31__38_MacroMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_pic_31__38_MacroMap_2D_element_3F_ (const GALGAS_pic_31__38_MacroMap_2D_element & inValue) ;
  public: static GALGAS_pic_31__38_MacroMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_pic_31__38_MacroMap_2D_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_pic_31__38_MacroMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_MacroMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mRoutineName,
                                                 const class GALGAS_luint & in_mRequiredBank,
                                                 const class GALGAS_luint & in_mReturnedBank,
                                                 const class GALGAS_bool & in_mPreservesBank,
                                                 const class GALGAS_bool & in_mIsNoReturn
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineDeclarationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineDeclarationList extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineDeclarationList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_luint & inOperand1,
                                                                               const class GALGAS_luint & inOperand2,
                                                                               const class GALGAS_bool & inOperand3,
                                                                               const class GALGAS_bool & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineDeclarationList add_operation (const GALGAS_routineDeclarationList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_luint constinArgument1,
                                               class GALGAS_luint constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_luint constinArgument1,
                                                      class GALGAS_luint constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_luint & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_luint & outArgument1,
                                                class GALGAS_luint & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_luint & outArgument1,
                                                      class GALGAS_luint & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_luint & outArgument1,
                                             class GALGAS_luint & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_routineDeclarationList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineDeclarationList ;
 
} ; // End of GALGAS_routineDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_routineDeclarationList (const GALGAS_routineDeclarationList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineDeclarationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: inline GALGAS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GALGAS_luint mProperty_mRequiredBank ;
  public: inline GALGAS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GALGAS_luint mProperty_mReturnedBank ;
  public: inline GALGAS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GALGAS_bool mProperty_mPreservesBank ;
  public: inline GALGAS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineDeclarationList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineDeclarationList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                    const GALGAS_luint & in_mRequiredBank,
                                                    const GALGAS_luint & in_mReturnedBank,
                                                    const GALGAS_bool & in_mPreservesBank,
                                                    const GALGAS_bool & in_mIsNoReturn) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineDeclarationList_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_luint & inOperand1,
                                                                                    const class GALGAS_luint & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3,
                                                                                    const class GALGAS_bool & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineDeclarationList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_luint & inOperand1,
                                                                                const class GALGAS_luint & inOperand2,
                                                                                const class GALGAS_bool & inOperand3,
                                                                                const class GALGAS_bool & inOperand4,
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
 
} ; // End of GALGAS_routineDeclarationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//   enum programKind
//--------------------------------------------------------------------------------------------------

class GALGAS_programKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_programKind (void) ;

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
  public: static GALGAS_programKind extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_programKind class_func_bootloaderProgram (LOCATION_ARGS) ;

  public: static class GALGAS_programKind class_func_regularProgram (LOCATION_ARGS) ;

  public: static class GALGAS_programKind class_func_userProgram (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_programKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBootloaderProgram (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegularProgram (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUserProgram (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_programKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dataList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dataList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_dataList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_dataList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mDataName,
                                                 const class GALGAS_immediatExpressionList & in_mValueList,
                                                 const class GALGAS_bool & in_mIsByteList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dataList init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dataList extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dataList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_dataList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_immediatExpressionList & inOperand1,
                                                                 const class GALGAS_bool & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_dataList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_immediatExpressionList & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_dataList add_operation (const GALGAS_dataList & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_immediatExpressionList constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_immediatExpressionList constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_immediatExpressionList & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_immediatExpressionList & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_immediatExpressionList & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsByteListAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_immediatExpressionList constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_immediatExpressionList & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_immediatExpressionList & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDataNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsByteListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dataList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dataList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dataList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_dataList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_dataList ;
 
} ; // End of GALGAS_dataList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_dataList : public cGenericAbstractEnumerator {
  public: cEnumerator_dataList (const GALGAS_dataList & inEnumeratedObject,
                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mDataName (LOCATION_ARGS) const ;
  public: class GALGAS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsByteList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_dataList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dataList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dataList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: inline GALGAS_lstring readProperty_mDataName (void) const {
    return mProperty_mDataName ;
  }

  public: GALGAS_immediatExpressionList mProperty_mValueList ;
  public: inline GALGAS_immediatExpressionList readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

  public: GALGAS_bool mProperty_mIsByteList ;
  public: inline GALGAS_bool readProperty_mIsByteList (void) const {
    return mProperty_mIsByteList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_dataList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDataName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataName = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_immediatExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

  public: inline void setter_setMIsByteList (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsByteList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_dataList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_dataList_2D_element (const GALGAS_lstring & in_mDataName,
                                      const GALGAS_immediatExpressionList & in_mValueList,
                                      const GALGAS_bool & in_mIsByteList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dataList_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_immediatExpressionList & inOperand1,
                                                              const class GALGAS_bool & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dataList_2D_element extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dataList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_immediatExpressionList & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_dataList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @checkpicList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_checkpicList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_checkpicList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_checkpicList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mErrorLocation,
                                                 const class GALGAS_lstringlist & in_mValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_checkpicList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_checkpicList extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_checkpicList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_checkpicList class_func_listWithValue (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_lstringlist & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_checkpicList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_checkpicList add_operation (const GALGAS_checkpicList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_location constinArgument0,
                                               class GALGAS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_checkpicList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_checkpicList ;
 
} ; // End of GALGAS_checkpicList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_checkpicList : public cGenericAbstractEnumerator {
  public: cEnumerator_checkpicList (const GALGAS_checkpicList & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_checkpicList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @checkpicList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_checkpicList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mErrorLocation ;
  public: inline GALGAS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

  public: GALGAS_lstringlist mProperty_mValueList ;
  public: inline GALGAS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_checkpicList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_checkpicList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_checkpicList_2D_element (const GALGAS_location & in_mErrorLocation,
                                          const GALGAS_lstringlist & in_mValueList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_checkpicList_2D_element init_21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_lstringlist & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_checkpicList_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_checkpicList_2D_element class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_lstringlist & inOperand1,
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
 
} ; // End of GALGAS_checkpicList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18RegisterComparison mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_pic_31__38_RegisterComparison & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch condition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_condition (const class GALGAS_conditional_5F_branch & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind assemblyCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_assemblyCode (const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@FA_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_bit_5F_oriented_5F_op & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_conditional_5F_branch & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@tableAccessOption mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_tableAccessOption & inObject,
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
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_ (class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GALGAS_lstringlist & ioArgument3,
                                    class GALGAS_lstringlist & ioArgument4,
                                    class GALGAS_ramDefinitionList & ioArgument5,
                                    class GALGAS_lstringlist & ioArgument6,
                                    class GALGAS_configDefinitionList & ioArgument7,
                                    class GALGAS_constantDefinitionList & ioArgument8,
                                    class GALGAS_checkpicList & ioArgument9,
                                    class GALGAS_dataList & ioArgument10,
                                    class GALGAS_bool & ioArgument11,
                                    class GALGAS_bool & ioArgument12,
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_ (class GALGAS_checkpicList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_ (class GALGAS_dataList & ioArgument0,
                                                  class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GALGAS_pic_31__38_InstructionList & outArgument0,
                                                   class GALGAS_bool & ioArgument1,
                                                   class GALGAS_bool & ioArgument2,
                                                   class GALGAS_labelMap & ioArgument3,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       class GALGAS_bool & ioArgument1,
                                                       class GALGAS_bool & ioArgument2,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                     class GALGAS_bool & ioArgument1,
                                                     class GALGAS_bool & ioArgument2,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_ (class GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                               class GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                               class GALGAS_bool & ioArgument2,
                                                               class GALGAS_bool & ioArgument3,
                                                               class GALGAS_labelMap & ioArgument4,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_ (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GALGAS_bool & ioArgument1,
                                                         class GALGAS_bool & ioArgument2,
                                                         class GALGAS_labelMap & ioArgument3,
                                                         class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_syntax_body_i0_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                       GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                       GALGAS_lstringlist & ioArgument3,
                                                       GALGAS_lstringlist & ioArgument4,
                                                       GALGAS_ramDefinitionList & ioArgument5,
                                                       GALGAS_lstringlist & ioArgument6,
                                                       GALGAS_configDefinitionList & ioArgument7,
                                                       GALGAS_constantDefinitionList & ioArgument8,
                                                       GALGAS_checkpicList & ioArgument9,
                                                       GALGAS_dataList & ioArgument10,
                                                       GALGAS_bool & ioArgument11,
                                                       GALGAS_bool & ioArgument12,
                                                       Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GALGAS_checkpicList & ioArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GALGAS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GALGAS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                                      GALGAS_bool & ioArgument1,
                                                                      GALGAS_bool & ioArgument2,
                                                                      GALGAS_labelMap & ioArgument3,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                          GALGAS_bool & ioArgument1,
                                                                          GALGAS_bool & ioArgument2,
                                                                          Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                        GALGAS_bool & ioArgument1,
                                                                        GALGAS_bool & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                             GALGAS_bool & ioArgument1,
                                                                             GALGAS_bool & ioArgument2,
                                                                             GALGAS_labelMap & ioArgument3,
                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GALGAS_lstring constinArgument0,
                                                                                   GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                                                   GALGAS_bool & ioArgument2,
                                                                                   GALGAS_bool & ioArgument3,
                                                                                   GALGAS_labelMap & ioArgument4,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
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
//
// Phase 1: @pic_31__38_Instruction_5F_switch reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_switch : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_switch (const class cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_SwitchInstructionCaseList readProperty_mCaseList (void) const ;
  public: void setProperty_mCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList & inValue) ;

  public: class GALGAS_location readProperty_mElseBranchStartLocation (void) const ;
  public: void setProperty_mElseBranchStartLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_Instruction_5F_switch init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                               const class GALGAS_location & inOperand2,
                                                                               const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_switch extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_switch class_func_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                               const class GALGAS_location & inOperand2,
                                                                               const class GALGAS_pic_31__38_InstructionList & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_switch class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18SwitchInstructionCaseList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_SwitchInstructionCaseList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mStartOfCase,
                                                 const class GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_SwitchInstructionCaseList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SwitchInstructionCaseList extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_SwitchInstructionCaseList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_SwitchInstructionCaseList class_func_listWithValue (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_SwitchInstructionCaseList add_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_location constinArgument0,
                                               class GALGAS_pic_31__38_CaseExpressionList constinArgument1,
                                               class GALGAS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_pic_31__38_CaseExpressionList constinArgument1,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionListAtIndex (class GALGAS_pic_31__38_CaseExpressionList constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartOfCaseAtIndex (class GALGAS_location constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                             class GALGAS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_mCaseExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartOfCaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ; // End of GALGAS_pic_31__38_SwitchInstructionCaseList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_SwitchInstructionCaseList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_switch class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                      const class GALGAS_location & inOperand2,
                                                                      const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint arg_inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GALGAS_routineMap arg_inRoutineMap,
           const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_pic_31__38_MacroMap arg_inMacroMap,
           class GALGAS_uint & arg_ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_uint & arg_ioCurrentBank,
           const class GALGAS_bool arg_inShouldPreserveBSR,
           const class GALGAS_routineKind arg_inRoutineKind,
           class GALGAS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_SwitchInstructionCaseList mProperty_mCaseList ;
  public: GALGAS_location mProperty_mElseBranchStartLocation ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                 const GALGAS_location & in_mElseBranchStartLocation,
                                                 const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
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
// Phase 1: @pic_31__38_IntervalCaseItem reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IntervalCaseItem : public GALGAS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IntervalCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_IntervalCaseItem (const class cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mMinExpression (void) const ;
  public: void setProperty_mMinExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_immediatExpression readProperty_mMaxExpression (void) const ;
  public: void setProperty_mMaxExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_location readProperty_mCaseExpressionLocation (void) const ;
  public: void setProperty_mCaseExpressionLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_IntervalCaseItem init_21__21__21_ (const class GALGAS_immediatExpression & inOperand0,
                                                                      const class GALGAS_immediatExpression & inOperand1,
                                                                      const class GALGAS_location & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IntervalCaseItem extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_IntervalCaseItem class_func_new (const class GALGAS_immediatExpression & inOperand0,
                                                                          const class GALGAS_immediatExpression & inOperand1,
                                                                          const class GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_IntervalCaseItem class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18IntervalCaseItem class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IntervalCaseItem_init_21__21__21_ (const class GALGAS_immediatExpression & inOperand0,
                                                             const class GALGAS_immediatExpression & inOperand1,
                                                             const class GALGAS_location & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_string arg_inIndexForLabels,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_caseConstantMap & arg_ioCaseConstantMap,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mMinExpression ;
  public: GALGAS_immediatExpression mProperty_mMaxExpression ;
  public: GALGAS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                            const GALGAS_immediatExpression & in_mMaxExpression,
                                            const GALGAS_location & in_mCaseExpressionLocation
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
// Phase 1: @pic_31__38_SimpleConstantCaseItem reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_SimpleConstantCaseItem : public GALGAS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_SimpleConstantCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_SimpleConstantCaseItem (const class cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_immediatExpression readProperty_mCaseExpression (void) const ;
  public: void setProperty_mCaseExpression (const GALGAS_immediatExpression & inValue) ;

  public: class GALGAS_location readProperty_mCaseExpressionLocation (void) const ;
  public: void setProperty_mCaseExpressionLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_SimpleConstantCaseItem init_21__21_ (const class GALGAS_immediatExpression & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SimpleConstantCaseItem extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_SimpleConstantCaseItem class_func_new (const class GALGAS_immediatExpression & inOperand0,
                                                                                const class GALGAS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_SimpleConstantCaseItem class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18SimpleConstantCaseItem class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_SimpleConstantCaseItem_init_21__21_ (const class GALGAS_immediatExpression & inOperand0,
                                                               const class GALGAS_location & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GALGAS_registerTable arg_inRegisterTable,
           const class GALGAS_constantMap arg_inConstantMap,
           const class GALGAS_lstring arg_inConditionTrueLabel,
           const class GALGAS_string arg_inIndexForLabels,
           class GALGAS_stringset & arg_ioUsedRegisters,
           class GALGAS_caseConstantMap & arg_ioCaseConstantMap,
           class GALGAS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GALGAS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GALGAS_lstring & arg_ioBlockLabel,
           class GALGAS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mCaseExpression ;
  public: GALGAS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (const GALGAS_immediatExpression & in_mCaseExpression,
                                                  const GALGAS_location & in_mCaseExpressionLocation
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
//Parser class 'communs' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_communs {
//--- Virtual destructor
  public: virtual ~ cParser_communs (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GALGAS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_ (class GALGAS_immediatExpression & outArgument0,
                                                              class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_ (class GALGAS_immediatExpression & outArgument0,
                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_ (class GALGAS_immediatExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_ (class GALGAS_immediatExpression & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_ (class GALGAS_immediatExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_communs_configuration_5F_definition_i0_ (GALGAS_configDefinitionList & ioArgument0,
                                                                Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_ (GALGAS_declarationInRam & outArgument0,
                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_ (GALGAS_ramDefinitionList & ioArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_ (GALGAS_constantDefinitionList & ioArgument0,
                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_ (GALGAS_immediatExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_ (GALGAS_immediatExpression & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GALGAS_immediatExpression & outArgument0,
                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_ (GALGAS_immediatExpression & outArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_ (GALGAS_immediatExpression & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_ (GALGAS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_ (GALGAS_registerExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_ (GALGAS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_ (GALGAS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_ (GALGAS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GALGAS_bool & outArgument0,
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
  public: virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_body_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                 GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                 GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                 GALGAS_lstringlist & ioArgument3,
                                 GALGAS_lstringlist & ioArgument4,
                                 GALGAS_ramDefinitionList & ioArgument5,
                                 GALGAS_lstringlist & ioArgument6,
                                 GALGAS_configDefinitionList & ioArgument7,
                                 GALGAS_constantDefinitionList & ioArgument8,
                                 GALGAS_checkpicList & ioArgument9,
                                 GALGAS_dataList & ioArgument10,
                                 GALGAS_bool & ioArgument11,
                                 GALGAS_bool & ioArgument12,
                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                  GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                  GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                  GALGAS_lstringlist & ioArgument3,
                                                  GALGAS_lstringlist & ioArgument4,
                                                  GALGAS_ramDefinitionList & ioArgument5,
                                                  GALGAS_lstringlist & ioArgument6,
                                                  GALGAS_configDefinitionList & ioArgument7,
                                                  GALGAS_constantDefinitionList & ioArgument8,
                                                  GALGAS_checkpicList & ioArgument9,
                                                  GALGAS_dataList & ioArgument10,
                                                  GALGAS_bool & ioArgument11,
                                                  GALGAS_bool & ioArgument12
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                    GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                    GALGAS_lstringlist & ioArgument3,
                                                    GALGAS_lstringlist & ioArgument4,
                                                    GALGAS_ramDefinitionList & ioArgument5,
                                                    GALGAS_lstringlist & ioArgument6,
                                                    GALGAS_configDefinitionList & ioArgument7,
                                                    GALGAS_constantDefinitionList & ioArgument8,
                                                    GALGAS_checkpicList & ioArgument9,
                                                    GALGAS_dataList & ioArgument10,
                                                    GALGAS_bool & ioArgument11,
                                                    GALGAS_bool & ioArgument12
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
  public: virtual void nt_checkpic_5F_definition_ (GALGAS_checkpicList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GALGAS_dataList & ioArgument0,
                                               Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GALGAS_declarationInRam & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                           Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GALGAS_immediatExpression & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                GALGAS_bool & ioArgument1,
                                                GALGAS_bool & ioArgument2,
                                                GALGAS_labelMap & ioArgument3,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GALGAS_bool & ioArgument1,
                                                    GALGAS_bool & ioArgument2,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GALGAS_bool & ioArgument1,
                                                  GALGAS_bool & ioArgument2,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GALGAS_bool & ioArgument2,
                                                            GALGAS_bool & ioArgument3,
                                                            GALGAS_labelMap & ioArgument4,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GALGAS_bool & ioArgument1,
                                                      GALGAS_bool & ioArgument2,
                                                      GALGAS_labelMap & ioArgument3,
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
//
// Phase 1: @pic18CaseExpressionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_CaseExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_CaseExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_CaseExpressionList init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_CaseExpressionList extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_CaseExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_CaseExpressionList class_func_listWithValue (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_CaseExpressionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_CaseExpressionList add_operation (const GALGAS_pic_31__38_CaseExpressionList & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_AbstractCaseItem constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_pic_31__38_AbstractCaseItem constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseItemAtIndex (class GALGAS_pic_31__38_AbstractCaseItem constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_AbstractCaseItem getter_mCaseItemAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38_CaseExpressionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38_CaseExpressionList ;
 
} ; // End of GALGAS_pic_31__38_CaseExpressionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_CaseExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_CaseExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

