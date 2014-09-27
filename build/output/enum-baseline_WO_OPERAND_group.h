#ifndef enum_2D_baseline_5F_WO_5F_OPERAND_5F_group_1_DEFINED
#define enum_2D_baseline_5F_WO_5F_OPERAND_5F_group_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_5F_WO_5F_OPERAND_5F_group enum                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_WO_5F_OPERAND_5F_group (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_CLRW,
    kEnum_NOP,
    kEnum_CLRWDT,
    kEnum_OPTION_5F_,
    kEnum_SLEEP
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
  public : static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_CLRW (LOCATION_ARGS) ;

  public : static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_CLRWDT (LOCATION_ARGS) ;

  public : static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_NOP (LOCATION_ARGS) ;

  public : static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_OPTION_5F_ (LOCATION_ARGS) ;

  public : static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCLRW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCLRWDT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNOP (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isOPTION_5F_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_WO_5F_OPERAND_5F_group class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

