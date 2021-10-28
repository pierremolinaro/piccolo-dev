#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_JumpTerminator_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_JumpTerminator_2D_weak : public GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_JumpTerminator_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ipic_31__38_JumpTerminator_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_JumpTerminator_2D_weak (const class GALGAS_ipic_31__38_JumpTerminator & inSource) ;

  public: GALGAS_ipic_31__38_JumpTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_JumpTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_JumpTerminator bang_ipic_31__38_JumpTerminator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_JumpTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_JumpTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind getter_mKind (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_JumpTerminator_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ConditionalJumpTerminator reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ConditionalJumpTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator (const class cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ConditionalJumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_conditional_5F_branch & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_conditionalBranchMode & inOperand3,
                                                                                     const class GALGAS_lstring & inOperand4,
                                                                                     const class GALGAS_conditionalBranchMode & inOperand5
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchModeOnFalseLabel (class GALGAS_conditionalBranchMode inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBranchModeOnTrueLabel (class GALGAS_conditionalBranchMode inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionalBranch (class GALGAS_conditional_5F_branch inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabelWhenFalse (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabelWhenTrue (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_conditionalBranchMode getter_mBranchModeOnFalseLabel (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_conditionalBranchMode getter_mBranchModeOnTrueLabel (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_conditional_5F_branch getter_mConditionalBranch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabelWhenFalse (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabelWhenTrue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ConditionalJumpTerminator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18ConditionalJumpTerminator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ConditionalJumpTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Properties
  public: GALGAS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GALGAS_lstring mProperty_mTargetLabelWhenTrue ;
  public: GALGAS_conditionalBranchMode mProperty_mBranchModeOnTrueLabel ;
  public: GALGAS_lstring mProperty_mTargetLabelWhenFalse ;
  public: GALGAS_conditionalBranchMode mProperty_mBranchModeOnFalseLabel ;

//--- Constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                      const GALGAS_lstring & in_mTargetLabelWhenTrue,
                                                      const GALGAS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                      const GALGAS_lstring & in_mTargetLabelWhenFalse,
                                                      const GALGAS_conditionalBranchMode & in_mBranchModeOnFalseLabel
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ConditionalJumpTerminator_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (const class GALGAS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

  public: GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator bang_ipic_31__38_ConditionalJumpTerminator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchModeOnFalseLabel (class GALGAS_conditionalBranchMode inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBranchModeOnTrueLabel (class GALGAS_conditionalBranchMode inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionalBranch (class GALGAS_conditional_5F_branch inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabelWhenFalse (class GALGAS_lstring inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabelWhenTrue (class GALGAS_lstring inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_conditionalBranchMode getter_mBranchModeOnFalseLabel (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_conditionalBranchMode getter_mBranchModeOnTrueLabel (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_conditional_5F_branch getter_mConditionalBranch (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabelWhenFalse (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabelWhenTrue (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonTerminator reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonTerminator (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_RegisterComparisonTerminator (const class cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterComparisonTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                       const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                       const class GALGAS_ipic_31__38_RegisterComparison & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_ipic_31__38_RegisterComparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_RegisterComparison getter_mComparison (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonTerminator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18RegisterComparisonTerminator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_ipic_31__38_RegisterComparison mProperty_mComparison ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                        const GALGAS_ipic_31__38_RegisterComparison & in_mComparison
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonTerminator_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (const class GALGAS_pic_31__38_RegisterComparisonTerminator & inSource) ;

  public: GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & operator = (const class GALGAS_pic_31__38_RegisterComparisonTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_RegisterComparisonTerminator bang_pic_31__38_RegisterComparisonTerminator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_ipic_31__38_RegisterComparison inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_RegisterComparison getter_mComparison (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_JSR : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR (const class cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_jumpInstructionKind & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_JSR : public cPtr_ipic_31__38_SequentialInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mTargetLabel,
                                                    const GALGAS_jumpInstructionKind & in_mKind
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR bang_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind getter_mKind (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W constructor_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                                 const class GALGAS_uint & inOperand2,
                                                                                                 const class GALGAS_uint & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOffset (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightShift (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOffset (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRightShift (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_MOV_LABEL_W class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public cPtr_ipic_31__38_SequentialInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: GALGAS_uint mProperty_mOffset ;
  public: GALGAS_uint mProperty_mRightShift ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mLabel,
                                                                  const GALGAS_uint & in_mOffset,
                                                                  const GALGAS_uint & in_mRightShift
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOffset (class GALGAS_uint inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightShift (class GALGAS_uint inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOffset (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRightShift (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_display (const class GALGAS_ipic_31__38_Block inObject,
                              const class GALGAS_string constin_inNextBlockLabel,
                              class GALGAS_string & io_ioListFileContents,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const class GALGAS_ipic_31__38_Block inObject,
                                            const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                            class GALGAS_stringset & io_ioReferencedBlockSet,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const class GALGAS_ipic_31__38_Block inObject,
                               const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                               const class GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                               const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                               class GALGAS_bool & io_ioOptimizationDone,
                               class GALGAS_string & io_ioListFileContents,
                               class GALGAS_ipic_31__38_Block & out_outOptimizedBlock,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_instructionListOptimization (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                          const class GALGAS_optimizeFlagStruct constinArgument1,
                                          const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                          const class GALGAS_ipic_31__38_SequentialInstructionList constinArgument3,
                                          const class GALGAS_lstring constinArgument4,
                                          class GALGAS_bool & outArgument5,
                                          class GALGAS_string & ioArgument6,
                                          class GALGAS_ipic_31__38_SequentialInstructionList & outArgument7,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const class GALGAS_ipic_31__38_Block inObject,
                                                 const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GALGAS_string constin_inNextBlockLabel,
                                                 const class GALGAS_uint constin_inBlockStartAddress,
                                                 class GALGAS_uint & io_ioConversionCount,
                                                 class GALGAS_string & io_ioListFileContents,
                                                 class GALGAS_ipic_31__38_Block & out_outModifiedBlock,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18Block blockSize' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_blockSize (const class GALGAS_ipic_31__38_Block & inObject,
                                             const class GALGAS_string & constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const class GALGAS_ipic_31__38_Block inObject,
                                             const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                             const class GALGAS_string constin_inNextBlockLabel,
                                             const class GALGAS_uint constin_inBlockStartAddress,
                                             class GALGAS_branchOverflowMap & io_ioOverflowMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateCodeForBlock (const class GALGAS_ipic_31__38_Block inObject,
                                           const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                           const class GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                           const class GALGAS_uint constin_inBlockAddress,
                                           const class GALGAS_string constin_inNextBlockLabel,
                                           class GALGAS_string & io_ioListFileContents,
                                           class GALGAS_string & io_ioAssemblyString,
                                           class GALGAS_generatedCodeMap & io_ioGeneratedCodeMap,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitCode (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateLineWithCode (const class GALGAS_uint constinArgument0,
                                   const class GALGAS_codeList constinArgument1,
                                   const class GALGAS_stringlist constinArgument2,
                                   const class GALGAS_uint constinArgument3,
                                   const class GALGAS_uint constinArgument4,
                                   class GALGAS_string & ioArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const class GALGAS_ipic_31__38_Block inObject,
                                      class GALGAS_blockDurationMap & io_ioExploredBlockMap,
                                      class GALGAS_string in_inNextLabel,
                                      class GALGAS_ipic_31__38_Block & out_outNewBlock,
                                      class GALGAS_bool & io_ioContinue,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR piccoloDevice_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_piccoloDevice_5F_grammar : public cParser_piccoloDevice_5F_syntax {
//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & outArgument0,
                                            C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_piccoloDeviceModel & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_piccoloDeviceModel & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_registerExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_registerExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_registerExpression_2D_weak (const class GALGAS_registerExpression & inSource) ;

  public: GALGAS_registerExpression_2D_weak & operator = (const class GALGAS_registerExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_registerExpression bang_registerExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_registerExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfOffsetExpression (class GALGAS_location inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOffset (class GALGAS_immediatExpression inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterName (class GALGAS_lstring inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfOffsetExpression (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mOffset (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRegister_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatRegister_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatRegister_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatRegister_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatRegister_2D_weak (const class GALGAS_immediatRegister & inSource) ;

  public: GALGAS_immediatRegister_2D_weak & operator = (const class GALGAS_immediatRegister & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatRegister bang_immediatRegister_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatRegister_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatRegister_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatRegister_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatRegister_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FD_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FD_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FD_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_FD_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_FD_2D_weak (const class GALGAS_baseline_5F_instruction_5F_FD & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_FD_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_FD bang_baseline_5F_instruction_5F_FD_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FD_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FD_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code inArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FD_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_F_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_F_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_F_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_F_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_F_2D_weak (const class GALGAS_baseline_5F_instruction_5F_F & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_F_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_F & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_F bang_baseline_5F_instruction_5F_F_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_F_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_F_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_F_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mFAinstruction (C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_F_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FB_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FB_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FB_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_FB_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_FB_2D_weak (const class GALGAS_baseline_5F_instruction_5F_FB & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_FB_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_FB bang_baseline_5F_instruction_5F_FB_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FB_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FB_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_baseline_5F_bit_5F_oriented_5F_op inArgument0,
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

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FB_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (const class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest bang_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_uint & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_string & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (const class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec bang_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak ;

