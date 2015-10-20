#ifndef all_2D_declarations_2D__38__ENTITIES_DEFINED
#define all_2D_declarations_2D__38__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @ipic_31__38_AbstractConditionTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_AbstractConditionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_AbstractConditionTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_AbstractConditionTerminator * ptr (void) const { return (const cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_AbstractConditionTerminator (const cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_AbstractConditionTerminator extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionFalse (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionTrue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_AbstractConditionTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @ipic18AbstractConditionTerminator class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_AbstractConditionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38_SingleInstructionTerminator mAttribute_mSingleInstructionTerminatorIfConditionTrue ;
  public : GALGAS_ipic_31__38_SingleInstructionTerminator mAttribute_mSingleInstructionTerminatorIfConditionFalse ;

//--- Constructor
  public : cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionTrue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionFalse (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @ipic_31__38_IncDecRegisterTerminator class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_IncDecRegisterTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_IncDecRegisterTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_IncDecRegisterTerminator * ptr (void) const { return (const cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_IncDecRegisterTerminator (const cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_IncDecRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_IncDecRegisterTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                               const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                               const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                               const class GALGAS_bool & inOperand4,
                                                                               const class GALGAS_bool & inOperand5
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_IncDecRegisterTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @ipic18IncDecRegisterTerminator class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_IncDecRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38_IncDecRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic_31__38_BitTestTerminator class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_BitTestTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_pic_31__38_BitTestTerminator (void) ;

//---
  public : inline const class cPtr_pic_31__38_BitTestTerminator * ptr (void) const { return (const cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_BitTestTerminator (const cPtr_pic_31__38_BitTestTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BitTestTerminator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_BitTestTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                       const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                       const class GALGAS_uint & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BitTestTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18BitTestTerminator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_BitTestTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_pic_31__38_BitTestTerminator (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                              const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                              const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                              const GALGAS_uint & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @pic_31__38_RegisterComparisonTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_RegisterComparisonTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_pic_31__38_RegisterComparisonTerminator (void) ;

//---
  public : inline const class cPtr_pic_31__38_RegisterComparisonTerminator * ptr (void) const { return (const cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_RegisterComparisonTerminator (const cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_RegisterComparisonTerminator extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_RegisterComparisonTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                  const class GALGAS_ipic_31__38_RegisterComparison & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_RegisterComparison getter_mComparison (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18RegisterComparisonTerminator class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_RegisterComparisonTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_ipic_31__38_RegisterComparison mAttribute_mComparison ;

//--- Constructor
  public : cPtr_pic_31__38_RegisterComparisonTerminator (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                         const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                         const GALGAS_ipic_31__38_RegisterComparison & in_mComparison
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_RegisterComparison getter_mComparison (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_TestRegisterTerminator class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_TestRegisterTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_pic_31__38_TestRegisterTerminator (void) ;

//---
  public : inline const class cPtr_pic_31__38_TestRegisterTerminator * ptr (void) const { return (const cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_TestRegisterTerminator (const cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_TestRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_TestRegisterTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                            const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                            const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_TestRegisterTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @pic18TestRegisterTerminator class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_TestRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;

//--- Constructor
  public : cPtr_pic_31__38_TestRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                   const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @ipic_31__38_ComputedBraTerminator class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_ComputedBraTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ComputedBraTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ComputedBraTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ComputedBraTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ComputedBraTerminator (const cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ComputedBraTerminator extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_ComputedBraTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstringlist & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ComputedBraTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @ipic18ComputedBraTerminator class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ComputedBraTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_lstringlist mAttribute_mTargetLabels ;
  public : GALGAS_bool mAttribute_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedBraTerminator (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstringlist & in_mTargetLabels,
                                                   const GALGAS_bool & in_mUsesRCALL
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @ipic_31__38_ComputedGotoTerminator class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_ComputedGotoTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ComputedGotoTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ComputedGotoTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ComputedGotoTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ComputedGotoTerminator (const cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ComputedGotoTerminator extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_ComputedGotoTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstringlist & inOperand1,
                                                                             const class GALGAS_bool & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ComputedGotoTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @ipic18ComputedGotoTerminator class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ComputedGotoTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_lstringlist mAttribute_mTargetLabels ;
  public : GALGAS_bool mAttribute_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedGotoTerminator (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstringlist & in_mTargetLabels,
                                                    const GALGAS_bool & in_mUsesRCALL
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @ipic_31__38_ComputedRETLWTerminator class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_ComputedRETLWTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ComputedRETLWTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ComputedRETLWTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ComputedRETLWTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ComputedRETLWTerminator (const cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ComputedRETLWTerminator extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_ComputedRETLWTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_uintlist & inOperand1,
                                                                              const class GALGAS_bool & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mLiteralValues (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ComputedRETLWTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @ipic18ComputedRETLWTerminator class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ComputedRETLWTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_uintlist mAttribute_mLiteralValues ;
  public : GALGAS_bool mAttribute_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedRETLWTerminator (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_uintlist & in_mLiteralValues,
                                                     const GALGAS_bool & in_mUsesRCALL
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uintlist getter_mLiteralValues (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @ipic_31__38_ConditionalJumpTerminator class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_ConditionalJumpTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ConditionalJumpTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_ConditionalJumpTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ConditionalJumpTerminator (const cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ConditionalJumpTerminator extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_ConditionalJumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_conditional_5F_branch & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_conditionalBranchMode & inOperand3,
                                                                                const class GALGAS_lstring & inOperand4,
                                                                                const class GALGAS_conditionalBranchMode & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_conditionalBranchMode getter_mBranchModeOnFalseLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_conditionalBranchMode getter_mBranchModeOnTrueLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_conditional_5F_branch getter_mConditionalBranch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabelWhenFalse (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabelWhenTrue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ConditionalJumpTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @ipic18ConditionalJumpTerminator class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ConditionalJumpTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_conditional_5F_branch mAttribute_mConditionalBranch ;
  public : GALGAS_lstring mAttribute_mTargetLabelWhenTrue ;
  public : GALGAS_conditionalBranchMode mAttribute_mBranchModeOnTrueLabel ;
  public : GALGAS_lstring mAttribute_mTargetLabelWhenFalse ;
  public : GALGAS_conditionalBranchMode mAttribute_mBranchModeOnFalseLabel ;

//--- Constructor
  public : cPtr_ipic_31__38_ConditionalJumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                       const GALGAS_lstring & in_mTargetLabelWhenTrue,
                                                       const GALGAS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                       const GALGAS_lstring & in_mTargetLabelWhenFalse,
                                                       const GALGAS_conditionalBranchMode & in_mBranchModeOnFalseLabel
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_conditional_5F_branch getter_mConditionalBranch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabelWhenTrue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_conditionalBranchMode getter_mBranchModeOnTrueLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabelWhenFalse (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_conditionalBranchMode getter_mBranchModeOnFalseLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @ipic_31__38_RetlwTerminator class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_RetlwTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_RetlwTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_RetlwTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_RetlwTerminator * ptr (void) const { return (const cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_RetlwTerminator (const cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_RetlwTerminator extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_RetlwTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_uint & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetlwTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_RetlwTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @ipic18RetlwTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_RetlwTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_uint mAttribute_mLiteralValue ;

//--- Constructor
  public : cPtr_ipic_31__38_RetlwTerminator (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_uint & in_mLiteralValue
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @ipic_31__38_InstructionWithNoOperand class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_InstructionWithNoOperand : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38_InstructionWithNoOperand (void) ;

//---
  public : inline const class cPtr_ipic_31__38_InstructionWithNoOperand * ptr (void) const { return (const cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_InstructionWithNoOperand (const cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_InstructionWithNoOperand extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_InstructionWithNoOperand constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionWithNoOperandKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_InstructionWithNoOperand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @ipic18InstructionWithNoOperand class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_InstructionWithNoOperand : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionWithNoOperandKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38_InstructionWithNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionWithNoOperandKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @ipic_31__38__5F_condition_5F_skip_5F_instruction class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * ptr (void) const { return (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mEmbeddedInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @ipic18_condition_skip_instruction class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38_SequentialInstruction mAttribute_mEmbeddedInstruction ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction
                                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstruction getter_mEmbeddedInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * ptr (void) const { return (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                             const class GALGAS_uint & inOperand4
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_skip_instruction_BitTestSkip class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                    const GALGAS_bool & in_mSkipIfSet,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @ipic_31__38__5F_skip_5F_instruction_5F_FDA class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * ptr (void) const { return (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                     const class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code getter_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @ipic18_skip_instruction_FDA class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Attributes
  public : GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                            const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                            const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code getter_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * ptr (void) const { return (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                     const class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code getter_mCompareInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @ipic18_skip_instruction_compare_register class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code mAttribute_mCompareInstruction ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                            const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                            const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code getter_mCompareInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @ipic_31__38__5F_intermediate_5F_JSR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_JSR : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_JSR (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_JSR * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_JSR (const cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_jumpInstructionKind & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_JSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @ipic18_intermediate_JSR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_JSR : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_jumpInstructionKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_lstring & in_mTargetLabel,
                                                     const GALGAS_jumpInstructionKind & in_mKind
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_uint & inOperand2,
                                                                                            const class GALGAS_uint & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOffset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRightShift (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @ipic18_intermediate_MOV_LABEL_W class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_uint mAttribute_mOffset ;
  public : GALGAS_uint mAttribute_mRightShift ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_lstring & in_mLabel,
                                                                   const GALGAS_uint & in_mOffset,
                                                                   const GALGAS_uint & in_mRightShift
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mOffset (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mRightShift (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_BLANK class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_uint mAttribute_mBlankValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_uint & in_mBlankValue
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_instruction_5F_FA class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                            const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @ipic18_intermediate_instruction_FA class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code mAttribute_mFAinstruction ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                                             const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                             const class GALGAS_uint & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FBA class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_bit_5F_oriented_5F_op mAttribute_mBitOrientedOp ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_uint & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FNOP class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_uint mAttribute_mBlankValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_uint & in_mBlankValue
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_luint & inOperand1,
                                                                                              const class GALGAS_uint & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mFSRindex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_LFSR class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mFSRindex ;
  public : GALGAS_uint mAttribute_mValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_luint & in_mFSRindex,
                                                                     const GALGAS_uint & in_mValue
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mFSRindex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_luint & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_MNOP class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_luint & in_mOccurrenceFactor
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                               const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mDestinationRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mSourceRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   @ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication struct                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mAssemblyString ;
  public : GALGAS_uint mAttribute_mRegisterAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & in_mAssemblyString,
                                                                                          const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication extractObject (const GALGAS_object & inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication constructor_new (const class GALGAS_string & inOperand0,
                                                                                                                 const class GALGAS_uint & inOperand1
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_MOVFF class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mAttribute_mSourceRegisterDescription ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mAttribute_mDestinationRegisterDescription ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mSourceRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mDestinationRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_luint & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_NOPBRA class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_luint & in_mOccurrenceFactor
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_tableAccessOption & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_TBLRD class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_tableAccessOption mAttribute_mOption ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_tableAccessOption & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_TBLWT class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_tableAccessOption mAttribute_mOption ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall constructor_new (const class GALGAS_location & inOperand0,
                                                                                                           const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                           const class GALGAS_bool & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_mTargetInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @ipic18_intermediate_instruction_computed_rcall class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38_SequentialInstructionList mAttribute_mTargetInstructions ;
  public : GALGAS_bool mAttribute_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                  const GALGAS_bool & in_mUsesRCALL
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstructionList getter_mTargetInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
