#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_incDecRegisterInCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak : public GALGAS_baseline_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (const class GALGAS_baseline_5F_incDecRegisterInCondition & inSource) ;

  public: GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak & operator = (const class GALGAS_baseline_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_incDecRegisterInCondition bang_baseline_5F_incDecRegisterInCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak : public GALGAS_baseline_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (const class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & operator = (const class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_resolveBaselineAccess) (const class cPtr_registerExpression * inObject,
                                                                                   const class GALGAS_registerTable constinArgument0,
                                                                                   const class GALGAS_constantMap constinArgument1,
                                                                                   class GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument2,
                                                                                   class GALGAS_bitSliceTable & outArgument3,
                                                                                   class GALGAS_stringset & ioArgument4,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_resolveBaselineAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveBaselineAccess inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (const class cPtr_registerExpression * inObject,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_banksel_5F_register_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (const class GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_banksel_5F_register bang_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarningOnUselessBanksel (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_savebank_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_savebank_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_savebank_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_savebank_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_savebank_2D_weak (const class GALGAS_midrange_5F_instruction_5F_savebank & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_savebank_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_savebank & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_savebank bang_midrange_5F_instruction_5F_savebank_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_savebank_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_savebank_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfSaveBankInstruction (class GALGAS_location inArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_midrange_5F_instructionList inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSaveBankInstruction (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_savebank_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FD_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FD_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_FD_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_FD_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_FD_2D_weak (const class GALGAS_midrange_5F_instruction_5F_FD & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_FD_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_FD bang_midrange_5F_instruction_5F_FD_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_FD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_FD_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FD_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inArgument0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FD_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_F_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_F_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_F_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_F_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_F_2D_weak (const class GALGAS_midrange_5F_instruction_5F_F & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_F_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_F & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_F bang_midrange_5F_instruction_5F_F_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_F_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_F_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_F_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code getter_mFAinstruction (C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_F_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FB_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FB_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_FB_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_FB_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_FB_2D_weak (const class GALGAS_midrange_5F_instruction_5F_FB & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_FB_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_FB bang_midrange_5F_instruction_5F_FB_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_FB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_FB_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FB_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_midrange_5F_bit_5F_oriented_5F_op inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FB_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (const class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest bang_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_uint & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_string & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (const class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec bang_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_incDecRegisterInCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak : public GALGAS_midrange_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak (const class GALGAS_midrange_5F_incDecRegisterInCondition & inSource) ;

  public: GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak & operator = (const class GALGAS_midrange_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_incDecRegisterInCondition bang_midrange_5F_incDecRegisterInCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak : public GALGAS_midrange_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (const class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

  public: GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & operator = (const class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveMidrangeAccess'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_resolveMidrangeAccess) (const class cPtr_registerExpression * inObject,
                                                                                   const class GALGAS_uint constinArgument0,
                                                                                   const class GALGAS_uint constinArgument1,
                                                                                   const class GALGAS_registerTable constinArgument2,
                                                                                   const class GALGAS_constantMap constinArgument3,
                                                                                   class GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument4,
                                                                                   class GALGAS_bitSliceTable & outArgument5,
                                                                                   class GALGAS_stringset & ioArgument6,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveMidrangeAccess inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (const class cPtr_registerExpression * inObject,
                                                const GALGAS_uint constin_inTotalBankCount,
                                                const GALGAS_uint constin_inCurrentBank,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register bang_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarningOnUselessBanksel (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_savebank_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_savebank & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_savebank & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_savebank bang_pic_31__38_Instruction_5F_savebank_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfSaveBankInstruction (class GALGAS_location inArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSaveBankInstruction (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FDA_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FDA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FDA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FDA bang_pic_31__38_Instruction_5F_FDA_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FDA_5F_base_5F_code (class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inArgument0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST getter_mInstruction_5F_FDA_5F_base_5F_code (C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FA_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FA_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_FA_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FA bang_pic_31__38_Instruction_5F_FA_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_FA_5F_instruction_5F_base_5F_code inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_FA_5F_instruction_5F_base_5F_code getter_mFAinstruction (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FA_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_MOVFF_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_MOVFF & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_MOVFF & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF bang_pic_31__38_Instruction_5F_MOVFF_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationRegisterName (class GALGAS_registerExpression inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceRegisterName (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mDestinationRegisterName (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mSourceRegisterName (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FBA_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_FBA & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_FBA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_FBA bang_pic_31__38_Instruction_5F_FBA_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_bit_5F_oriented_5F_op inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bit_5F_oriented_5F_op getter_mBitOrientedOp (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON bang_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpCode (class GALGAS_if_5F_semi_5F_colon_5F_op inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_if_5F_semi_5F_colon_5F_op getter_mOpCode (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest bang_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec bang_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfZero (class GALGAS_bool inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfZero (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterTestCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterTestCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterTestCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_RegisterTestCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_RegisterTestCondition_2D_weak (const class GALGAS_pic_31__38_RegisterTestCondition & inSource) ;

  public: GALGAS_pic_31__38_RegisterTestCondition_2D_weak & operator = (const class GALGAS_pic_31__38_RegisterTestCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_RegisterTestCondition bang_pic_31__38_RegisterTestCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterTestCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterTestCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterTestCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterTestCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (const class GALGAS_pic_31__38_RegisterComparisonCondition & inSource) ;

  public: GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak & operator = (const class GALGAS_pic_31__38_RegisterComparisonCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_RegisterComparisonCondition bang_pic_31__38_RegisterComparisonCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_pic_31__38_RegisterComparison inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RegisterComparison getter_mComparison (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_IncDecRegisterInCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (const class GALGAS_pic_31__38_IncDecRegisterInCondition & inSource) ;

  public: GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak & operator = (const class GALGAS_pic_31__38_IncDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_IncDecRegisterInCondition bang_pic_31__38_IncDecRegisterInCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BitTestInStructuredCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (const class GALGAS_pic_31__38_BitTestInStructuredCondition & inSource) ;

  public: GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak & operator = (const class GALGAS_pic_31__38_BitTestInStructuredCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_BitTestInStructuredCondition bang_pic_31__38_BitTestInStructuredCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_analyzeRegisterExpression) (const class cPtr_registerExpression * inObject,
                                                                                       const class GALGAS_uint constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       const class GALGAS_registerTable constinArgument2,
                                                                                       const class GALGAS_constantMap constinArgument3,
                                                                                       const class GALGAS_bool constinArgument4,
                                                                                       class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument5,
                                                                                       class GALGAS_bitSliceTable & outArgument6,
                                                                                       class GALGAS_stringset & ioArgument7,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_registerExpression_analyzeRegisterExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (const class cPtr_registerExpression * inObject,
                                                    const GALGAS_uint constin_inAccessBankSplitOffset,
                                                    const GALGAS_uint constin_inCurrentBank,
                                                    const GALGAS_registerTable constin_inRegisterTable,
                                                    const GALGAS_constantMap constin_inConstantMap,
                                                    const GALGAS_bool constin_inWriteAccess,
                                                    GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GALGAS_bitSliceTable & out_outBitSliceTable,
                                                    GALGAS_stringset & io_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) (const class cPtr_registerExpression * inObject,
                                                                                                          const class GALGAS_registerTable constinArgument0,
                                                                                                          const class GALGAS_constantMap constinArgument1,
                                                                                                          const class GALGAS_bool constinArgument2,
                                                                                                          class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument3,
                                                                                                          class GALGAS_stringset & ioArgument4,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                        extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const class cPtr_registerExpression * inObject,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       const GALGAS_bool constin_inWriteAccess,
                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression getRegisterAddress'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_getRegisterAddress) (const class cPtr_registerExpression * inObject,
                                                                                const class GALGAS_registerTable constinArgument0,
                                                                                const class GALGAS_constantMap constinArgument1,
                                                                                const class GALGAS_bool constinArgument2,
                                                                                class GALGAS_stringset & ioArgument3,
                                                                                class GALGAS_uint & outArgument4,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getRegisterAddress (const int32_t inClassIndex,
                                              extensionMethodSignature_registerExpression_getRegisterAddress inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (const class cPtr_registerExpression * inObject,
                                             const GALGAS_registerTable constin_inRegisterTable,
                                             const GALGAS_constantMap constin_inConstantMap,
                                             const GALGAS_bool constin_inWriteAccess,
                                             GALGAS_stringset & io_ioUsedRegisters,
                                             GALGAS_uint & out_outRegisterAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'initCodeGenerator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_initCodeGenerator (class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'setEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_setEmitAddress (const class GALGAS_uint constinArgument0,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'currentEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_currentEmitAddress (class GALGAS_uint & outArgument0,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitByte'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitByte (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'getGeneratedContents'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_getGeneratedContents (class GALGAS_string & outArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'get_C_ArrayImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayImplementation (const class GALGAS_string constinArgument0,
                                              class GALGAS_string & outArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'get_C_ArrayHeader'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayHeader (const class GALGAS_string constinArgument0,
                                      class GALGAS_string & outArgument1,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkCurrentEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress (const class GALGAS_uint constinArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition (const class GALGAS_constantMap constinArgument0,
                                              class GALGAS_string & ioArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_actualBuildConfig (const class GALGAS_configRegisterMap constinArgument0,
                                const class GALGAS_configDefinitionList constinArgument1,
                                class GALGAS_string & ioArgument2,
                                class GALGAS_actualConfigurationMap & outArgument3,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildConfig (const class GALGAS_configRegisterMap constinArgument0,
                          const class GALGAS_configDefinitionList constinArgument1,
                          class GALGAS_string & ioArgument2,
                          class GALGAS_actualConfigurationMap & outArgument3,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addBaselineUsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList (const class GALGAS_baseline_5F_instructionList constinArgument0,
                                                         class GALGAS_stringset & ioArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_baseline_5F_computeUsedRoutines (const class GALGAS_baseline_5F_routineDefinitionList & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyze_ram_sections'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyze_5F_ram_5F_sections (const class GALGAS_string constinArgument0,
                                         const class GALGAS_ramDefinitionList constinArgument1,
                                         const class GALGAS_constantMap constinArgument2,
                                         class GALGAS_stringset & ioArgument3,
                                         class GALGAS_ramBankTable & ioArgument4,
                                         const class GALGAS_registerTable constinArgument5,
                                         class GALGAS_string & ioArgument6,
                                         class GALGAS_registerTable & ioArgument7,
                                         class GALGAS_declaredByteMap & outArgument8,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code (const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument0,
                                                    const class GALGAS_actualConfigurationMap constinArgument1,
                                                    const class GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument2,
                                                    const class GALGAS_bitSliceTable constinArgument3,
                                                    class GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument4,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code (const class GALGAS_baseline_5F_assembly_5F_instructionList constinArgument0,
                                                  const class GALGAS_uint constinArgument1,
                                                  class GALGAS_string & ioArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleBaselineInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleBaselineInstructionList (const class GALGAS_uint constinArgument0,
                                            const class GALGAS_baseline_5F_instructionList constinArgument1,
                                            const class GALGAS_baselineRoutineMap constinArgument2,
                                            const class GALGAS_registerTable constinArgument3,
                                            const class GALGAS_constantMap constinArgument4,
                                            class GALGAS_uint & ioArgument5,
                                            class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument6,
                                            class GALGAS_string & ioArgument7,
                                            class GALGAS_bool & outArgument8,
                                            const class GALGAS_routineKind constinArgument9,
                                            const class GALGAS_bool constinArgument10,
                                            class GALGAS_stringset & ioArgument11,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition (const class GALGAS_lstring constinArgument0,
                                    class GALGAS_piccoloDeviceModel & outArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations (class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                   class GALGAS_string & ioArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

