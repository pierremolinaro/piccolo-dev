#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchOverflowMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchOverflowMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;

  public: GALGAS_stringlist mProperty_mList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_branchOverflowMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_branchOverflowMap_2D_element (const GALGAS_string & in_key,
                                               const GALGAS_stringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_branchOverflowMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchOverflowMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_stringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchOverflowMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @byteDeclarationInRam_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_byteDeclarationInRam_2D_weak : public GALGAS_declarationInRam_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_byteDeclarationInRam_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_byteDeclarationInRam_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_byteDeclarationInRam_2D_weak (const class GALGAS_byteDeclarationInRam & inSource) ;

  public: GALGAS_byteDeclarationInRam_2D_weak & operator = (const class GALGAS_byteDeclarationInRam & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_byteDeclarationInRam bang_byteDeclarationInRam_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_byteDeclarationInRam_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_byteDeclarationInRam_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_byteDeclarationInRam_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitDefinitionString (class GALGAS_string inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitSliceTable (class GALGAS_bitSliceTable inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMName (class GALGAS_lstring inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProtection (class GALGAS_registerProtection inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSizeExpression (class GALGAS_immediatExpression inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionString (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTable (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerProtection getter_mProtection (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mSizeExpression (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_byteDeclarationInRam_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatInteger_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatInteger_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatInteger_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatInteger_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatInteger_2D_weak (const class GALGAS_immediatInteger & inSource) ;

  public: GALGAS_immediatInteger_2D_weak & operator = (const class GALGAS_immediatInteger & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatInteger bang_immediatInteger_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatInteger_2D_weak extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatInteger_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatInteger_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatInteger_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSlice_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSlice_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatSlice_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatSlice_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatSlice_2D_weak (const class GALGAS_immediatSlice & inSource) ;

  public: GALGAS_immediatSlice_2D_weak & operator = (const class GALGAS_immediatSlice & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatSlice bang_immediatSlice_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSlice_2D_weak extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSlice_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatSlice_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegisterName (class GALGAS_lstring inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceExpressionList (class GALGAS_immediatSliceExpressionList inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatSliceExpressionList getter_mSliceExpressionList (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatSlice_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLabelValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLabelValue_2D_weak : public GALGAS_bitNumberExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLabelValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberLabelValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitNumberLabelValue_2D_weak (const class GALGAS_bitNumberLabelValue & inSource) ;

  public: GALGAS_bitNumberLabelValue_2D_weak & operator = (const class GALGAS_bitNumberLabelValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitNumberLabelValue bang_bitNumberLabelValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLabelValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLabelValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLabelValue_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumberIndexValue (class GALGAS_luint inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitNumberLabelValue (class GALGAS_lstring inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBitNumberIndexValue (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBitNumberLabelValue (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitNumberLabelValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_CALL_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (const class GALGAS_baseline_5F_instruction_5F_CALL & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_CALL bang_baseline_5F_instruction_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_instruction_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JSR_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (const class GALGAS_baseline_5F_instruction_5F_JSR & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_JSR bang_baseline_5F_instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (const class GALGAS_baseline_5F_instruction_5F_GOTO & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_GOTO bang_baseline_5F_instruction_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (const class GALGAS_baseline_5F_instruction_5F_JUMP & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_JUMP bang_baseline_5F_instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_TRIS_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (const class GALGAS_baseline_5F_instruction_5F_TRIS & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_TRIS & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_TRIS bang_baseline_5F_instruction_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_baseline_5F_instructionList inArgument0,
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

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionList (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mLowerBoundExpression (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mUpperBoundExpression (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_LABEL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_bool mProperty_mIsRegular ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                       const GALGAS_bool & in_mIsRegular
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_uint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_uint mProperty_mPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                     const GALGAS_uint & in_mPage
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
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_GOTO bang_baseline_5F_intermediate_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_JUMP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JUMP : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_JUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2,
                                                                                const class GALGAS_uint & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCurrentPage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetPage (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JUMP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_uint mProperty_mCurrentPage ;
  public: GALGAS_uint mProperty_mTargetPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_uint & in_mCurrentPage,
                                                 const GALGAS_uint & in_mTargetPage
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
// Phase 1: @baseline_5F_intermediate_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_JUMP bang_baseline_5F_intermediate_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCurrentPage (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetPage (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_CALL : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_CALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_CALL : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_intermediate_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_CALL & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_CALL bang_baseline_5F_intermediate_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JSR : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JSR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_JSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_uint & inOperand2,
                                                                               const class GALGAS_uint & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCurrentPage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetPage (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_uint mProperty_mCurrentPage ;
  public: GALGAS_uint mProperty_mTargetPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel,
                                                const GALGAS_uint & in_mCurrentPage,
                                                const GALGAS_uint & in_mTargetPage
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
// Phase 1: @baseline_5F_intermediate_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_JSR & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_JSR bang_baseline_5F_intermediate_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCurrentPage (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetPage (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_TRIS reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_TRIS : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_TRIS (const class cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOpcode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_TRIS class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_TRIS class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_TRIS : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mOperand ;
  public: GALGAS_uint mProperty_mOpcode ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mOperand,
                                                 const GALGAS_uint & in_mOpcode
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
// Phase 1: @baseline_5F_intermediate_5F_TRIS_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_TRIS bang_baseline_5F_intermediate_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOpcode (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) (const class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                                                                        const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeGOTO (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (const class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress (const class GALGAS_uint constinArgument0,
                                                             const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                             class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                             class GALGAS_stringset & outArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) (const class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                                                                        const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeJUMP (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL) (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                                        const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeCALL (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR) (const class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                                                                      const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                      const class GALGAS_uint constinArgument1,
                                                                                      class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                      class GALGAS_string & ioArgument3,
                                                                                      class GALGAS_bool & ioArgument4,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeJSR (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                                                                                          const class GALGAS_uint constinArgument0,
                                                                                                                          class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                          class GALGAS_string & ioArgument2,
                                                                                                                          class GALGAS_bool & ioArgument3,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeBEGIN_5F_ROUTINE (const int32_t inClassIndex,
                                                    extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const GALGAS_uint constin_inLineIndex,
                                                   GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   GALGAS_string & io_ioListFileContents,
                                                   GALGAS_bool & io_ioOptimizationsDone,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public GALGAS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_bool & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_bool mProperty_mIsRegular ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                 const GALGAS_bool & in_mIsRegular
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
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak : public GALGAS_baseline_5F_assembly_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (const class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE bang_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public GALGAS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_uint & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_uint mProperty_mPage ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_uint & in_mPage
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
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak : public GALGAS_baseline_5F_assembly_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (const class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE bang_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_LABEL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL : public GALGAS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_pseudo_LABEL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
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
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak : public GALGAS_baseline_5F_assembly_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (const class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL bang_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_GOTO reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_GOTO : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_GOTO constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_GOTO (const class cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_assembly_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_GOTO : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_assembly_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak : public GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (const class GALGAS_baseline_5F_assembly_5F_GOTO & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_GOTO bang_baseline_5F_assembly_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_CALL : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_CALL (const class cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_assembly_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_CALL : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_CALL (const GALGAS_location & in_mInstructionLocation,
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
// Phase 1: @baseline_5F_assembly_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_CALL_2D_weak : public GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (const class GALGAS_baseline_5F_assembly_5F_CALL & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_CALL_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_CALL bang_baseline_5F_assembly_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_baseline_5F_assembly_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_TRIS reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_TRIS : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_TRIS constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_TRIS (const class cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_uint & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOpcode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_TRIS class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_TRIS class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_TRIS : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mOperand ;
  public: GALGAS_uint mProperty_mOpcode ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mOperand,
                                             const GALGAS_uint & in_mOpcode
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
// Phase 1: @baseline_5F_assembly_5F_TRIS_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak : public GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (const class GALGAS_baseline_5F_assembly_5F_TRIS & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_TRIS & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_TRIS bang_baseline_5F_assembly_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOpcode (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT bang_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_midrange_5F_instructionList inArgument0,
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

  public: VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mLowerBoundExpression (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mUpperBoundExpression (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_CALL_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (const class GALGAS_midrange_5F_instruction_5F_CALL & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_CALL_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_CALL bang_midrange_5F_instruction_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_JSR_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (const class GALGAS_midrange_5F_instruction_5F_JSR & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_JSR_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_JSR bang_midrange_5F_instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (const class GALGAS_midrange_5F_instruction_5F_JUMP & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_JUMP bang_midrange_5F_instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak : public GALGAS_midrange_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (const class GALGAS_midrange_5F_instruction_5F_GOTO & inSource) ;

  public: GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak & operator = (const class GALGAS_midrange_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_instruction_5F_GOTO bang_midrange_5F_instruction_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsDeletable (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsDeletable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_pseudo_LABEL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: GALGAS_bool mProperty_mIsDeletable ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                            const GALGAS_bool & in_mIsDeletable
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
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak : public GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL bang_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsDeletable (class GALGAS_bool inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsDeletable (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak : public GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (const class GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) ;

  public: GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & operator = (const class GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_midrange_5F_intermediate_5F_JUMP bang_midrange_5F_intermediate_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & inOperand) const ;

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
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak ;

