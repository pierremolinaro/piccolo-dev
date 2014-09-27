#ifndef class_2D_midrange_5F_instruction_5F_IF_5F_IncDec_1_DEFINED
#define class_2D_midrange_5F_instruction_5F_IF_5F_IncDec_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction_IF_SEMI_COLON.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_5F_instruction_5F_IF_5F_IncDec class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_registerExpression & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

