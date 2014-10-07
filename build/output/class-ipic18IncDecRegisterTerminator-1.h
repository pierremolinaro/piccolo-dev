#ifndef class_2D_ipic_31__38_IncDecRegisterTerminator_1_DEFINED
#define class_2D_ipic_31__38_IncDecRegisterTerminator_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18AbstractConditionTerminator.h"
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_IncDecRegisterTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

