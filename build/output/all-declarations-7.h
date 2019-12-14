#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-6.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_bool mProperty_mIsRegular ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                        const GALGAS_bool & in_mIsRegular
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsRegular (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_uint & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_uint mProperty_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_uint & in_mPage
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_JUMP class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_intermediate_5F_JUMP : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_JUMP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_JUMP * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_uint & inOperand2,
                                                                                 const class GALGAS_uint & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCurrentPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JUMP class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_JUMP class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_intermediate_5F_JUMP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;
  public : GALGAS_uint mProperty_mCurrentPage ;
  public : GALGAS_uint mProperty_mTargetPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel,
                                                  const GALGAS_uint & in_mCurrentPage,
                                                  const GALGAS_uint & in_mTargetPage
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mCurrentPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCurrentPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mTargetPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_CALL class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_intermediate_5F_CALL : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_CALL * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_CALL class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_CALL class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_intermediate_5F_CALL : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_JSR class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_intermediate_5F_JSR : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_JSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_JSR * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2,
                                                                                const class GALGAS_uint & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCurrentPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JSR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_JSR class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;
  public : GALGAS_uint mProperty_mCurrentPage ;
  public : GALGAS_uint mProperty_mTargetPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_uint & in_mCurrentPage,
                                                 const GALGAS_uint & in_mTargetPage
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mCurrentPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCurrentPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mTargetPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_TRIS class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_intermediate_5F_TRIS : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_TRIS constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_TRIS * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_uint & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOpcode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_TRIS class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_TRIS class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_intermediate_5F_TRIS : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mOperand ;
  public : GALGAS_uint mProperty_mOpcode ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mOperand,
                                                  const GALGAS_uint & in_mOpcode
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperand (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mOpcode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOpcode (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@baseline_intermediate_GOTO optimizeGOTO'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) (const class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                                                                        const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeGOTO (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeGOTO (const class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Routine 'findBaselineFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_findBaselineFirstInstructionOrLabelFromAddress (const class GALGAS_uint constinArgument0,
                                                             const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                             class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                             class GALGAS_stringset & outArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@baseline_intermediate_JUMP optimizeJUMP'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) (const class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                                                                        const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeJUMP (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeJUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@baseline_intermediate_CALL optimizeCALL'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL) (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                                        const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeCALL (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeCALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@baseline_intermediate_JSR optimizeJSR'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR) (const class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                                                                      const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                      const class GALGAS_uint constinArgument1,
                                                                                      class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                      class GALGAS_string & ioArgument3,
                                                                                      class GALGAS_bool & ioArgument4,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeJSR (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeJSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                                                                                          const class GALGAS_uint constinArgument0,
                                                                                                                          class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                          class GALGAS_string & ioArgument2,
                                                                                                                          class GALGAS_bool & ioArgument3,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeBEGIN_5F_ROUTINE (const int32_t inClassIndex,
                                                    extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const GALGAS_uint constin_inLineIndex,
                                                   GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   GALGAS_string & io_ioListFileContents,
                                                   GALGAS_bool & io_ioOptimizationsDone,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_bool & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_bool mProperty_mIsRegular ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                  const GALGAS_bool & in_mIsRegular
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsRegular (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_uint mProperty_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                const GALGAS_uint & in_mPage
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @baseline_5F_assembly_5F_pseudo_5F_LABEL class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @baseline_assembly_pseudo_LABEL class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mLabel ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @baseline_5F_assembly_5F_GOTO class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_assembly_5F_GOTO : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_GOTO * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_GOTO class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @baseline_assembly_GOTO class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_assembly_5F_GOTO : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @baseline_5F_assembly_5F_CALL class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_assembly_5F_CALL : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_CALL * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_CALL class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @baseline_assembly_CALL class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_assembly_5F_CALL : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_CALL (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @baseline_5F_assembly_5F_TRIS class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_assembly_5F_TRIS : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_TRIS constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_TRIS * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_uint & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOpcode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_TRIS class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @baseline_assembly_TRIS class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_assembly_5F_TRIS : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mOperand ;
  public : GALGAS_uint mProperty_mOpcode ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mOperand,
                                              const GALGAS_uint & in_mOpcode
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperand (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mOpcode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOpcode (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @midrange_5F_intermediate_5F_pseudo_5F_LABEL class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_bool & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsDeletable (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsDeletable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @midrange_intermediate_pseudo_LABEL class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mLabel ;
  public : GALGAS_bool mProperty_mIsDeletable ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                             const GALGAS_bool & in_mIsDeletable
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsDeletable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsDeletable (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_CALL class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_midrange_5F_intermediate_5F_CALL : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_CALL * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_CALL (const cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_CALL class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @midrange_intermediate_CALL class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_midrange_5F_intermediate_5F_CALL : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_JSR class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_midrange_5F_intermediate_5F_JSR : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_JSR (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_JSR * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_JSR (const cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                                const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR & inOperand) const ;

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JSR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @midrange_intermediate_JSR class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_midrange_5F_intermediate_5F_JSR : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@midrange_intermediate_JUMP optimizeJUMP'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) (const class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                                                                        const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeJUMP (const int32_t inClassIndex,
                                        extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeJUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@midrange_intermediate_GOTO optimizeGOTO'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) (const class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                                                                        const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                        const class GALGAS_uint constinArgument1,
                                                                                        class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                        class GALGAS_string & ioArgument3,
                                                                                        class GALGAS_bool & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeGOTO (const int32_t inClassIndex,
                                        extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeGOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  GRAMMAR pic18_grammar
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cGrammar_pic_31__38__5F_grammar : public cParser_pic_31__38__5F_syntax,
                                        public cParser_pic_31__38__5F_start_5F_symbol,
                                        public cParser_midrange_5F_syntax,
                                        public cParser_baseline_5F_syntax,
                                        public cParser_baseline_5F_program,
                                        public cParser_pic_31__38__5F_bootloader_5F_syntax,
                                        public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_condition_5F_expression_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_condition_5F_factor_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_condition_5F_term_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                           C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_instruction_5F_list_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                             GALGAS_labelMap & ioArgument1,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_routine_5F_definition_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_simple_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                         GALGAS_baseline_5F_instruction & outArgument1,
                                                                         GALGAS_labelMap & ioArgument2,
                                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_structured_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                   GALGAS_labelMap & ioArgument1,
                                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public : virtual void nt_bit_5F_number_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_bit_5F_number_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public : virtual void nt_block_5F_termination_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_block_5F_termination_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_block_5F_termination_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public : virtual void nt_body_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_body_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_body_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
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
  public : virtual void nt_checkpic_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_checkpic_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_checkpic_5F_definition_ (GALGAS_checkpicList & ioArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public : virtual void nt_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_condition_5F_expression_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public : virtual void nt_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_condition_5F_factor_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public : virtual void nt_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_condition_5F_term_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public : virtual void nt_configuration_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_configuration_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public : virtual void nt_constant_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_constant_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public : virtual void nt_data_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_data_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_data_5F_definition_ (GALGAS_dataList & ioArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_in_5F_ram_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_5F_in_5F_ram_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_in_5F_ram_ (GALGAS_declarationInRam & outArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_bitwise_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_bitwise_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_bitwise_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_bitwise_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_bitwise_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_bitwise_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                                          C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_primary_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_primary_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_primary_ (GALGAS_immediatExpression & outArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_5F_list_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                 GALGAS_bool & ioArgument1,
                                                 GALGAS_bool & ioArgument2,
                                                 GALGAS_labelMap & ioArgument3,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public : virtual void nt_interrupt_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_interrupt_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_interrupt_5F_definition_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                     GALGAS_bool & ioArgument1,
                                                     GALGAS_bool & ioArgument2,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_expression' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_condition_5F_expression_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_factor' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_condition_5F_factor_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_term' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_condition_5F_term_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                           C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_instruction_5F_list_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                             GALGAS_bool & ioArgument1,
                                                             GALGAS_bool & ioArgument2,
                                                             GALGAS_labelMap & ioArgument3,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_interrupt_definition' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_interrupt_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_interrupt_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_interrupt_5F_definition_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                 GALGAS_bool & ioArgument1,
                                                                 GALGAS_bool & ioArgument2,
                                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_routine_definition' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_routine_5F_definition_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                               GALGAS_bool & ioArgument1,
                                                               GALGAS_bool & ioArgument2,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_simple_5F_instruction_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                         GALGAS_midrange_5F_instruction & outArgument1,
                                                                         GALGAS_bool & ioArgument2,
                                                                         GALGAS_bool & ioArgument3,
                                                                         GALGAS_labelMap & ioArgument4,
                                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_midrange_5F_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_midrange_5F_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_midrange_5F_structured_5F_instruction_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                   GALGAS_bool & ioArgument1,
                                                                   GALGAS_bool & ioArgument2,
                                                                   GALGAS_labelMap & ioArgument3,
                                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public : virtual void nt_optional_5F_w_5F_as_5F_dest_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'parse_bootloader' non terminal
//--- 'parse' label
  public : virtual void nt_parse_5F_bootloader_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_parse_5F_bootloader_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_parse_5F_bootloader_ (GALGAS_lstring & outArgument0,
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
  public : virtual void nt_ram_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_ram_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public : virtual void nt_register_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_register_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_routine_5F_declaration_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_routine_5F_declaration_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_routine_5F_declaration_ (GALGAS_routineDeclarationList & ioArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public : virtual void nt_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_routine_5F_definition_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                   GALGAS_bool & ioArgument1,
                                                   GALGAS_bool & ioArgument2,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
  public : virtual void nt_section_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_section_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_section_5F_list_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                             GALGAS_lstringlist & ioArgument1,
                                             GALGAS_ramDefinitionList & ioArgument2,
                                             GALGAS_lstringlist & ioArgument3,
                                             GALGAS_configDefinitionList & ioArgument4,
                                             GALGAS_constantDefinitionList & ioArgument5,
                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_instruction_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_start_5F_symbol_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString
                                                     COMMA_LOCATION_ARGS) ;

//----------- 'importBootloaderSpecification' label
  public : virtual void nt_start_5F_symbol_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
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
  public : static void _performSourceFileParsing_importBootloaderSpecification (C_Compiler * inCompiler,
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

  public : static void _performSourceStringParsing_importBootloaderSpecification (C_Compiler * inCompiler,
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
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                             GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                             GALGAS_bool & ioArgument2,
                                                             GALGAS_bool & ioArgument3,
                                                             GALGAS_labelMap & ioArgument4,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_structured_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                       GALGAS_bool & ioArgument1,
                                                       GALGAS_bool & ioArgument2,
                                                       GALGAS_labelMap & ioArgument3,
                                                       C_Lexique_piccolo_5F_lexique * inCompiler) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_38 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_39 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_40 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_41 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_42 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_43 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_44 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_45 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_46 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_47 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_48 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_49 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_50 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_51 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_52 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_53 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_54 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_55 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_56 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_57 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_58 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_59 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_60 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_61 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_62 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_63 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_64 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_midrange_5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_19 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_20 (C_Lexique_piccolo_5F_lexique *) ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
