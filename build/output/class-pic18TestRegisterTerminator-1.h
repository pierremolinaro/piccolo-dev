#ifndef class_2D_pic_31__38_TestRegisterTerminator_1_DEFINED
#define class_2D_pic_31__38_TestRegisterTerminator_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18AbstractConditionTerminator.h"
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
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_TestRegisterTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

