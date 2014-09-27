#ifndef class_2D_ipic_31__38_SingleInstructionTerminator_1_DEFINED
#define class_2D_ipic_31__38_SingleInstructionTerminator_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18AbstractBlockTerminator.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @ipic_31__38_SingleInstructionTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_SingleInstructionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_SingleInstructionTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_SingleInstructionTerminator * ptr (void) const { return (const cPtr_ipic_31__38_SingleInstructionTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_SingleInstructionTerminator extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_SingleInstructionTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

