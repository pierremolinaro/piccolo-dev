#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_MNOP class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_MNOP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_luint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_MNOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_MNOP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_MNOP : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FOREVER class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FOREVER : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FOREVER * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                   const class GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionList (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_midrange_5F_instructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FOREVER class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_FOREVER class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FOREVER : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_midrange_5F_instructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionList (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_midrange_5F_instruction inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_IF_SEMI_COLON class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction mProperty_mInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstruction (GALGAS_midrange_5F_instruction inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_conditionExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_conditionExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_midrange_5F_conditionExpression (void) ;

//---
  public : inline const class cPtr_midrange_5F_conditionExpression * ptr (void) const { return (const cPtr_midrange_5F_conditionExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_conditionExpression (const cPtr_midrange_5F_conditionExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_conditionExpression extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_conditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_conditionExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_conditionExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_conditionExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_conditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_negateCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_negateCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_negateCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_negateCondition * ptr (void) const { return (const cPtr_midrange_5F_negateCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_negateCondition extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_negateCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCondition (class GALGAS_midrange_5F_conditionExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_negateCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_negateCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_negateCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mProperty_mCondition ;

//--- Constructor
  public : cPtr_midrange_5F_negateCondition (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCondition (GALGAS_midrange_5F_conditionExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_andCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_andCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_andCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_andCondition * ptr (void) const { return (const cPtr_midrange_5F_andCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_andCondition extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_andCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                         const class GALGAS_midrange_5F_conditionExpression & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_midrange_5F_conditionExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_midrange_5F_conditionExpression inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_andCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_andCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_andCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mProperty_mLeftExpression ;
  public : GALGAS_midrange_5F_conditionExpression mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_midrange_5F_andCondition (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                          const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_midrange_5F_conditionExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_midrange_5F_conditionExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_structured_5F_if class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_structured_5F_if : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_structured_5F_if * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_midrange_5F_conditionExpression & inOperand1,
                                                                                            const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                                            const class GALGAS_midrange_5F_instructionList & inOperand3,
                                                                                            const class GALGAS_location & inOperand4
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_midrange_5F_instructionList inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfElsePartLocation (class GALGAS_location inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIfCondition (class GALGAS_midrange_5F_conditionExpression inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMThenInstructionList (class GALGAS_midrange_5F_instructionList inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_structured_5F_if class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_structured_if class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_structured_5F_if : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mProperty_mIfCondition ;
  public : GALGAS_midrange_5F_instructionList mProperty_mThenInstructionList ;
  public : GALGAS_midrange_5F_instructionList mProperty_mElseInstructionList ;
  public : GALGAS_location mProperty_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                             const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                             const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                             const GALGAS_location & in_mEndOfElsePartLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIfCondition (GALGAS_midrange_5F_conditionExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMThenInstructionList (GALGAS_midrange_5F_instructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (GALGAS_midrange_5F_instructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfElsePartLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_partList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_partList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_partList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_partList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                  const class GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfPartLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_partList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_partList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_partList constructor_listWithValue (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                               const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                               const class GALGAS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_midrange_5F_partList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                      const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_partList add_operation (const GALGAS_midrange_5F_partList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_midrange_5F_partList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_midrange_5F_conditionExpression constinArgument0,
                                                       class GALGAS_midrange_5F_instructionList constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                  class GALGAS_midrange_5F_instructionList & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                 class GALGAS_midrange_5F_instructionList & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                       class GALGAS_midrange_5F_instructionList & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GALGAS_midrange_5F_conditionExpression constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GALGAS_location constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_midrange_5F_instructionList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                               class GALGAS_midrange_5F_instructionList & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                              class GALGAS_midrange_5F_instructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_partList ;
 
} ; // End of GALGAS_midrange_5F_partList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_partList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_partList (const GALGAS_midrange_5F_partList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_midrange_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public : class GALGAS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_partList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_partList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_partList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_midrange_5F_conditionExpression mProperty_mCondition ;

  public : GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;

  public : GALGAS_location mProperty_mEndOfPartLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_partList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_partList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_partList_2D_element (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                   const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_partList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_partList_2D_element constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_partList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_partList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_do_5F_while class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_do_5F_while : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_do_5F_while (const cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                       const class GALGAS_location & inOperand2,
                                                                                       const class GALGAS_midrange_5F_partList & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfRepeatedInstructionList (class GALGAS_location inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRepeatedInstructionList (class GALGAS_midrange_5F_instructionList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWhilePartList (class GALGAS_midrange_5F_partList inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_do_5F_while class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_do_while class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_do_5F_while : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instructionList mProperty_mRepeatedInstructionList ;
  public : GALGAS_location mProperty_mEndOfRepeatedInstructionList ;
  public : GALGAS_midrange_5F_partList mProperty_mWhilePartList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                        const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRepeatedInstructionList (GALGAS_midrange_5F_instructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfRepeatedInstructionList (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMWhilePartList (GALGAS_midrange_5F_partList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_interruptDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_interruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_interruptDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_interruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_location & in_mInterruptLocation,
                                                  const class GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_lstring & in_mFirstSaveRegister,
                                                  const class GALGAS_lstring & in_mSecondSaveRegister,
                                                  const class GALGAS_location & in_mEndOfInterruptLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_interruptDefinitionList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_interruptDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_interruptDefinitionList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2,
                                                                                              const class GALGAS_lstring & inOperand3,
                                                                                              const class GALGAS_location & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_midrange_5F_interruptDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_interruptDefinitionList add_operation (const GALGAS_midrange_5F_interruptDefinitionList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_midrange_5F_interruptDefinitionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                       class GALGAS_midrange_5F_instructionList constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                  class GALGAS_midrange_5F_instructionList & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                 class GALGAS_midrange_5F_instructionList & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                       class GALGAS_midrange_5F_instructionList & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GALGAS_location constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFirstSaveRegisterAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_midrange_5F_instructionList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInterruptLocationAtIndex (class GALGAS_location constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSecondSaveRegisterAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                               class GALGAS_midrange_5F_instructionList & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                              class GALGAS_midrange_5F_instructionList & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFirstSaveRegisterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSecondSaveRegisterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_interruptDefinitionList ;
 
} ; // End of GALGAS_midrange_5F_interruptDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_interruptDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_interruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public : class GALGAS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_interruptDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_interruptDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_interruptDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_location mProperty_mInterruptLocation ;

  public : GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;

  public : GALGAS_lstring mProperty_mFirstSaveRegister ;

  public : GALGAS_lstring mProperty_mSecondSaveRegister ;

  public : GALGAS_location mProperty_mEndOfInterruptLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_interruptDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_interruptDefinitionList_2D_element (const GALGAS_location & in_mInterruptLocation,
                                                                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                  const GALGAS_lstring & in_mFirstSaveRegister,
                                                                  const GALGAS_lstring & in_mSecondSaveRegister,
                                                                  const GALGAS_location & in_mEndOfInterruptLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_interruptDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_interruptDefinitionList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
                                                                                               const class GALGAS_lstring & inOperand3,
                                                                                               const class GALGAS_location & inOperand4
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInterruptLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFirstSaveRegister (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInterruptLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSecondSaveRegister (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_interruptDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_routineDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_routineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_routineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRoutineName,
                                                  const class GALGAS_luint & in_mPage,
                                                  const class GALGAS_luint & in_mRequiredBank,
                                                  const class GALGAS_luint & in_mReturnedBank,
                                                  const class GALGAS_bool & in_mPreservesBank,
                                                  const class GALGAS_bool & in_mIsNoReturn,
                                                  const class GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfRoutineLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_routineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_routineDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_routineDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_luint & inOperand1,
                                                                                            const class GALGAS_luint & inOperand2,
                                                                                            const class GALGAS_luint & inOperand3,
                                                                                            const class GALGAS_bool & inOperand4,
                                                                                            const class GALGAS_bool & inOperand5,
                                                                                            const class GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                            const class GALGAS_location & inOperand7
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_midrange_5F_routineDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_luint & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_bool & inOperand5,
                                                      const class GALGAS_midrange_5F_instructionList & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_routineDefinitionList add_operation (const GALGAS_midrange_5F_routineDefinitionList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_midrange_5F_routineDefinitionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_luint constinArgument1,
                                                       class GALGAS_luint constinArgument2,
                                                       class GALGAS_luint constinArgument3,
                                                       class GALGAS_bool constinArgument4,
                                                       class GALGAS_bool constinArgument5,
                                                       class GALGAS_midrange_5F_instructionList constinArgument6,
                                                       class GALGAS_location constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  class GALGAS_luint & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_bool & outArgument5,
                                                  class GALGAS_midrange_5F_instructionList & outArgument6,
                                                  class GALGAS_location & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_luint & outArgument2,
                                                 class GALGAS_luint & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_bool & outArgument5,
                                                 class GALGAS_midrange_5F_instructionList & outArgument6,
                                                 class GALGAS_location & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_luint & outArgument1,
                                                       class GALGAS_luint & outArgument2,
                                                       class GALGAS_luint & outArgument3,
                                                       class GALGAS_bool & outArgument4,
                                                       class GALGAS_bool & outArgument5,
                                                       class GALGAS_midrange_5F_instructionList & outArgument6,
                                                       class GALGAS_location & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_midrange_5F_instructionList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GALGAS_bool constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPageAtIndex (class GALGAS_luint constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GALGAS_luint constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GALGAS_luint constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_luint & outArgument2,
                                               class GALGAS_luint & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               class GALGAS_bool & outArgument5,
                                               class GALGAS_midrange_5F_instructionList & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_luint & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_bool & outArgument5,
                                              class GALGAS_midrange_5F_instructionList & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_routineDefinitionList ;
 
} ; // End of GALGAS_midrange_5F_routineDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_routineDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_routineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mPage (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public : class GALGAS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_routineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_routineDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_routineDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mRoutineName ;

  public : GALGAS_luint mProperty_mPage ;

  public : GALGAS_luint mProperty_mRequiredBank ;

  public : GALGAS_luint mProperty_mReturnedBank ;

  public : GALGAS_bool mProperty_mPreservesBank ;

  public : GALGAS_bool mProperty_mIsNoReturn ;

  public : GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;

  public : GALGAS_location mProperty_mEndOfRoutineLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_routineDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_routineDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_routineDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_routineDefinitionList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                                const GALGAS_luint & in_mPage,
                                                                const GALGAS_luint & in_mRequiredBank,
                                                                const GALGAS_luint & in_mReturnedBank,
                                                                const GALGAS_bool & in_mPreservesBank,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                const GALGAS_location & in_mEndOfRoutineLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_routineDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_routineDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_luint & inOperand1,
                                                                                             const class GALGAS_luint & inOperand2,
                                                                                             const class GALGAS_luint & inOperand3,
                                                                                             const class GALGAS_bool & inOperand4,
                                                                                             const class GALGAS_bool & inOperand5,
                                                                                             const class GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                             const class GALGAS_location & inOperand7
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_routineDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_registerExpression struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mAssemblyString ;

  public : GALGAS_uint mProperty_mRegisterAddress ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                  const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_registerExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction (const cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_intermediate_instructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_intermediate_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_intermediate_5F_instructionList constructor_listWithValue (const class GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_midrange_5F_intermediate_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_instructionList add_operation (const GALGAS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_intermediate_5F_instructionList ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_intermediate_5F_instructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_midrange_5F_intermediate_5F_instruction mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (const GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element constructor_new (const class GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_NULL class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_NULL : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_NULL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_NULL * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_NULL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_NULL (const cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_NULL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_NULL constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_NULL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_NULL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_NULL : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_NULL (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG constructor_new (const class GALGAS_uint & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOrigin (class GALGAS_uint inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOrigin (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_pseudo_ORG class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_uint mProperty_mOrigin ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mOrigin (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOrigin (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_actualInstruction : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_actualInstruction (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_actualInstruction * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_actualInstruction (const cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_actualInstruction extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_actualInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_actualInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_actualInstruction : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                              const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GALGAS_bool & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_FD class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                               const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_F : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_F * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                             const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFinstruction (class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code getter_mFinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_F class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_F class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_F : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFinstruction ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                              const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code getter_mFinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFinstruction (GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                              const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GALGAS_uint & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_midrange_5F_bit_5F_oriented_5F_op inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_FB class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                               const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_uint & in_mBitNumber
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (GALGAS_midrange_5F_bit_5F_oriented_5F_op inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBitNumber (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1,
                                                                                                       const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                       const class GALGAS_uint & inOperand3
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_BitTestSkip class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_bool mProperty_mSkipIfSet ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bool & in_mSkipIfSet,
                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GALGAS_uint & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBitNumber (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                    Phase 1: @midrange_5F_call_5F_goto_5F_bit enum                                   *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_call_5F_goto_5F_bit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_set,
    kEnum_clear,
    kEnum_noChange
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_call_5F_goto_5F_bit extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_clear (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_noChange (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_set (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClear (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoChange (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSet (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_clear () const ;

  public : VIRTUAL_IN_DEBUG bool optional_noChange () const ;

  public : VIRTUAL_IN_DEBUG bool optional_set () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_call_5F_goto_5F_bit class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT constructor_new (const class GALGAS_location & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRWDT class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW constructor_new (const class GALGAS_location & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRW class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP constructor_new (const class GALGAS_location & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_NOP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN constructor_new (const class GALGAS_location & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_RETURN class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GALGAS_location & in_mInstructionLocation
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE constructor_new (const class GALGAS_location & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_RETFIE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GALGAS_location & in_mInstructionLocation
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP constructor_new (const class GALGAS_location & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_SLEEP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                            const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                            const class GALGAS_uint & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInstruction (class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLiteralValue (class GALGAS_uint inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_literalOperation class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public : GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                             const GALGAS_uint & in_mLiteralValue
                                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInstruction (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralValue (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_luint & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_instruction_MNOP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                      const class GALGAS_string & inOperand2,
                                                                                                      const class GALGAS_bool & inOperand3,
                                                                                                      const class GALGAS_bool & inOperand4,
                                                                                                      const class GALGAS_bool & inOperand5
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_midrange_5F_intermediate_5F_registerExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_incDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_string mProperty_mTargetLabel ;
  public : GALGAS_bool mProperty_mIncrement ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_string & in_mTargetLabel,
                                                                       const GALGAS_bool & in_mIncrement,
                                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                       const GALGAS_bool & in_mBranchIfZero
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIncrement (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_addUsedRoutines) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                  class GALGAS_stringset & ioArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addUsedRoutines (const int32_t inClassIndex,
                                           extensionMethodSignature_midrange_5F_instruction_addUsedRoutines inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (const class cPtr_midrange_5F_instruction * inObject,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_uint (*enterExtensionGetter_midrange_5F_intermediate_5F_instruction_instructionLength) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_instructionLength (const int32_t inClassIndex,
                                             enterExtensionGetter_midrange_5F_intermediate_5F_instruction_instructionLength inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint callExtensionGetter_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_print) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                        class GALGAS_string & ioArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_print (const int32_t inClassIndex,
                                 extensionMethodSignature_midrange_5F_intermediate_5F_instruction_print inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_print (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                    class GALGAS_uint & ioArgument0,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_setCurrentAddress (const int32_t inClassIndex,
                                             extensionMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_uint & io_ioCurrentAddress,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction instructionUsesGOTOorCALL'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                            class GALGAS_bool & ioArgument0,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_instructionUsesGOTOorCALL (const int32_t inClassIndex,
                                                     extensionMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionUsesGOTOorCALL (const class cPtr_midrange_5F_instruction * inObject,
                                                    GALGAS_bool & io_ioUsesGOTOorCALL,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction build_midrange_ipic_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                                               const class GALGAS_routineMap constinArgument0,
                                                                                                               const class GALGAS_registerTable constinArgument1,
                                                                                                               const class GALGAS_constantMap constinArgument2,
                                                                                                               class GALGAS_uint & ioArgument3,
                                                                                                               class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument4,
                                                                                                               class GALGAS_string & ioArgument5,
                                                                                                               const class GALGAS_uint constinArgument6,
                                                                                                               class GALGAS_uint & ioArgument7,
                                                                                                               const class GALGAS_bool constinArgument8,
                                                                                                               class GALGAS_bool & ioArgument9,
                                                                                                               const class GALGAS_routineKind constinArgument10,
                                                                                                               class GALGAS_stringset & ioArgument11,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (const int32_t inClassIndex,
                                                                        extensionMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (const class cPtr_midrange_5F_instruction * inObject,
                                                                       const GALGAS_routineMap constin_inRoutineMap,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       GALGAS_uint & io_ioLocalLabelIndex,
                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                       GALGAS_string & io_ioListFileContents,
                                                                       const GALGAS_uint constin_inTotalBankCount,
                                                                       GALGAS_uint & io_ioCurrentBank,
                                                                       const GALGAS_bool constin_inShouldPreserveBank,
                                                                       GALGAS_bool & io_ioContinuesInSequence,
                                                                       const GALGAS_routineKind constin_inRoutineKind,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression buildIPICinstructionForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition) (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                           const class GALGAS_uint constinArgument0,
                                                                                                           const class GALGAS_uint constinArgument1,
                                                                                                           const class GALGAS_registerTable constinArgument2,
                                                                                                           const class GALGAS_constantMap constinArgument3,
                                                                                                           class GALGAS_uint & ioArgument4,
                                                                                                           const class GALGAS_bool constinArgument5,
                                                                                                           const class GALGAS_location constinArgument6,
                                                                                                           const class GALGAS_string constinArgument7,
                                                                                                           class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument8,
                                                                                                           class GALGAS_string & ioArgument9,
                                                                                                           class GALGAS_stringset & ioArgument10,
                                                                                                           class C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildIPICinstructionForCondition (const int32_t inClassIndex,
                                                            extensionMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildIPICinstructionForCondition (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                           const GALGAS_uint constin_inTotalBankCount,
                                                           const GALGAS_uint constin_inCurrentBank,
                                                           const GALGAS_registerTable constin_inRegisterTable,
                                                           const GALGAS_constantMap constin_inConstantMap,
                                                           GALGAS_uint & io_ioLocalLabelIndex,
                                                           const GALGAS_bool constin_inComplementaryBranch,
                                                           const GALGAS_location constin_inInstructionLocation,
                                                           const GALGAS_string constin_inTargetLabel,
                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                           GALGAS_string & io_ioListFileContents,
                                                           GALGAS_stringset & io_ioUsedRegisters,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression computeInstructionCountForCondition'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition) (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                              const class GALGAS_bool constinArgument0,
                                                                                                              class GALGAS_uint & outArgument1,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeInstructionCountForCondition (const int32_t inClassIndex,
                                                               extensionMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionCountForCondition (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                              const GALGAS_bool constin_inComplementaryBranch,
                                                              GALGAS_uint & out_outInstructionCount,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isLABELorORG'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isLABELorORG (const int32_t inClassIndex,
                                        enterExtensionGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isNULL'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_midrange_5F_intermediate_5F_instruction_isNULL) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isNULL (const int32_t inClassIndex,
                                  enterExtensionGetter_midrange_5F_intermediate_5F_instruction_isNULL inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       class GALGAS_stringset & ioArgument0,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterReferencedLabel (const int32_t inClassIndex,
                                                extensionMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_stringset & io_ioReferencedLabelSet,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isSkippingInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isSkippingInstruction (const int32_t inClassIndex,
                                                 enterExtensionGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_nextInstructionIsReachable (const int32_t inClassIndex,
                                                      enterExtensionGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabel'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                              class GALGAS_symbolTableForOptimizations & ioArgument0,
                                                                                              const class GALGAS_uint constinArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_defineLabel (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                      GALGAS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW) (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                                                                                                    const class GALGAS_uint constinArgument0,
                                                                                                                    class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                    class GALGAS_string & ioArgument2,
                                                                                                                    class GALGAS_bool & ioArgument3,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeMOVLW (const int32_t inClassIndex,
                                         extensionMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeMOVLW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                        const GALGAS_uint constin_inLineIndex,
                                        GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                        GALGAS_string & io_ioListFileContents,
                                        GALGAS_bool & io_ioOptimizationsDone,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress (const class GALGAS_uint constinArgument0,
                                                      const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                      class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                                   const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                                                   const class GALGAS_uint constinArgument1,
                                                                                                                   class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                                                   class GALGAS_string & ioArgument3,
                                                                                                                   class GALGAS_bool & ioArgument4,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                              extensionMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_GOTO : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_GOTO * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_GOTO : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_intermediate_5F_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_intermediate_5F_JUMP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_JUMP (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_JUMP * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                                 const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBit_31__31_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBit_31__32_ (class GALGAS_midrange_5F_call_5F_goto_5F_bit inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__31_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_intermediate_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JUMP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel,
                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__31_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBit_31__31_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_call_5F_goto_5F_bit getter_mBit_31__32_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBit_31__32_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip) (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                                                                                                     const class GALGAS_uint constinArgument0,
                                                                                                                     class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                     class GALGAS_string & ioArgument2,
                                                                                                                     class GALGAS_bool & ioArgument3,
                                                                                                                     class C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeBitTestSkip (const int32_t inClassIndex,
                                               extensionMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBitTestSkip (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                              const GALGAS_uint constin_inLineIndex,
                                              GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                              GALGAS_string & io_ioListFileContents,
                                              GALGAS_bool & io_ioOptimizationsDone,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress (const class GALGAS_uint constinArgument0,
                                                             const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                             class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                             class GALGAS_stringset & outArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_symbolTableForConvertingRelatives map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTableForConvertingRelatives ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_midrange_5F_symbolTableForConvertingRelatives_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_symbolTableForConvertingRelatives : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--------------------------------- Handle copy
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives & operator = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_symbolTableForConvertingRelatives constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_symbolTableForConvertingRelatives constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_symbolTableForConvertingRelatives & inOperand0
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_symbolTableForConvertingRelatives getter_overriddenMap (C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTableForConvertingRelatives * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                           const GALGAS_string & inKey
                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
 
} ; // End of GALGAS_midrange_5F_symbolTableForConvertingRelatives class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_symbolTableForConvertingRelatives : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@midrange_symbolTableForConvertingRelatives' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTableForConvertingRelatives : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mRoutineAddress ;

//--- Constructor
  public : cMapElement_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_lstring & inKey,
                                                                      const GALGAS_uint & in_mRoutineAddress
                                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mRoutineAddress ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & in_lkey,
                                                                            const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_uint & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddress (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       class GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument0,
                                                                                                       class GALGAS_uint & ioArgument1,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_defineLabelAtAddress (const int32_t inClassIndex,
                                                extensionMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               GALGAS_uint & io_ioAddress,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_compute) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const class GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument0,
                                                                                          class GALGAS_uint & ioArgument1,
                                                                                          class GALGAS_bool & ioArgument2,
                                                                                          class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument3,
                                                                                          const class GALGAS_uint constinArgument4,
                                                                                          class GALGAS_string & ioArgument5,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_compute (const int32_t inClassIndex,
                                   extensionMethodSignature_midrange_5F_intermediate_5F_instruction_compute inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const GALGAS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  GALGAS_uint & io_ioAddress,
                                  GALGAS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const GALGAS_uint constin_inIndex,
                                  GALGAS_string & io_ioListFileContents,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                    class GALGAS_string & ioArgument0,
                                                                                                    class GALGAS_uint & ioArgument1,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildAssemblyCode (const int32_t inClassIndex,
                                             extensionMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_string & io_ioString,
                                            GALGAS_uint & io_ioLocalLabelIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_symbolTable map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTable ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_midrange_5F_symbolTable_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_symbolTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inSource) ;
  public : GALGAS_midrange_5F_symbolTable & operator = (const GALGAS_midrange_5F_symbolTable & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTable extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_symbolTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_symbolTable constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_symbolTable & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_symbolTable getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_symbolTable ;
 
} ; // End of GALGAS_midrange_5F_symbolTable class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_symbolTable : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_symbolTable_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@midrange_symbolTable' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_symbolTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mRoutineAddress ;

//--- Constructor
  public : cMapElement_midrange_5F_symbolTable (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & in_mRoutineAddress
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_symbolTable_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_symbolTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mRoutineAddress ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_symbolTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_symbolTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_symbolTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_uint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddress (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_symbolTable_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      class GALGAS_midrange_5F_symbolTable & ioArgument0,
                                                                                                      class GALGAS_uint & ioArgument1,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                               extensionMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioAddress,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                              const class GALGAS_registerTable constinArgument0,
                                                                                                              const class GALGAS_constantMap constinArgument1,
                                                                                                              const class GALGAS_uint constinArgument2,
                                                                                                              const class GALGAS_midrange_5F_symbolTable constinArgument3,
                                                                                                              class GALGAS_string & ioArgument4,
                                                                                                              class GALGAS_uint & ioArgument5,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                       extensionMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const GALGAS_registerTable constin_inRegisterTable,
                                                      const GALGAS_constantMap constin_inConstantMap,
                                                      const GALGAS_uint constin_inTotalBankCount,
                                                      const GALGAS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GALGAS_string & io_ioListFileContents,
                                                      GALGAS_uint & io_ioAddress,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code basecode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_basecode (const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code baseCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_baseCode (const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op baseCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_baseCode (const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode baseCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_baseCode (const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_declaredRoutineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_midrange_5F_declaredRoutineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inSource) ;
  public : GALGAS_midrange_5F_declaredRoutineMap & operator = (const GALGAS_midrange_5F_declaredRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_declaredRoutineMap & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_declaredRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_midrange_5F_declaredRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_declaredRoutineMap ;
 
} ; // End of GALGAS_midrange_5F_declaredRoutineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_midrange_5F_declaredRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@midrange_declaredRoutineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_midrange_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_midrange_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_declaredRoutineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_declaredRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_declaredRoutineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bootloaderReservedRAMmap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bootloaderReservedRAMmap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bootloaderReservedRAMmap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bootloaderReservedRAMmap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_bootloaderReservedRAMmap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inSource) ;
  public : GALGAS_bootloaderReservedRAMmap & operator = (const GALGAS_bootloaderReservedRAMmap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootloaderReservedRAMmap extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootloaderReservedRAMmap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_bootloaderReservedRAMmap constructor_mapWithMapToOverride (const class GALGAS_bootloaderReservedRAMmap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReservedSizeForKey (class GALGAS_luint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReservedSizeForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bootloaderReservedRAMmap getter_overriddenMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_luint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_bootloaderReservedRAMmap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bootloaderReservedRAMmap ;
 
} ; // End of GALGAS_bootloaderReservedRAMmap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_bootloaderReservedRAMmap : public cGenericAbstractEnumerator {
  public : cEnumerator_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReservedSize (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bootloaderReservedRAMmap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bootloaderReservedRAMmap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bootloaderReservedRAMmap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mProperty_mReservedSize ;

//--- Constructor
  public : cMapElement_bootloaderReservedRAMmap (const GALGAS_lstring & inKey,
                                                 const GALGAS_luint & in_mReservedSize
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bootloaderReservedRAMmap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bootloaderReservedRAMmap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_luint mProperty_mReservedSize ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bootloaderReservedRAMmap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bootloaderReservedRAMmap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_bootloaderReservedRAMmap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_luint & in_mReservedSize) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootloaderReservedRAMmap_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootloaderReservedRAMmap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_luint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReservedSize (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bootloaderReservedRAMmap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_PiccoloInstruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_pic_31__38_PiccoloInstruction (void) ;

//---
  public : inline const class cPtr_pic_31__38_PiccoloInstruction * ptr (void) const { return (const cPtr_pic_31__38_PiccoloInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_PiccoloInstruction (const cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_PiccoloInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_PiccoloInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18PiccoloInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloInstruction : public acPtr_class {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_pic_31__38_PiccoloInstruction (const GALGAS_location & in_mInstructionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18InstructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_InstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_InstructionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_InstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_InstructionList constructor_listWithValue (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_InstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList add_operation (const GALGAS_pic_31__38_InstructionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_InstructionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_pic_31__38_PiccoloInstruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_pic_31__38_PiccoloInstruction constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_PiccoloInstruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_InstructionList ;
 
} ; // End of GALGAS_pic_31__38_InstructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_InstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_InstructionList (const GALGAS_pic_31__38_InstructionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_InstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_InstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_pic_31__38_PiccoloInstruction mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_pic_31__38_InstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_InstructionList_2D_element (const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_InstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_InstructionList_2D_element constructor_new (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_InstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_PiccoloInstruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_InstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_nobanksel class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_nobanksel : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_nobanksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_nobanksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_nobanksel * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_nobanksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_nobanksel (const cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_nobanksel extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_Instruction_5F_nobanksel constructor_new (const class GALGAS_location & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_nobanksel class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_nobanksel class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_nobanksel : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checknobank class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_checknobank : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_checknobank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_checknobank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_checknobank * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_checknobank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_checknobank (const cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_checknobank extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_Instruction_5F_checknobank constructor_new (const class GALGAS_location & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checknobank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_checknobank class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_checknobank : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_checkbank class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_checkbank : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_checkbank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_checkbank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_checkbank * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_checkbank (const cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_checkbank extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_Instruction_5F_checkbank constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBankIndex (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBankIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checkbank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_checkbank class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_checkbank : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_uint mProperty_mBankIndex ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_uint & in_mBankIndex
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBankIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBankIndex (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_PiccoloSimpleInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_PiccoloSimpleInstruction : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction (void) ;

//---
  public : inline const class cPtr_pic_31__38_PiccoloSimpleInstruction * ptr (void) const { return (const cPtr_pic_31__38_PiccoloSimpleInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_PiccoloSimpleInstruction extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_PiccoloSimpleInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18PiccoloSimpleInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloSimpleInstruction : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_PiccoloSimpleInstruction (const GALGAS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_banksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_banksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_banksel * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_banksel (const cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_banksel extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_Instruction_5F_banksel constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_luint & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBankIndex (class GALGAS_luint inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_banksel class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_banksel : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mBankIndex ;
  public : GALGAS_bool mProperty_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_luint & in_mBankIndex,
                                                   const GALGAS_bool & in_mWarningOnUselessBanksel
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBankIndex (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBlockTerminationForBlockInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractBlockTerminationForBlockInstruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractBlockTerminationForBlockInstruction (void) ;

//---
  public : inline const class cPtr_abstractBlockTerminationForBlockInstruction * ptr (void) const { return (const cPtr_abstractBlockTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractBlockTerminationForBlockInstruction (const cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractBlockTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBlockTerminationForBlockInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBlockTerminationForBlockInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractBlockTerminationForBlockInstruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractBlockTerminationForBlockInstruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @exitBlockTerminationForBlockInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_exitBlockTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--- Constructor
  public : GALGAS_exitBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_exitBlockTerminationForBlockInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_exitBlockTerminationForBlockInstruction * ptr (void) const { return (const cPtr_exitBlockTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_exitBlockTerminationForBlockInstruction (const cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_exitBlockTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_exitBlockTerminationForBlockInstruction constructor_new (const class GALGAS_location & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_exitBlockTerminationForBlockInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @exitBlockTerminationForBlockInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_exitBlockTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Attributes
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_exitBlockTerminationForBlockInstruction (const GALGAS_location & in_mLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_ConditionExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_ConditionExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_pic_31__38_ConditionExpression (void) ;

//---
  public : inline const class cPtr_pic_31__38_ConditionExpression * ptr (void) const { return (const cPtr_pic_31__38_ConditionExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_ConditionExpression (const cPtr_pic_31__38_ConditionExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_ConditionExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_ConditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_ConditionExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18ConditionExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_ConditionExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_ConditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18BlockInstructionBlockList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BlockInstructionBlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_BlockInstructionBlockList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_BlockInstructionBlockList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mBlockName,
                                                  const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const class GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                  const class GALGAS_location & in_mEndOfBlock
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BlockInstructionBlockList extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_BlockInstructionBlockList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_BlockInstructionBlockList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                               const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                               const class GALGAS_location & inOperand3
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_BlockInstructionBlockList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                      const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                      const class GALGAS_location & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_BlockInstructionBlockList add_operation (const GALGAS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                       class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                       class GALGAS_location constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                  class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                 class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                       class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                       class GALGAS_location & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionAtIndex (class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                        class GALGAS_uint constinArgument1,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfBlockAtIndex (class GALGAS_location constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_pic_31__38_InstructionList & outArgument1,
                                               class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_pic_31__38_InstructionList & outArgument1,
                                              class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBlockNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlockAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_BlockInstructionBlockList ;
 
} ; // End of GALGAS_pic_31__38_BlockInstructionBlockList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_BlockInstructionBlockList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_BlockInstructionBlockList (const GALGAS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BlockInstructionBlockList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mBlockName ;

  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

  public : GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;

  public : GALGAS_location mProperty_mEndOfBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & in_mBlockName,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                   const GALGAS_location & in_mEndOfBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BlockInstructionBlockList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                const class GALGAS_location & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBlockName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlock (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BlockInstructionBlockList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AbstractCaseItem class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AbstractCaseItem : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_pic_31__38_AbstractCaseItem (void) ;

//---
  public : inline const class cPtr_pic_31__38_AbstractCaseItem * ptr (void) const { return (const cPtr_pic_31__38_AbstractCaseItem *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_AbstractCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_AbstractCaseItem extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_AbstractCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AbstractCaseItem class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18AbstractCaseItem class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AbstractCaseItem : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                         Phase 1: @pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST enum                         *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
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
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWFC (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ANDWF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_COMF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_DECF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_INCF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_IORWF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_MOVF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLCF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLNCF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRCF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRNCF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBFWB (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWFB (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SWAPF (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDWFC (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRLCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRLNCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRRCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRRNCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBFWB (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBWFB (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_ADDWF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_ADDWFC () const ;

  public : VIRTUAL_IN_DEBUG bool optional_ANDWF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_COMF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_DECF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_INCF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_IORWF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_MOVF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_RLCF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_RLNCF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_RRCF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_RRNCF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_SUBFWB () const ;

  public : VIRTUAL_IN_DEBUG bool optional_SUBWF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_SUBWFB () const ;

  public : VIRTUAL_IN_DEBUG bool optional_SWAPF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_XORWF () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @FA_5F_instruction_5F_base_5F_code enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_FA_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_FA_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
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
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_FA_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSEQ (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSGT (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSLT (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_MULWF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_NEGF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_SETF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_instruction_5F_base_5F_code constructor_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSETF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_CLRF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_CPFSEQ () const ;

  public : VIRTUAL_IN_DEBUG bool optional_CPFSGT () const ;

  public : VIRTUAL_IN_DEBUG bool optional_CPFSLT () const ;

  public : VIRTUAL_IN_DEBUG bool optional_MOVWF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_MULWF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_NEGF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_SETF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_TSTFSZ () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_FA_5F_instruction_5F_base_5F_code class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @bit_5F_oriented_5F_op enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_BCF,
    kEnum_BSF,
    kEnum_BTG
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bit_5F_oriented_5F_op extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bit_5F_oriented_5F_op constructor_BCF (LOCATION_ARGS) ;

  public : static class GALGAS_bit_5F_oriented_5F_op constructor_BSF (LOCATION_ARGS) ;

  public : static class GALGAS_bit_5F_oriented_5F_op constructor_BTG (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bit_5F_oriented_5F_op & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBSF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBTG (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_BCF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_BSF () const ;

  public : VIRTUAL_IN_DEBUG bool optional_BTG () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bit_5F_oriented_5F_op class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @conditional_5F_branch enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_conditional_5F_branch : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_conditional_5F_branch (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
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
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_conditional_5F_branch extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_conditional_5F_branch constructor_bc (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bn (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bnc (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bnn (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bnov (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bnz (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bov (LOCATION_ARGS) ;

  public : static class GALGAS_conditional_5F_branch constructor_bz (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_conditional_5F_branch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBc (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnc (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnov (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBnz (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBov (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBz (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_bc () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bn () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bnc () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bnn () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bnov () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bnz () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bov () const ;

  public : VIRTUAL_IN_DEBUG bool optional_bz () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_conditional_5F_branch class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditional_5F_branch ;

