#ifndef class_2D_bitNumberLiteralValue_1_DEFINED
#define class_2D_bitNumberLiteralValue_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bitNumberLiteralValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bitNumberLiteralValue : public GALGAS_bitNumberExpression {
//--- Constructor
  public : GALGAS_bitNumberLiteralValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bitNumberLiteralValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_bitNumberLiteralValue * ptr (void) const { return (const cPtr_bitNumberLiteralValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bitNumberLiteralValue (const cPtr_bitNumberLiteralValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bitNumberLiteralValue extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bitNumberLiteralValue constructor_new (const class GALGAS_luint & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bitNumberLiteralValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mBitNumberLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitNumberLiteralValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

