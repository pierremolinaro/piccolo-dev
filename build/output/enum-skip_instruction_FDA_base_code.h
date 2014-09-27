#ifndef enum_2D_skip_5F_instruction_5F_FDA_5F_base_5F_code_1_DEFINED
#define enum_2D_skip_5F_instruction_5F_FDA_5F_base_5F_code_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @skip_5F_instruction_5F_FDA_5F_base_5F_code enum                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_DECFSZ,
    kEnum_DCFSNZ,
    kEnum_INCFSZ,
    kEnum_INFSNZ
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
  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DCFSNZ (LOCATION_ARGS) ;

  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DECFSZ (LOCATION_ARGS) ;

  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INCFSZ (LOCATION_ARGS) ;

  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INFSNZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDCFSNZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDECFSZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isINCFSZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isINFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

