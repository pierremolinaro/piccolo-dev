#ifndef enum_2D_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST_1_DEFINED
#define enum_2D_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST enum                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWFC (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ANDWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_COMF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_DECF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_INCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_IORWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_MOVF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLNCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRNCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBFWB (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWFB (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SWAPF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isADDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isADDWFC (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isANDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCOMF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDECF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isINCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIORWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMOVF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRLCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRLNCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRRCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRRNCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBFWB (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBWFB (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSWAPF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

