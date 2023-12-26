#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                             const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                             const class GALGAS_uint & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_midrange_5F_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB class


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
//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                              const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GALGAS_uint & in_mBitNumber
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB bang_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                      const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                      const class GALGAS_uint & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class


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
//--- Extension getter isSkippingInstruction
  public: virtual class GALGAS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBitTestSkip
  public: virtual void method_optimizeBitTestSkip (const class GALGAS_uint inLineIndex,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_bool & in_mSkipIfSet,
                                                                       const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_uint & in_mBitNumber
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip bang_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                    Phase 1: @midrange_5F_call_5F_goto_5F_bit enum                                   *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_call_5F_goto_5F_bit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_call_5F_goto_5F_bit (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_set,
    kEnum_clear,
    kEnum_noChange
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_call_5F_goto_5F_bit extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_clear (LOCATION_ARGS) ;

  public: static class GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_noChange (LOCATION_ARGS) ;

  public: static class GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_set (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClear (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoChange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSet (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_clear () const ;

  public: VIRTUAL_IN_DEBUG bool optional_noChange () const ;

  public: VIRTUAL_IN_DEBUG bool optional_set () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_call_5F_goto_5F_bit class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JUMP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JUMP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_JUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;

  public: class GALGAS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                                const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBit_31__31_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBit_31__32_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JUMP class


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
//--- Extension getter instructionLength
  public: virtual class GALGAS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GALGAS_midrange_5F_symbolTableForConvertingRelatives inRoutineSymbolTable,
           class GALGAS_uint & ioAddress,
           class GALGAS_bool & ioJUMP_or_JSR_fixed,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           const class GALGAS_uint inIndex,
           class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GALGAS_symbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JUMP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_JUMP bang_midrange_5F_intermediate_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_GOTO reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_GOTO : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_GOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_GOTO class


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
//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GALGAS_symbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_GOTO_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_GOTO bang_midrange_5F_intermediate_5F_GOTO_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_CALL reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_CALL : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_CALL (const class cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_CALL class


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
//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_CALL_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_CALL & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_CALL bang_midrange_5F_intermediate_5F_CALL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JSR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JSR : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_JSR (const class cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;

  public: class GALGAS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                               const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBit_31__31_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBit_31__32_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JSR class


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
//--- Extension getter instructionLength
  public: virtual class GALGAS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GALGAS_midrange_5F_symbolTableForConvertingRelatives inRoutineSymbolTable,
           class GALGAS_uint & ioAddress,
           class GALGAS_bool & ioJUMP_or_JSR_fixed,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           const class GALGAS_uint inIndex,
           class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel,
                                                const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JSR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_JSR & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_JSR bang_midrange_5F_intermediate_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT constructor_new (const class GALGAS_location & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT class


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
//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT bang_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW constructor_new (const class GALGAS_location & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW class


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
//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW bang_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP constructor_new (const class GALGAS_location & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP class


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
//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP bang_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN constructor_new (const class GALGAS_location & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN class


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
//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GALGAS_location & in_mInstructionLocation
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN bang_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE constructor_new (const class GALGAS_location & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE class


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
//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GALGAS_location & in_mInstructionLocation
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE bang_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP constructor_new (const class GALGAS_location & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP class


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
//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP bang_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GALGAS_uint readProperty_mLiteralValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                           const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                           const class GALGAS_uint & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLiteralInstruction (class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLiteralValue (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation class


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
//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeMOVLW
  public: virtual void method_optimizeMOVLW (const class GALGAS_uint inLineIndex,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                            const GALGAS_uint & in_mLiteralValue
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation bang_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_luint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP class


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
//--- Extension getter instructionLength
  public: virtual class GALGAS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_luint & in_mOccurrenceFactor
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP bang_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_string readProperty_mTargetLabel (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                     const class GALGAS_string & inOperand2,
                                                                                                     const class GALGAS_bool & inOperand3,
                                                                                                     const class GALGAS_bool & inOperand4,
                                                                                                     const class GALGAS_bool & inOperand5
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition class


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
//--- Extension getter instructionLength
  public: virtual class GALGAS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GALGAS_string & ioString,
           class GALGAS_uint & ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_uint inTotalBankCount,
           const class GALGAS_midrange_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GALGAS_symbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_string mProperty_mTargetLabel ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GALGAS_string & in_mTargetLabel,
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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition bang_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_midrange_5F_instruction * inObject,
                                          class GALGAS_stringset & io_ioUsedRoutines,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint callExtensionGetter_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                class GALGAS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GALGAS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionUsesGOTOorCALL (class cPtr_midrange_5F_instruction * inObject,
                                                    class GALGAS_bool & io_ioUsesGOTOorCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (class cPtr_midrange_5F_instruction * inObject,
                                                                       const class GALGAS_routineMap constin_inRoutineMap,
                                                                       const class GALGAS_registerTable constin_inRegisterTable,
                                                                       const class GALGAS_constantMap constin_inConstantMap,
                                                                       class GALGAS_uint & io_ioLocalLabelIndex,
                                                                       class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                       class GALGAS_string & io_ioListFileContents,
                                                                       const class GALGAS_uint constin_inTotalBankCount,
                                                                       class GALGAS_uint & io_ioCurrentBank,
                                                                       const class GALGAS_bool constin_inShouldPreserveBank,
                                                                       class GALGAS_bool & io_ioContinuesInSequence,
                                                                       const class GALGAS_routineKind constin_inRoutineKind,
                                                                       class GALGAS_stringset & io_ioUsedRegisters,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildIPICinstructionForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                           const class GALGAS_uint constin_inTotalBankCount,
                                                           const class GALGAS_uint constin_inCurrentBank,
                                                           const class GALGAS_registerTable constin_inRegisterTable,
                                                           const class GALGAS_constantMap constin_inConstantMap,
                                                           class GALGAS_uint & io_ioLocalLabelIndex,
                                                           const class GALGAS_bool constin_inComplementaryBranch,
                                                           const class GALGAS_location constin_inInstructionLocation,
                                                           const class GALGAS_string constin_inTargetLabel,
                                                           class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                           class GALGAS_string & io_ioListFileContents,
                                                           class GALGAS_stringset & io_ioUsedRegisters,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionCountForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                              const class GALGAS_bool constin_inComplementaryBranch,
                                                              class GALGAS_uint & out_outInstructionCount,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GALGAS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                      class GALGAS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const class GALGAS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeMOVLW (class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                        const class GALGAS_uint constin_inLineIndex,
                                        class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                        class GALGAS_string & io_ioListFileContents,
                                        class GALGAS_bool & io_ioOptimizationsDone,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const class GALGAS_uint constinArgument0,
                                                                  const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                                  class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const class GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                             const class GALGAS_uint constin_inLineIndex,
                                             class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             class GALGAS_string & io_ioListFileContents,
                                             class GALGAS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBitTestSkip (class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                              const class GALGAS_uint constin_inLineIndex,
                                              class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                              class GALGAS_string & io_ioListFileContents,
                                              class GALGAS_bool & io_ioOptimizationsDone,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const class GALGAS_uint constinArgument0,
                                                                             const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                                             class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                                             class GALGAS_stringset & outArgument3,
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

class GALGAS_midrange_5F_symbolTableForConvertingRelatives : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--------------------------------- Handle copy
  public: GALGAS_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  public: GALGAS_midrange_5F_symbolTableForConvertingRelatives & operator = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_symbolTableForConvertingRelatives extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_symbolTableForConvertingRelatives constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_midrange_5F_symbolTableForConvertingRelatives constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_symbolTableForConvertingRelatives & inOperand0
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_midrange_5F_symbolTableForConvertingRelatives add_operation (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inOperand,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_symbolTableForConvertingRelatives getter_overriddenMap (Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTableForConvertingRelatives * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                          const GALGAS_string & inKey
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
 
} ; // End of GALGAS_midrange_5F_symbolTableForConvertingRelatives class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_symbolTableForConvertingRelatives : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mRoutineAddress ;

//--- Constructor
  public: cMapElement_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_lstring & inKey,
                                                                     const GALGAS_uint & in_mRoutineAddress
                                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mRoutineAddress ;
  public: inline GALGAS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & in_lkey,
                                                                           const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                        const class GALGAS_uint & inOperand1,
                                                                                                        class Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GALGAS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               class GALGAS_uint & io_ioAddress,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const class GALGAS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  class GALGAS_uint & io_ioAddress,
                                  class GALGAS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const class GALGAS_uint constin_inIndex,
                                  class GALGAS_string & io_ioListFileContents,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GALGAS_string & io_ioString,
                                            class GALGAS_uint & io_ioLocalLabelIndex,
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

class GALGAS_midrange_5F_symbolTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_symbolTable (void) ;

//--------------------------------- Handle copy
  public: GALGAS_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inSource) ;
  public: GALGAS_midrange_5F_symbolTable & operator = (const GALGAS_midrange_5F_symbolTable & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_symbolTable extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_symbolTable constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_midrange_5F_symbolTable constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_symbolTable & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_midrange_5F_symbolTable add_operation (const GALGAS_midrange_5F_symbolTable & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_symbolTable getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_symbolTable ;
 
} ; // End of GALGAS_midrange_5F_symbolTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_symbolTable : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_midrange_5F_symbolTable_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mRoutineAddress ;

//--- Constructor
  public: cMapElement_midrange_5F_symbolTable (const GALGAS_lstring & inKey,
                                               const GALGAS_uint & in_mRoutineAddress
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_symbolTable_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_symbolTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mRoutineAddress ;
  public: inline GALGAS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_symbolTable_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_midrange_5F_symbolTable_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_symbolTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_symbolTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_symbolTable_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              class GALGAS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              class GALGAS_uint & io_ioAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const class GALGAS_registerTable constin_inRegisterTable,
                                                      const class GALGAS_constantMap constin_inConstantMap,
                                                      const class GALGAS_uint constin_inTotalBankCount,
                                                      const class GALGAS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      class GALGAS_string & io_ioListFileContents,
                                                      class GALGAS_uint & io_ioAddress,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code basecode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_basecode (const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_baseCode (const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_baseCode (const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_baseCode (const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
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

class GALGAS_midrange_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inSource) ;
  public: GALGAS_midrange_5F_declaredRoutineMap & operator = (const GALGAS_midrange_5F_declaredRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_midrange_5F_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_declaredRoutineMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_midrange_5F_declaredRoutineMap add_operation (const GALGAS_midrange_5F_declaredRoutineMap & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_midrange_5F_declaredRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_declaredRoutineMap ;
 
} ; // End of GALGAS_midrange_5F_declaredRoutineMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_declaredRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_midrange_5F_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
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

//--- Constructor
  public: cMapElement_midrange_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_declaredRoutineMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_declaredRoutineMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bootloaderReservedRAMmap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bootloaderReservedRAMmap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bootloaderReservedRAMmap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_bootloaderReservedRAMmap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_bootloaderReservedRAMmap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inSource) ;
  public: GALGAS_bootloaderReservedRAMmap & operator = (const GALGAS_bootloaderReservedRAMmap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bootloaderReservedRAMmap extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bootloaderReservedRAMmap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_bootloaderReservedRAMmap constructor_mapWithMapToOverride (const class GALGAS_bootloaderReservedRAMmap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_bootloaderReservedRAMmap add_operation (const GALGAS_bootloaderReservedRAMmap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReservedSizeForKey (class GALGAS_luint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReservedSizeForKey (const class GALGAS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bootloaderReservedRAMmap getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_luint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_bootloaderReservedRAMmap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bootloaderReservedRAMmap ;
 
} ; // End of GALGAS_bootloaderReservedRAMmap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_bootloaderReservedRAMmap : public cGenericAbstractEnumerator {
  public: cEnumerator_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mReservedSize (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_bootloaderReservedRAMmap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_luint mProperty_mReservedSize ;

//--- Constructor
  public: cMapElement_bootloaderReservedRAMmap (const GALGAS_lstring & inKey,
                                                const GALGAS_luint & in_mReservedSize
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bootloaderReservedRAMmap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bootloaderReservedRAMmap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_luint mProperty_mReservedSize ;
  public: inline GALGAS_luint readProperty_mReservedSize (void) const {
    return mProperty_mReservedSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_bootloaderReservedRAMmap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMReservedSize (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReservedSize = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_bootloaderReservedRAMmap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_luint & in_mReservedSize) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bootloaderReservedRAMmap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bootloaderReservedRAMmap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_luint & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bootloaderReservedRAMmap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_PiccoloInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_PiccoloInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_PiccoloInstruction (const class cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_PiccoloInstruction extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_PiccoloInstruction class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap inDeclaredRoutineMap,
           const class GALGAS_stringset inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloInstruction (const GALGAS_location & in_mInstructionLocation
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_PiccoloInstruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_PiccoloInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_PiccoloInstruction_2D_weak (const class GALGAS_pic_31__38_PiccoloInstruction & inSource) ;

  public: GALGAS_pic_31__38_PiccoloInstruction_2D_weak & operator = (const class GALGAS_pic_31__38_PiccoloInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_PiccoloInstruction bang_pic_31__38_PiccoloInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_PiccoloInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_PiccoloInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_PiccoloInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18InstructionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_InstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InstructionList extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_InstructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionList constructor_listWithValue (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_InstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList add_operation (const GALGAS_pic_31__38_InstructionList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_PiccoloInstruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_pic_31__38_PiccoloInstruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_pic_31__38_PiccoloInstruction constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_PiccoloInstruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_InstructionList ;
 
} ; // End of GALGAS_pic_31__38_InstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_InstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_InstructionList (const GALGAS_pic_31__38_InstructionList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_InstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_InstructionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_pic_31__38_PiccoloInstruction mProperty_mInstruction ;
  public: inline GALGAS_pic_31__38_PiccoloInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_pic_31__38_PiccoloInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_InstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_InstructionList_2D_element (const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_InstructionList_2D_element constructor_new (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_InstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_InstructionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_nobanksel reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_nobanksel : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_nobanksel (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_nobanksel (const class cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_nobanksel extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_nobanksel constructor_new (const class GALGAS_location & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_nobanksel class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_nobanksel_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_nobanksel & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_nobanksel & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_nobanksel bang_pic_31__38_Instruction_5F_nobanksel_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checknobank reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_checknobank : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_checknobank (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_checknobank (const class cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_checknobank extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_checknobank constructor_new (const class GALGAS_location & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checknobank class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checknobank_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_checknobank & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_checknobank & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_checknobank bang_pic_31__38_Instruction_5F_checknobank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checkbank reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_checkbank : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_checkbank (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_checkbank (const class cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mBankIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_checkbank extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_checkbank constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_uint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBankIndex (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checkbank class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mBankIndex ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_uint & in_mBankIndex
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checkbank_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_checkbank & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_checkbank & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_checkbank bang_pic_31__38_Instruction_5F_checkbank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloSimpleInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_PiccoloSimpleInstruction : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_PiccoloSimpleInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_PiccoloSimpleInstruction (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_PiccoloSimpleInstruction extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_PiccoloSimpleInstruction class


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
//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloSimpleInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inSource) ;

  public: GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak & operator = (const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_PiccoloSimpleInstruction bang_pic_31__38_PiccoloSimpleInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_banksel (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_banksel (const class cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mBankIndex (void) const ;

  public: class GALGAS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_banksel extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_banksel constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_luint & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBankIndex (class GALGAS_luint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mBankIndex ;
  public: GALGAS_bool mProperty_mWarningOnUselessBanksel ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_luint & in_mBankIndex,
                                                  const GALGAS_bool & in_mWarningOnUselessBanksel
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_banksel & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_banksel & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_banksel bang_pic_31__38_Instruction_5F_banksel_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const class cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_registerExpression & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel_5F_register class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mWarningOnUselessBanksel ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                              const GALGAS_bool & in_mWarningOnUselessBanksel
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register bang_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_savebank reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_savebank : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_savebank (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_savebank (const class cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegister (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSaveBankInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_registerExpression & inOperand1,
                                                                                  const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                  const class GALGAS_location & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfSaveBankInstruction (class GALGAS_location inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_savebank class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap inDeclaredRoutineMap,
           const class GALGAS_stringset inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegister ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfSaveBankInstruction ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_registerExpression & in_mRegister,
                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfSaveBankInstruction
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_savebank_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_savebank & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_savebank & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_savebank bang_pic_31__38_Instruction_5F_savebank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_repetitionStatique : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const class cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_repetitionStatique extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_repetitionStatique constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_immediatExpression & inOperand2,
                                                                                            const class GALGAS_immediatExpression & inOperand3,
                                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand4,
                                                                                            const class GALGAS_location & inOperand5
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_repetitionStatique class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: GALGAS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GALGAS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstruction ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_lstring & in_mConstantName,
                                                             const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                             const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstruction
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique bang_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBlockTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractBlockTerminationForBlockInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractBlockTerminationForBlockInstruction (const class cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractBlockTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractBlockTerminationForBlockInstruction class


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
//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GALGAS_stringset & ioVisitedBlockSet,
           const class GALGAS_blockInstructionBlockMap inBlockMap,
           const class GALGAS_string inCurrentBlockName,
           const class GALGAS_uint inInitialBlockSetting,
           class GALGAS_blockInitialBankSelectionMap & ioBlockInitialBankSelectionMap,
           class GALGAS_bool & ioContinuesInSequence,
           class GALGAS_bool & ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_string inLabelForBlock,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractBlockTerminationForBlockInstruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBlockTerminationForBlockInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (const class GALGAS_abstractBlockTerminationForBlockInstruction & inSource) ;

  public: GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak & operator = (const class GALGAS_abstractBlockTerminationForBlockInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractBlockTerminationForBlockInstruction bang_abstractBlockTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @exitBlockTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_exitBlockTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GALGAS_exitBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_exitBlockTerminationForBlockInstruction (const class cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_exitBlockTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_exitBlockTerminationForBlockInstruction constructor_new (const class GALGAS_location & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_exitBlockTerminationForBlockInstruction class


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
//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GALGAS_stringset & ioVisitedBlockSet,
           const class GALGAS_blockInstructionBlockMap inBlockMap,
           const class GALGAS_string inCurrentBlockName,
           const class GALGAS_uint inInitialBlockSetting,
           class GALGAS_blockInitialBankSelectionMap & ioBlockInitialBankSelectionMap,
           class GALGAS_bool & ioContinuesInSequence,
           class GALGAS_bool & ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_string inLabelForBlock,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_exitBlockTerminationForBlockInstruction (const GALGAS_location & in_mLocation
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @exitBlockTerminationForBlockInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_exitBlockTerminationForBlockInstruction_2D_weak : public GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_exitBlockTerminationForBlockInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_exitBlockTerminationForBlockInstruction_2D_weak (const class GALGAS_exitBlockTerminationForBlockInstruction & inSource) ;

  public: GALGAS_exitBlockTerminationForBlockInstruction_2D_weak & operator = (const class GALGAS_exitBlockTerminationForBlockInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_exitBlockTerminationForBlockInstruction bang_exitBlockTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_exitBlockTerminationForBlockInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_exitBlockTerminationForBlockInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_exitBlockTerminationForBlockInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @gotoTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_gotoTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_gotoTerminationForBlockInstruction (const class cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mNextBlock (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gotoTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gotoTerminationForBlockInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMNextBlock (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gotoTerminationForBlockInstruction class


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
//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GALGAS_stringset & ioVisitedBlockSet,
           const class GALGAS_blockInstructionBlockMap inBlockMap,
           const class GALGAS_string inCurrentBlockName,
           const class GALGAS_uint inInitialBlockSetting,
           class GALGAS_blockInitialBankSelectionMap & ioBlockInitialBankSelectionMap,
           class GALGAS_bool & ioContinuesInSequence,
           class GALGAS_bool & ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_string inLabelForBlock,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mNextBlock ;

//--- Constructor
  public: cPtr_gotoTerminationForBlockInstruction (const GALGAS_lstring & in_mNextBlock
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @gotoTerminationForBlockInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_gotoTerminationForBlockInstruction_2D_weak : public GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_gotoTerminationForBlockInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_gotoTerminationForBlockInstruction_2D_weak (const class GALGAS_gotoTerminationForBlockInstruction & inSource) ;

  public: GALGAS_gotoTerminationForBlockInstruction_2D_weak & operator = (const class GALGAS_gotoTerminationForBlockInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_gotoTerminationForBlockInstruction bang_gotoTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gotoTerminationForBlockInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gotoTerminationForBlockInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gotoTerminationForBlockInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gotoTerminationForBlockInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_ConditionExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_ConditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_ConditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_ConditionExpression (const class cPtr_pic_31__38_ConditionExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_ConditionExpression extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_ConditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_ConditionExpression class


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
//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_lstring inConditionTrueLabel,
           const class GALGAS_lstring inConditionFalseLabel,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_pic_31__38_ConditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testTerminationForBlockInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GALGAS_testTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_testTerminationForBlockInstruction (const class cPtr_testTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;

  public: class GALGAS_abstractBlockTerminationForBlockInstruction readProperty_mTrueTermination (void) const ;

  public: class GALGAS_abstractBlockTerminationForBlockInstruction readProperty_mFalseTermination (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testTerminationForBlockInstruction constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                  const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                                  const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                  const class GALGAS_location & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCondition (class GALGAS_pic_31__38_ConditionExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFalseTermination (class GALGAS_abstractBlockTerminationForBlockInstruction inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTrueTermination (class GALGAS_abstractBlockTerminationForBlockInstruction inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testTerminationForBlockInstruction class


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
//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GALGAS_stringset & ioVisitedBlockSet,
           const class GALGAS_blockInstructionBlockMap inBlockMap,
           const class GALGAS_string inCurrentBlockName,
           const class GALGAS_uint inInitialBlockSetting,
           class GALGAS_blockInitialBankSelectionMap & ioBlockInitialBankSelectionMap,
           class GALGAS_bool & ioContinuesInSequence,
           class GALGAS_bool & ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_string inLabelForBlock,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mTrueTermination ;
  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mFalseTermination ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                   const GALGAS_location & in_mLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testTerminationForBlockInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testTerminationForBlockInstruction_2D_weak : public GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testTerminationForBlockInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testTerminationForBlockInstruction_2D_weak (const class GALGAS_testTerminationForBlockInstruction & inSource) ;

  public: GALGAS_testTerminationForBlockInstruction_2D_weak & operator = (const class GALGAS_testTerminationForBlockInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testTerminationForBlockInstruction bang_testTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testTerminationForBlockInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testTerminationForBlockInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testTerminationForBlockInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testTerminationForBlockInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18BlockInstructionBlockList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BlockInstructionBlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BlockInstructionBlockList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_BlockInstructionBlockList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mBlockName,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                 const class GALGAS_location & in_mEndOfBlock
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BlockInstructionBlockList extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_BlockInstructionBlockList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_BlockInstructionBlockList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                              const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                              const class GALGAS_location & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_BlockInstructionBlockList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                     const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                     const class GALGAS_location & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_BlockInstructionBlockList add_operation (const GALGAS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_pic_31__38_InstructionList constinArgument1,
                                               class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                               class GALGAS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                      class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                 class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                      class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionAtIndex (class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                       class GALGAS_uint constinArgument1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockAtIndex (class GALGAS_location constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_pic_31__38_InstructionList & outArgument1,
                                              class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_pic_31__38_InstructionList & outArgument1,
                                             class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBlockNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlockAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_BlockInstructionBlockList ;
 
} ; // End of GALGAS_pic_31__38_BlockInstructionBlockList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_BlockInstructionBlockList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_BlockInstructionBlockList (const GALGAS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BlockInstructionBlockList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mBlockName ;
  public: inline GALGAS_lstring readProperty_mBlockName (void) const {
    return mProperty_mBlockName ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: inline GALGAS_abstractBlockTerminationForBlockInstruction readProperty_mBlockTerminaisonForBlockInstruction (void) const {
    return mProperty_mBlockTerminaisonForBlockInstruction ;
  }

  public: GALGAS_location mProperty_mEndOfBlock ;
  public: inline GALGAS_location readProperty_mEndOfBlock (void) const {
    return mProperty_mEndOfBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlockName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMBlockTerminaisonForBlockInstruction (const GALGAS_abstractBlockTerminationForBlockInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
  }

  public: inline void setter_setMEndOfBlock (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBlock = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & in_mBlockName,
                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                  const GALGAS_location & in_mEndOfBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BlockInstructionBlockList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                               const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                               const class GALGAS_location & inOperand3,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BlockInstructionBlockList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_block reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_block : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_block (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_block (const class cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mStartBlockName (void) const ;

  public: class GALGAS_pic_31__38_BlockInstructionBlockList readProperty_mBlockList (void) const ;

  public: class GALGAS_location readProperty_mEndOfBlockInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_block extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_block constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                               const class GALGAS_location & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBlockList (class GALGAS_pic_31__38_BlockInstructionBlockList inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockInstruction (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartBlockName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_block class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap inDeclaredRoutineMap,
           const class GALGAS_stringset inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mStartBlockName ;
  public: GALGAS_pic_31__38_BlockInstructionBlockList mProperty_mBlockList ;
  public: GALGAS_location mProperty_mEndOfBlockInstruction ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mStartBlockName,
                                                const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                const GALGAS_location & in_mEndOfBlockInstruction
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_block_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_block_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_block_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_block_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_block & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_block_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_block & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_block bang_pic_31__38_Instruction_5F_block_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_block_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_block_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_block_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_block_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AbstractCaseItem reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AbstractCaseItem : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AbstractCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_AbstractCaseItem (const class cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AbstractCaseItem extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_AbstractCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_AbstractCaseItem class


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
//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_lstring inConditionTrueLabel,
           const class GALGAS_string inIndexForLabels,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_caseConstantMap & ioCaseConstantMap,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_sint_36__34_ & ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AbstractCaseItem_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AbstractCaseItem_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AbstractCaseItem_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_AbstractCaseItem_2D_weak (const class GALGAS_pic_31__38_AbstractCaseItem & inSource) ;

  public: GALGAS_pic_31__38_AbstractCaseItem_2D_weak & operator = (const class GALGAS_pic_31__38_AbstractCaseItem & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_AbstractCaseItem bang_pic_31__38_AbstractCaseItem_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AbstractCaseItem_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_AbstractCaseItem_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_AbstractCaseItem_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_AbstractCaseItem_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                         Phase 1: @pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST enum                         *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_ADDWF,
    kEnum_ADDWFC,
    kEnum_ANDWF,
    kEnum_COMF,
    kEnum_DECF,
    kEnum_INCF,
    kEnum_IORWF,
    kEnum_MOVF,
    kEnum_RLCF,
    kEnum_RLNCF,
    kEnum_RRCF,
    kEnum_RRNCF,
    kEnum_SUBFWB,
    kEnum_SUBWF,
    kEnum_SUBWFB,
    kEnum_SWAPF,
    kEnum_XORWF
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWFC (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ANDWF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_COMF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_DECF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_INCF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_IORWF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_MOVF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLCF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLNCF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRCF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRNCF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBFWB (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWFB (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SWAPF (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDWFC (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRLCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRLNCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRRCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRRNCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBFWB (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBWFB (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_ADDWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ADDWFC () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ANDWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_COMF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_DECF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_INCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_IORWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RLCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RLNCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RRCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RRNCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SUBFWB () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SUBWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SUBWFB () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SWAPF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_XORWF () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FDA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FDA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FDA (const class cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FDA_5F_base_5F_code (class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bool & in_m_5F_W_5F_isDestination
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FDA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FDA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FDA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FDA bang_pic_31__38_Instruction_5F_FDA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @FA_5F_instruction_5F_base_5F_code enum                                  *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_FA_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_FA_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_CLRF,
    kEnum_CPFSEQ,
    kEnum_CPFSGT,
    kEnum_CPFSLT,
    kEnum_MOVWF,
    kEnum_MULWF,
    kEnum_NEGF,
    kEnum_SETF,
    kEnum_TSTFSZ
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_FA_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSEQ (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSGT (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSLT (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_MULWF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_NEGF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_SETF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSETF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_CLRF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_CPFSEQ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_CPFSGT () const ;

  public: VIRTUAL_IN_DEBUG bool optional_CPFSLT () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MULWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_NEGF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SETF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_TSTFSZ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_FA_5F_instruction_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FA (const class cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_FA_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FA constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                            const class GALGAS_registerExpression & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_FA_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FA class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_FA_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GALGAS_registerExpression & in_mRegisterExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FA_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FA bang_pic_31__38_Instruction_5F_FA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_MOVFF reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_MOVFF : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF (const class cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mSourceRegisterName (void) const ;

  public: class GALGAS_registerExpression readProperty_mDestinationRegisterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_MOVFF constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_registerExpression & inOperand1,
                                                                               const class GALGAS_registerExpression & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationRegisterName (class GALGAS_registerExpression inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceRegisterName (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MOVFF class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mSourceRegisterName ;
  public: GALGAS_registerExpression mProperty_mDestinationRegisterName ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_registerExpression & in_mSourceRegisterName,
                                                const GALGAS_registerExpression & in_mDestinationRegisterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_MOVFF_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_MOVFF & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_MOVFF & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF bang_pic_31__38_Instruction_5F_MOVFF_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @bit_5F_oriented_5F_op enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_BCF,
    kEnum_BSF,
    kEnum_BTG
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bit_5F_oriented_5F_op extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bit_5F_oriented_5F_op constructor_BCF (LOCATION_ARGS) ;

  public: static class GALGAS_bit_5F_oriented_5F_op constructor_BSF (LOCATION_ARGS) ;

  public: static class GALGAS_bit_5F_oriented_5F_op constructor_BTG (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bit_5F_oriented_5F_op & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBSF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBTG (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_BCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_BSF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_BTG () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bit_5F_oriented_5F_op class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FBA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FBA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FBA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FBA (const class cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FBA constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bitNumberExpression & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FBA class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FBA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FBA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FBA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FBA bang_pic_31__38_Instruction_5F_FBA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @conditional_5F_branch enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_conditional_5F_branch : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_conditional_5F_branch (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_bz,
    kEnum_bnz,
    kEnum_bn,
    kEnum_bnn,
    kEnum_bc,
    kEnum_bnc,
    kEnum_bov,
    kEnum_bnov
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_conditional_5F_branch extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_conditional_5F_branch constructor_bc (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bn (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bnc (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bnn (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bnov (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bnz (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bov (LOCATION_ARGS) ;

  public: static class GALGAS_conditional_5F_branch constructor_bz (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_conditional_5F_branch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnov (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnz (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBov (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBz (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_bc () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bn () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bnc () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bnn () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bnov () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bnz () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bov () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bz () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_conditional_5F_branch class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditional_5F_branch ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @jumpInstructionKind enum                                         *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_jumpInstructionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_jumpInstructionKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_ipicRelative,
    kEnum_relative,
    kEnum_absolute
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_jumpInstructionKind extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_jumpInstructionKind constructor_absolute (LOCATION_ARGS) ;

  public: static class GALGAS_jumpInstructionKind constructor_ipicRelative (LOCATION_ARGS) ;

  public: static class GALGAS_jumpInstructionKind constructor_relative (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_jumpInstructionKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAbsolute (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIpicRelative (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRelative (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_absolute () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ipicRelative () const ;

  public: VIRTUAL_IN_DEBUG bool optional_relative () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_jumpInstructionKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_jumpInstructionKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JSR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JSR : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_JSR (const class cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_jumpInstructionKind & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JSR class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap inDeclaredRoutineMap,
           const class GALGAS_stringset inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              const GALGAS_jumpInstructionKind & in_mKind
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JSR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_JSR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_JSR bang_pic_31__38_Instruction_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_macro reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_macro : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_macro (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_macro (const class cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMacroName (void) const ;

  public: class GALGAS_immediatExpressionList readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_macro extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_macro constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_immediatExpressionList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_immediatExpressionList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_macro class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mMacroName ;
  public: GALGAS_immediatExpressionList mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_macro (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mMacroName,
                                                const GALGAS_immediatExpressionList & in_mExpressionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_macro_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_macro_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_macro & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_macro & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_macro bang_pic_31__38_Instruction_5F_macro_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_macro_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_macro_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_macro_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMP : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_JUMP (const class cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_jumpInstructionKind & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMP class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               const GALGAS_jumpInstructionKind & in_mKind
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_JUMP bang_pic_31__38_Instruction_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMPCC : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC (const class cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;

  public: class GALGAS_bool readProperty_mIsBcc (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMPCC extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMPCC constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_conditional_5F_branch & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConditionalBranch (class GALGAS_conditional_5F_branch inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsBcc (class GALGAS_bool inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMPCC class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GALGAS_bool mProperty_mIsBcc ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                 const GALGAS_bool & in_mIsBcc
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC bang_pic_31__38_Instruction_5F_JUMPCC_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                Phase 1: @pic_31__38_InstructionWithNoOperandKind enum                               *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InstructionWithNoOperandKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InstructionWithNoOperandKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_CLRWDT,
    kEnum_DAW,
    kEnum_NOP,
    kEnum_POP,
    kEnum_PUSH,
    kEnum_RESET,
    kEnum_SLEEP
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InstructionWithNoOperandKind extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_CLRWDT (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_DAW (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_NOP (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_POP (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_PUSH (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_RESET (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDAW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPUSH (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRESET (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_CLRWDT () const ;

  public: VIRTUAL_IN_DEBUG bool optional_DAW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_NOP () const ;

  public: VIRTUAL_IN_DEBUG bool optional_POP () const ;

  public: VIRTUAL_IN_DEBUG bool optional_PUSH () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RESET () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SLEEP () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_InstructionWithNoOperandKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_withNoOperand reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_withNoOperand : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_withNoOperand (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_withNoOperand (const class cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_withNoOperand extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_withNoOperand constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_pic_31__38_InstructionWithNoOperandKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_withNoOperand class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_withNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_withNoOperand_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_withNoOperand & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_withNoOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_withNoOperand bang_pic_31__38_Instruction_5F_withNoOperand_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @literal_5F_instruction_5F_opcode enum                                   *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_ADDLW,
    kEnum_ANDLW,
    kEnum_IORLW,
    kEnum_MOVLW,
    kEnum_MULLW,
    kEnum_SUBLW,
    kEnum_XORLW
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literal_5F_instruction_5F_opcode extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_ADDLW (LOCATION_ARGS) ;

  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_ANDLW (LOCATION_ARGS) ;

  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_IORLW (LOCATION_ARGS) ;

  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_MOVLW (LOCATION_ARGS) ;

  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_MULLW (LOCATION_ARGS) ;

  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_SUBLW (LOCATION_ARGS) ;

  public: static class GALGAS_literal_5F_instruction_5F_opcode constructor_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMULLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_ADDLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ANDLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_IORLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MULLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SUBLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_XORLW () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literal_5F_instruction_5F_opcode class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_literalOperation : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_literalOperation (const class cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                          const class GALGAS_immediatExpression & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMImmediatExpression (class GALGAS_immediatExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLiteralInstruction (class GALGAS_literal_5F_instruction_5F_opcode inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_literalOperation class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                           const GALGAS_immediatExpression & in_mImmediatExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_literalOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_literalOperation & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_literalOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_literalOperation bang_pic_31__38_Instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_fnop reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_fnop : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_fnop (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_fnop (const class cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_fnop extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_fnop constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_immediatExpression & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMImmediatExpression (class GALGAS_immediatExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_fnop class


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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_fnop (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_immediatExpression & in_mImmediatExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mFSRindex (void) const ;

  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LFSR constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_luint & inOperand1,
                                                                              const class GALGAS_immediatExpression & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFSRindex (class GALGAS_luint inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImmediatExpression (class GALGAS_immediatExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mFSRindex ;
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LTBLPTR extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LTBLPTR constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMImmediatExpression (class GALGAS_immediatExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDataName (void) const ;

  public: class GALGAS_luint readProperty_mDataIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_luint & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDataIndex (class GALGAS_luint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: GALGAS_luint mProperty_mDataIndex ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDataName (void) const ;

  public: class GALGAS_luint readProperty_mDataIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_luint & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDataIndex (class GALGAS_luint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: GALGAS_luint mProperty_mDataIndex ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @tableAccessOption enum                                          *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_tableAccessOption : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_tableAccessOption (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_simpleAccess,
    kEnum_postIncrement,
    kEnum_postDecrement,
    kEnum_preIncrement
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_tableAccessOption extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableAccessOption constructor_postDecrement (LOCATION_ARGS) ;

  public: static class GALGAS_tableAccessOption constructor_postIncrement (LOCATION_ARGS) ;

  public: static class GALGAS_tableAccessOption constructor_preIncrement (LOCATION_ARGS) ;

  public: static class GALGAS_tableAccessOption constructor_simpleAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableAccessOption & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPostDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPostIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPreIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSimpleAccess (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_postDecrement () const ;

  public: VIRTUAL_IN_DEBUG bool optional_postIncrement () const ;

  public: VIRTUAL_IN_DEBUG bool optional_preIncrement () const ;

  public: VIRTUAL_IN_DEBUG bool optional_simpleAccess () const ;


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

//--------------------------------- Property read access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLRD constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_tableAccessOption & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_tableAccessOption inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLWT constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_tableAccessOption & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_tableAccessOption inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ipic_31__38_SequentialInstruction & outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_luint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_NOPBRA extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_NOPBRA constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_luint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_NOPBRA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                 const class GALGAS_location & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionList (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_stringset & ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GALGAS_uint inAccessBankSplitOffset,
           class GALGAS_ipic_31__38_BlockList & ioGeneratedBlockList,
           const class GALGAS_routineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_pic_31__38__5F_dataMap inDataMap,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_pic_31__38_MacroMap inMacroMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_ipic_31__38_SequentialInstructionList & ioGeneratedInstructionList,
           class GALGAS_lstring & ioBlockLabel,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioCurrentBank,
           const class GALGAS_bool inShouldPreserveBSR,
           const class GALGAS_routineKind inRoutineKind,
           class GALGAS_stringset & ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GALGAS_stringset inInlinedRoutineSet,
           const class GALGAS_declaredRoutineMap inDeclaredRoutineMap,
           const class GALGAS_stringset inCurrentlyInlinedRoutineSet,
           class GALGAS_pic_31__38_InstructionList & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstructionList ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

