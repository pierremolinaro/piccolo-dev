#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_GOTO bang_midrange_5F_intermediate_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_CALL : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_CALL (const class cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_CALL : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
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
// Phase 1: @midrange_5F_intermediate_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_CALL & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_CALL bang_midrange_5F_intermediate_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JSR : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_JSR (const class cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__31_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__32_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JSR : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
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
// Phase 1: @midrange_5F_intermediate_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_JSR & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_JSR bang_midrange_5F_intermediate_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBit_31__31_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBit_31__32_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__31_ (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__32_ (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) (const class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                                                                        const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeJUMP (const int32_t inClassIndex,
                                        extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) (const class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                                                                        const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeGOTO (const int32_t inClassIndex,
                                        extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique bang_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerBoundExpression (class GALGAS_immediatExpression inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperBoundExpression (class GALGAS_immediatExpression inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstruction (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mLowerBoundExpression (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mUpperBoundExpression (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gotoTerminationForBlockInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gotoTerminationForBlockInstruction_2D_weak : public GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_gotoTerminationForBlockInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gotoTerminationForBlockInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_gotoTerminationForBlockInstruction_2D_weak (const class GALGAS_gotoTerminationForBlockInstruction & inSource) ;

  public: GALGAS_gotoTerminationForBlockInstruction_2D_weak & operator = (const class GALGAS_gotoTerminationForBlockInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_gotoTerminationForBlockInstruction bang_gotoTerminationForBlockInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_gotoTerminationForBlockInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gotoTerminationForBlockInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gotoTerminationForBlockInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMNextBlock (class GALGAS_lstring inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNextBlock (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gotoTerminationForBlockInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @testTerminationForBlockInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testTerminationForBlockInstruction_2D_weak : public GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testTerminationForBlockInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_testTerminationForBlockInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testTerminationForBlockInstruction_2D_weak (const class GALGAS_testTerminationForBlockInstruction & inSource) ;

  public: GALGAS_testTerminationForBlockInstruction_2D_weak & operator = (const class GALGAS_testTerminationForBlockInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testTerminationForBlockInstruction bang_testTerminationForBlockInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testTerminationForBlockInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testTerminationForBlockInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testTerminationForBlockInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCondition (class GALGAS_pic_31__38_ConditionExpression inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFalseTermination (class GALGAS_abstractBlockTerminationForBlockInstruction inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTrueTermination (class GALGAS_abstractBlockTerminationForBlockInstruction inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression getter_mCondition (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mFalseTermination (C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mTrueTermination (C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testTerminationForBlockInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_block_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_block_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_block_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_block_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_block_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_block & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_block_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_block & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_block bang_pic_31__38_Instruction_5F_block_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_block_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_block_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_block_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBlockList (class GALGAS_pic_31__38_BlockInstructionBlockList inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockInstruction (class GALGAS_location inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartBlockName (class GALGAS_lstring inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_mBlockList (C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlockInstruction (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartBlockName (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_block_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak : public GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_JSR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_JSR bang_pic_31__38_Instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_macro_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_macro_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_macro_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_macro & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_macro & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_macro bang_pic_31__38_Instruction_5F_macro_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_macro_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_macro_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_immediatExpressionList inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroName (class GALGAS_lstring inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList getter_mExpressionList (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMacroName (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_macro_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_JUMP bang_pic_31__38_Instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC bang_pic_31__38_Instruction_5F_JUMPCC_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConditionalBranch (class GALGAS_conditional_5F_branch inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsBcc (class GALGAS_bool inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_conditional_5F_branch getter_mConditionalBranch (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsBcc (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR bang_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDataIndex (class GALGAS_luint inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataName (class GALGAS_lstring inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mDataIndex (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDataName (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR bang_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDataIndex (class GALGAS_luint inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataName (class GALGAS_lstring inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mDataIndex (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDataName (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_grammar : public cParser_pic_31__38__5F_syntax,
                                        public cParser_pic_31__38__5F_start_5F_symbol,
                                        public cParser_midrange_5F_syntax,
                                        public cParser_baseline_5F_syntax,
                                        public cParser_baseline_5F_program,
                                        public cParser_pic_31__38__5F_bootloader_5F_syntax,
                                        public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_expression_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_factor_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_term_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                          C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_instruction_5F_list_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                            GALGAS_labelMap & ioArgument1,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_routine_5F_definition_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                        GALGAS_baseline_5F_instruction & outArgument1,
                                                                        GALGAS_labelMap & ioArgument2,
                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                  GALGAS_labelMap & ioArgument1,
                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

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
                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public: virtual void nt_checkpic_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GALGAS_checkpicList & ioArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                        C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GALGAS_dataList & ioArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GALGAS_declarationInRam & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                           C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GALGAS_immediatExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                GALGAS_bool & ioArgument1,
                                                GALGAS_bool & ioArgument2,
                                                GALGAS_labelMap & ioArgument3,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GALGAS_bool & ioArgument1,
                                                    GALGAS_bool & ioArgument2,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_expression_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_factor_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_term_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                          C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_instruction_5F_list_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                            GALGAS_bool & ioArgument1,
                                                            GALGAS_bool & ioArgument2,
                                                            GALGAS_labelMap & ioArgument3,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_interrupt_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_interrupt_5F_definition_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                GALGAS_bool & ioArgument1,
                                                                GALGAS_bool & ioArgument2,
                                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_routine_5F_definition_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                              GALGAS_bool & ioArgument1,
                                                              GALGAS_bool & ioArgument2,
                                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_simple_5F_instruction_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                        GALGAS_midrange_5F_instruction & outArgument1,
                                                                        GALGAS_bool & ioArgument2,
                                                                        GALGAS_bool & ioArgument3,
                                                                        GALGAS_labelMap & ioArgument4,
                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_structured_5F_instruction_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                  GALGAS_bool & ioArgument1,
                                                                  GALGAS_bool & ioArgument2,
                                                                  GALGAS_labelMap & ioArgument3,
                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                        C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'parse_bootloader' non terminal
//--- 'parse' label
  public: virtual void nt_parse_5F_bootloader_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_parse_5F_bootloader_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_parse_5F_bootloader_ (GALGAS_lstring & outArgument0,
                                                GALGAS_lstring & outArgument1,
                                                GALGAS_routineDeclarationList & outArgument2,
                                                GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                GALGAS_luint & outArgument4,
                                                GALGAS_routineDeclarationList & outArgument5,
                                                GALGAS_ramDefinitionList & outArgument6,
                                                GALGAS_string & outArgument7,
                                                GALGAS_piccoloDeviceModel & outArgument8,
                                                GALGAS_uint & outArgument9,
                                                GALGAS_ramBankTable & outArgument10,
                                                GALGAS_registerTable & outArgument11,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_declaration_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_declaration_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_declaration_ (GALGAS_routineDeclarationList & ioArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GALGAS_bool & ioArgument1,
                                                  GALGAS_bool & ioArgument2,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
  public: virtual void nt_section_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_section_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_section_5F_list_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                            GALGAS_lstringlist & ioArgument1,
                                            GALGAS_ramDefinitionList & ioArgument2,
                                            GALGAS_lstringlist & ioArgument3,
                                            GALGAS_configDefinitionList & ioArgument4,
                                            GALGAS_constantDefinitionList & ioArgument5,
                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString
                                                    COMMA_LOCATION_ARGS) ;

//----------- 'importBootloaderSpecification' label
  public: virtual void nt_start_5F_symbol_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                         GALGAS_string & outArgument1,
                                                                         GALGAS_uint & outArgument2,
                                                                         GALGAS_ramBankTable & outArgument3,
                                                                         GALGAS_registerTable & outArgument4,
                                                                         GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                         GALGAS_routineDeclarationList & outArgument6,
                                                                         GALGAS_routineDeclarationList & outArgument7,
                                                                         GALGAS_luint & outArgument8,
                                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_importBootloaderSpecification (C_Compiler * inCompiler,
                                                                               GALGAS_lstring inFileName,
                                                                               GALGAS_piccoloDeviceModel & outArgument0,
                                                                               GALGAS_string & outArgument1,
                                                                               GALGAS_uint & outArgument2,
                                                                               GALGAS_ramBankTable & outArgument3,
                                                                               GALGAS_registerTable & outArgument4,
                                                                               GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                               GALGAS_routineDeclarationList & outArgument6,
                                                                               GALGAS_routineDeclarationList & outArgument7,
                                                                               GALGAS_luint & outArgument8
                                                                               COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_importBootloaderSpecification (C_Compiler * inCompiler,
                                                                                 GALGAS_string inSourceString,
                                                                                 GALGAS_string inNameString,
                                                                                 GALGAS_piccoloDeviceModel & outArgument0,
                                                                                 GALGAS_string & outArgument1,
                                                                                 GALGAS_uint & outArgument2,
                                                                                 GALGAS_ramBankTable & outArgument3,
                                                                                 GALGAS_registerTable & outArgument4,
                                                                                 GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                 GALGAS_routineDeclarationList & outArgument6,
                                                                                 GALGAS_routineDeclarationList & outArgument7,
                                                                                 GALGAS_luint & outArgument8
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

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GALGAS_bool & ioArgument2,
                                                            GALGAS_bool & ioArgument3,
                                                            GALGAS_labelMap & ioArgument4,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GALGAS_bool & ioArgument1,
                                                      GALGAS_bool & ioArgument2,
                                                      GALGAS_labelMap & ioArgument3,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_38 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_39 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_40 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_41 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_42 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_43 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_44 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_45 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_46 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_47 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_48 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_49 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_50 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_51 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_52 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_53 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_54 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_55 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_56 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_57 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_58 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_59 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_60 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_61 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_62 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_63 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_64 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_7 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_8 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_9 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_10 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_11 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_12 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_13 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_14 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_15 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_16 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_17 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_18 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_19 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_20 (C_Lexique_piccolo_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
