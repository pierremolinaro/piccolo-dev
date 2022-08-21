#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@fieldSettingMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_fieldSettingMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mValue ;
  public: GALGAS_uint mProperty_mMask ;

//--- Constructor
  public: cMapElement_fieldSettingMap (const GALGAS_lstring & inKey,
                                       const GALGAS_uint & in_mValue,
                                       const GALGAS_uint & in_mMask
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fieldSettingMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fieldSettingMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mValue ;
  public: inline GALGAS_uint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

  public: GALGAS_uint mProperty_mMask ;
  public: inline GALGAS_uint readProperty_mMask (void) const {
    return mProperty_mMask ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_fieldSettingMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_fieldSettingMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

  public: inline void setter_setMMask (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMask = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_fieldSettingMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_fieldSettingMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_uint & in_mValue,
                                             const GALGAS_uint & in_mMask) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fieldSettingMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fieldSettingMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1,
                                                                          const class GALGAS_uint & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fieldSettingMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fieldSettingMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                             Phase 1: @baseline_5F_instruction_5F_FD_5F_base_5F_code enum                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_ADDWF,
    kEnum_ANDWF,
    kEnum_COMF,
    kEnum_DECF,
    kEnum_DECFSZ,
    kEnum_INCF,
    kEnum_INCFSZ,
    kEnum_IORWF,
    kEnum_MOVF,
    kEnum_RLF,
    kEnum_RRF,
    kEnum_SUBWF,
    kEnum_SWAPF,
    kEnum_XORWF
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_ADDWF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_ANDWF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_COMF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_DECF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_DECFSZ (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_INCF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_INCFSZ (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_IORWF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_MOVF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_RLF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_RRF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_SUBWF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_SWAPF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code constructor_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRLF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_ADDWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ANDWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_COMF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_DECF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_DECFSZ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_INCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_INCFSZ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_IORWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RLF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RRF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SUBWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SWAPF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_XORWF () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_instruction_FD_base_code mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                             Phase 1: @baseline_5F_F_5F_instruction_5F_base_5F_code enum                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_CLRF,
    kEnum_MOVWF
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVWF (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_CLRF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVWF () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_F_instruction_base_code mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @baseline_5F_bit_5F_oriented_5F_op enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_BCF,
    kEnum_BSF
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_bit_5F_oriented_5F_op extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_bit_5F_oriented_5F_op constructor_BCF (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_bit_5F_oriented_5F_op constructor_BSF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBSF (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_BCF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_BSF () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_bit_5F_oriented_5F_op class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_bit_oriented_op mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                             Phase 1: @baseline_5F_literal_5F_instruction_5F_opcode enum                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_ANDLW,
    kEnum_IORLW,
    kEnum_MOVLW,
    kEnum_RETLW,
    kEnum_XORLW
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_literal_5F_instruction_5F_opcode extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode constructor_ANDLW (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode constructor_IORLW (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode constructor_MOVLW (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode constructor_RETLW (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode constructor_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRETLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_ANDLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_IORLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_RETLW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_XORLW () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_literal_5F_instruction_5F_opcode class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_literal_instruction_opcode mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                  Phase 1: @baseline_5F_WO_5F_OPERAND_5F_group enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_WO_5F_OPERAND_5F_group (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_CLRW,
    kEnum_NOP,
    kEnum_CLRWDT,
    kEnum_OPTION_5F_,
    kEnum_SLEEP
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_WO_5F_OPERAND_5F_group extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_CLRW (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_CLRWDT (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_NOP (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_OPTION_5F_ (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group constructor_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOPTION_5F_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_CLRW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_CLRWDT () const ;

  public: VIRTUAL_IN_DEBUG bool optional_NOP () const ;

  public: VIRTUAL_IN_DEBUG bool optional_OPTION_5F_ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SLEEP () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_WO_5F_OPERAND_5F_group class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_WO_OPERAND_group mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction (const class cPtr_baseline_5F_instruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction : public acStrongPtr_class {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_baseline_5F_instruction (const GALGAS_location & in_mInstructionLocation
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_2D_weak (const class GALGAS_baseline_5F_instruction & inSource) ;

  public: GALGAS_baseline_5F_instruction_2D_weak & operator = (const class GALGAS_baseline_5F_instruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction bang_baseline_5F_instruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_instructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_baseline_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_baseline_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_instructionList constructor_listWithValue (const class GALGAS_baseline_5F_instruction & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_instruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList add_operation (const GALGAS_baseline_5F_instructionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_baseline_5F_instructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_instruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_instruction & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_instruction & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_baseline_5F_instruction constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_instruction & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_instructionList ;
 
} ; // End of GALGAS_baseline_5F_instructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_instructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_instructionList (const GALGAS_baseline_5F_instructionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_baseline_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baseline_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_baseline_5F_instruction mProperty_mInstruction ;
  public: inline GALGAS_baseline_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_baseline_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_instructionList_2D_element (const GALGAS_baseline_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instructionList_2D_element constructor_new (const class GALGAS_baseline_5F_instruction & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FD reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FD : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_FD (const class cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FD class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_FD class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FD : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bool & in_m_5F_W_5F_isDestination
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FD_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FD_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FD_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_FD_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_FD_2D_weak (const class GALGAS_baseline_5F_instruction_5F_FD & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_FD_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_FD bang_baseline_5F_instruction_5F_FD_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FD_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FD_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FD_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_F reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_F : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_F (const class cPtr_baseline_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                            const class GALGAS_registerExpression & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_F class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_F class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_F : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GALGAS_registerExpression & in_mRegisterExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_F_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_F_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_F_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_F_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_F_2D_weak (const class GALGAS_baseline_5F_instruction_5F_F & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_F_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_F & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_F bang_baseline_5F_instruction_5F_F_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_F_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_F_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_F_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_F_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FB reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FB : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_FB (const class cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bitNumberExpression & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_baseline_5F_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FB class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_FB class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FB : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FB_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FB_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FB_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_FB_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_FB_2D_weak (const class GALGAS_baseline_5F_instruction_5F_FB & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_FB_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_FB bang_baseline_5F_instruction_5F_FB_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FB_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FB_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FB_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_CALL : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_CALL (const class cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_CALL : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_CALL_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (const class GALGAS_baseline_5F_instruction_5F_CALL & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_CALL bang_baseline_5F_instruction_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JSR : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JSR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_JSR (const class cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JSR : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JSR_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (const class GALGAS_baseline_5F_instruction_5F_JSR & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_JSR bang_baseline_5F_instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_GOTO reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_GOTO : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_GOTO constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_GOTO (const class cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_GOTO : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (const class GALGAS_baseline_5F_instruction_5F_GOTO & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_GOTO bang_baseline_5F_instruction_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JUMP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JUMP : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JUMP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_JUMP (const class cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JUMP : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (const class GALGAS_baseline_5F_instruction_5F_JUMP & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_JUMP bang_baseline_5F_instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_WO_5F_OPERAND reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_WO_OPERAND class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (const class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND bang_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_TRIS reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_TRIS : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_TRIS constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_TRIS (const class cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_TRIS class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_TRIS class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_TRIS : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mOperand ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mOperand
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_TRIS_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (const class GALGAS_baseline_5F_instruction_5F_TRIS & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_TRIS & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_TRIS bang_baseline_5F_instruction_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_literalOperation reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_literalOperation : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GALGAS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                           const class GALGAS_immediatExpression & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMImmediatExpression (class GALGAS_immediatExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLiteralInstruction (class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_literalOperation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_literalOperation class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GALGAS_immediatExpression mProperty_mImmediatExpression ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                            const GALGAS_immediatExpression & in_mImmediatExpression
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_literalOperation_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak (const class GALGAS_baseline_5F_instruction_5F_literalOperation & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_literalOperation bang_baseline_5F_instruction_5F_literalOperation_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_MNOP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_MNOP : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_MNOP (const class cPtr_baseline_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_luint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_MNOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_MNOP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_MNOP : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_luint & in_mOccurrenceFactor
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_MNOP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak (const class GALGAS_baseline_5F_instruction_5F_MNOP & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_MNOP bang_baseline_5F_instruction_5F_MNOP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FOREVER reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FOREVER : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_FOREVER constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_FOREVER (const class cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                  const class GALGAS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionList (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_baseline_5F_instructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FOREVER class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_FOREVER class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FOREVER : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstructionList ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FOREVER_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak (const class GALGAS_baseline_5F_instruction_5F_FOREVER & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_FOREVER & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_FOREVER bang_baseline_5F_instruction_5F_FOREVER_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GALGAS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT constructor_new (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_immediatExpression & inOperand2,
                                                                                           const class GALGAS_immediatExpression & inOperand3,
                                                                                           const class GALGAS_baseline_5F_instructionList & inOperand4,
                                                                                           const class GALGAS_location & inOperand5
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_baseline_5F_instructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_STATIC_REPEAT class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: GALGAS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GALGAS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstruction ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_lstring & in_mConstantName,
                                                            const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                            const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                            const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                            const GALGAS_location & in_mEndOfInstruction
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_instruction readProperty_mInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_instruction inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_IF_SEMI_COLON class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_instruction mProperty_mInstruction ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_baseline_5F_instruction & in_mInstruction
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (const class GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON bang_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_baseline_5F_instruction & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        const class GALGAS_registerExpression & inOperand3,
                                                                                        const class GALGAS_bitNumberExpression & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_IF_BitTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getBaseCode
  public: virtual void method_getBaseCode (class GALGAS_uint & outBaseCode,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getMnemonic
  public: virtual void method_getMnemonic (class GALGAS_string & outMnemonic,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                         const GALGAS_bool & in_mSkipIfSet,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bitNumberExpression & in_mBitNumber
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (const class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest bang_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_baseline_5F_instruction & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2,
                                                                                       const class GALGAS_registerExpression & inOperand3,
                                                                                       const class GALGAS_bool & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_IF_IncDec class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                        const GALGAS_bool & in_mIncrement,
                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (const class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec bang_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_conditionExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_conditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_conditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_conditionExpression (const class cPtr_baseline_5F_conditionExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_conditionExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_conditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_conditionExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_conditionExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_conditionExpression : public acStrongPtr_class {

//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GALGAS_uint inCurrentPage,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           const class GALGAS_bool inComplementaryBranch,
           const class GALGAS_location inInstructionLocation,
           const class GALGAS_string inTargetLabel,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_baseline_5F_conditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_conditionExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_conditionExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_conditionExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_conditionExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_conditionExpression_2D_weak (const class GALGAS_baseline_5F_conditionExpression & inSource) ;

  public: GALGAS_baseline_5F_conditionExpression_2D_weak & operator = (const class GALGAS_baseline_5F_conditionExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_conditionExpression bang_baseline_5F_conditionExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_conditionExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_conditionExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_conditionExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_conditionExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_incDecRegisterInCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_incDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_incDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_incDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_incDecRegisterInCondition : public cPtr_baseline_5F_conditionExpression {

//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GALGAS_uint inCurrentPage,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           const class GALGAS_bool inComplementaryBranch,
           const class GALGAS_location inInstructionLocation,
           const class GALGAS_string inTargetLabel,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                      const GALGAS_bool & in_mBranchIfZero
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_incDecRegisterInCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak : public GALGAS_baseline_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (const class GALGAS_baseline_5F_incDecRegisterInCondition & inSource) ;

  public: GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak & operator = (const class GALGAS_baseline_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_incDecRegisterInCondition bang_baseline_5F_incDecRegisterInCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_negateCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_negateCondition : public GALGAS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_negateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_negateCondition (const class cPtr_baseline_5F_negateCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_conditionExpression readProperty_mCondition (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_negateCondition extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_negateCondition constructor_new (const class GALGAS_baseline_5F_conditionExpression & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCondition (class GALGAS_baseline_5F_conditionExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_negateCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_negateCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_negateCondition : public cPtr_baseline_5F_conditionExpression {

//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GALGAS_uint inCurrentPage,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           const class GALGAS_bool inComplementaryBranch,
           const class GALGAS_location inInstructionLocation,
           const class GALGAS_string inTargetLabel,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_conditionExpression mProperty_mCondition ;

//--- Constructor
  public: cPtr_baseline_5F_negateCondition (const GALGAS_baseline_5F_conditionExpression & in_mCondition
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_negateCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_negateCondition_2D_weak : public GALGAS_baseline_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_negateCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_negateCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_negateCondition_2D_weak (const class GALGAS_baseline_5F_negateCondition & inSource) ;

  public: GALGAS_baseline_5F_negateCondition_2D_weak & operator = (const class GALGAS_baseline_5F_negateCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_negateCondition bang_baseline_5F_negateCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_negateCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_negateCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_negateCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_negateCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_andCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_andCondition : public GALGAS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_andCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_andCondition (const class cPtr_baseline_5F_andCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_conditionExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_baseline_5F_conditionExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_andCondition extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_andCondition constructor_new (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                        const class GALGAS_baseline_5F_conditionExpression & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_andCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_baseline_5F_conditionExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_baseline_5F_conditionExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_andCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_andCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_andCondition : public cPtr_baseline_5F_conditionExpression {

//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GALGAS_uint inCurrentPage,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           const class GALGAS_bool inComplementaryBranch,
           const class GALGAS_location inInstructionLocation,
           const class GALGAS_string inTargetLabel,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_conditionExpression mProperty_mLeftExpression ;
  public: GALGAS_baseline_5F_conditionExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_baseline_5F_andCondition (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                         const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_andCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_andCondition_2D_weak : public GALGAS_baseline_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_andCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_andCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_andCondition_2D_weak (const class GALGAS_baseline_5F_andCondition & inSource) ;

  public: GALGAS_baseline_5F_andCondition_2D_weak & operator = (const class GALGAS_baseline_5F_andCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_andCondition bang_baseline_5F_andCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_andCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_andCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_andCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_andCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GALGAS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                                          const class GALGAS_bitNumberExpression & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_bitTest_in_structured_if_condition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_baseline_5F_conditionExpression {

//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GALGAS_uint inCurrentPage,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           const class GALGAS_bool inComplementaryBranch,
           const class GALGAS_location inInstructionLocation,
           const class GALGAS_string inTargetLabel,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                           const GALGAS_bitNumberExpression & in_mBitNumber
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak : public GALGAS_baseline_5F_conditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (const class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & operator = (const class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_structured_5F_if reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_structured_5F_if : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_structured_5F_if (const class cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_conditionExpression readProperty_mIfCondition (void) const ;

  public: class GALGAS_baseline_5F_instructionList readProperty_mThenInstructionList (void) const ;

  public: class GALGAS_baseline_5F_instructionList readProperty_mElseInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfElsePartLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_baseline_5F_conditionExpression & inOperand1,
                                                                                           const class GALGAS_baseline_5F_instructionList & inOperand2,
                                                                                           const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                           const class GALGAS_location & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_baseline_5F_instructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfElsePartLocation (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIfCondition (class GALGAS_baseline_5F_conditionExpression inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMThenInstructionList (class GALGAS_baseline_5F_instructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_structured_5F_if class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_structured_if class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_structured_5F_if : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GALGAS_string inErrorMessage,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_conditionExpression mProperty_mIfCondition ;
  public: GALGAS_baseline_5F_instructionList mProperty_mThenInstructionList ;
  public: GALGAS_baseline_5F_instructionList mProperty_mElseInstructionList ;
  public: GALGAS_location mProperty_mEndOfElsePartLocation ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                            const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                            const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                            const GALGAS_location & in_mEndOfElsePartLocation
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_structured_5F_if_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak (const class GALGAS_baseline_5F_instruction_5F_structured_5F_if & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_structured_5F_if bang_baseline_5F_instruction_5F_structured_5F_if_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_partList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_partList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_partList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_baseline_5F_partList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                 const class GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_partList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_partList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_partList constructor_listWithValue (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                              const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                              const class GALGAS_location & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_partList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                     const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_baseline_5F_partList add_operation (const GALGAS_baseline_5F_partList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_baseline_5F_partList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_conditionExpression constinArgument0,
                                                      class GALGAS_baseline_5F_instructionList constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                 class GALGAS_baseline_5F_instructionList & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                class GALGAS_baseline_5F_instructionList & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                      class GALGAS_baseline_5F_instructionList & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GALGAS_baseline_5F_conditionExpression constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GALGAS_location constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_baseline_5F_instructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                              class GALGAS_baseline_5F_instructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                             class GALGAS_baseline_5F_instructionList & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_conditionExpression getter_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_partList ;
 
} ; // End of GALGAS_baseline_5F_partList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_partList : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_partList (const GALGAS_baseline_5F_partList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_baseline_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GALGAS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baseline_5F_partList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_partList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_partList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_baseline_5F_conditionExpression mProperty_mCondition ;
  public: inline GALGAS_baseline_5F_conditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: inline GALGAS_baseline_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfPartLocation ;
  public: inline GALGAS_location readProperty_mEndOfPartLocation (void) const {
    return mProperty_mEndOfPartLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_partList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GALGAS_baseline_5F_conditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_baseline_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_partList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_partList_2D_element (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                  const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_partList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_partList_2D_element constructor_new (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                               const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                               const class GALGAS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_partList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_partList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_do_5F_while reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_do_5F_while : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_do_5F_while (const class cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_instructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfRepeatedInstructionList (void) const ;

  public: class GALGAS_baseline_5F_partList readProperty_mWhilePartList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                      const class GALGAS_location & inOperand2,
                                                                                      const class GALGAS_baseline_5F_partList & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRepeatedInstructionList (class GALGAS_location inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRepeatedInstructionList (class GALGAS_baseline_5F_instructionList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhilePartList (class GALGAS_baseline_5F_partList inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_do_5F_while class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_do_while class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_do_5F_while : public cPtr_baseline_5F_instruction {

//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GALGAS_stringset & ioUsedRoutines,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GALGAS_uint inCurrentPage,
           const class GALGAS_baselineRoutineMap inRoutineMap,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_uint & ioLocalLabelIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioContinuesInSequence,
           const class GALGAS_routineKind inRoutineKind,
           const class GALGAS_bool inLastInstructionShouldReturn,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_instructionList mProperty_mRepeatedInstructionList ;
  public: GALGAS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GALGAS_baseline_5F_partList mProperty_mWhilePartList ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                       const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                       const GALGAS_baseline_5F_partList & in_mWhilePartList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_do_5F_while_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak : public GALGAS_baseline_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak (const class GALGAS_baseline_5F_instruction_5F_do_5F_while & inSource) ;

  public: GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak & operator = (const class GALGAS_baseline_5F_instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_instruction_5F_do_5F_while bang_baseline_5F_instruction_5F_do_5F_while_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_routineDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_routineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_routineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_baseline_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mRoutineName,
                                                 const class GALGAS_luint & in_mPage,
                                                 const class GALGAS_bool & in_mIsNoReturn,
                                                 const class GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_routineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_routineDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_routineDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_luint & inOperand1,
                                                                                           const class GALGAS_bool & inOperand2,
                                                                                           const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                           const class GALGAS_location & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_routineDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                     const class GALGAS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_baseline_5F_routineDefinitionList add_operation (const GALGAS_baseline_5F_routineDefinitionList & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_baseline_5F_routineDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_luint constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_baseline_5F_instructionList constinArgument3,
                                                      class GALGAS_location constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_baseline_5F_instructionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_luint & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_baseline_5F_instructionList & outArgument3,
                                                class GALGAS_location & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_luint & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_baseline_5F_instructionList & outArgument3,
                                                      class GALGAS_location & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_baseline_5F_instructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPageAtIndex (class GALGAS_luint constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_baseline_5F_instructionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_luint & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_baseline_5F_instructionList & outArgument3,
                                             class GALGAS_location & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_routineDefinitionList ;
 
} ; // End of GALGAS_baseline_5F_routineDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_routineDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GALGAS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baseline_5F_routineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_routineDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_routineDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: inline GALGAS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GALGAS_luint mProperty_mPage ;
  public: inline GALGAS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: inline GALGAS_baseline_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfRoutineLocation ;
  public: inline GALGAS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_routineDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_routineDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMPage (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_baseline_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_routineDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_routineDefinitionList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_luint & in_mPage,
                                                               const GALGAS_bool & in_mIsNoReturn,
                                                               const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                               const GALGAS_location & in_mEndOfRoutineLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_routineDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_routineDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_luint & inOperand1,
                                                                                            const class GALGAS_bool & inOperand2,
                                                                                            const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                            const class GALGAS_location & inOperand4
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_routineDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_baseline_5F_instruction * inObject,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_declaredRoutineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_baseline_5F_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inSource) ;
  public: GALGAS_baseline_5F_declaredRoutineMap & operator = (const GALGAS_baseline_5F_declaredRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_baseline_5F_declaredRoutineMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_declaredRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_baseline_5F_declaredRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_declaredRoutineMap ;
 
} ; // End of GALGAS_baseline_5F_declaredRoutineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_declaredRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baseline_5F_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@baseline_declaredRoutineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_baseline_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_baseline_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_declaredRoutineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_declaredRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_declaredRoutineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldTerminateWithMOVLW'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldTerminateWithMOVLW (class cPtr_baseline_5F_instruction * inObject,
                                                   const GALGAS_string constin_inErrorMessage,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldNotContinueInSequence'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldNotContinueInSequence (class cPtr_baseline_5F_instruction * inObject,
                                                      const GALGAS_string constin_inErrorMessage,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_registerExpression struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mAssemblyString ;
  public: inline GALGAS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GALGAS_uint mProperty_mRegisterAddress ;
  public: inline GALGAS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                 const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                              const class GALGAS_uint & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_registerExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction (const class cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction : public acStrongPtr_class {

//--- Extension getter isLABEL
  public: virtual class GALGAS_bool getter_isLABEL (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isNULL
  public: virtual class GALGAS_bool getter_isNULL (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isSkippingInstruction
  public: virtual class GALGAS_bool getter_isSkippingInstruction (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GALGAS_baselineSymbolTableForOptimizations & ioRoutineSymbolTable,
           const class GALGAS_uint inLineIndex,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GALGAS_uint & ioCurrentWordAdress,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction bang_baseline_5F_intermediate_5F_instruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_intermediate_instructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_intermediate_5F_instructionList constructor_listWithValue (const class GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_instructionList add_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_intermediate_5F_instructionList ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_intermediate_5F_instructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_baseline_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_baseline_5F_intermediate_5F_instruction mProperty_mInstruction ;
  public: inline GALGAS_baseline_5F_intermediate_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_baseline_5F_intermediate_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element constructor_new (const class GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_NULL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_NULL : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_NULL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_NULL (const class cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_NULL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_NULL constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_NULL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_NULL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_NULL : public cPtr_baseline_5F_intermediate_5F_instruction {

//--- Extension getter isNULL
  public: virtual class GALGAS_bool getter_isNULL (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_NULL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak : public GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_NULL & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_NULL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_NULL bang_baseline_5F_intermediate_5F_NULL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo (const class cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo : public cPtr_baseline_5F_intermediate_5F_instruction {

//--- Properties

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak : public GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo bang_baseline_5F_intermediate_5F_pseudo_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mPage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE constructor_new (const class GALGAS_uint & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_PAGE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public cPtr_baseline_5F_intermediate_5F_pseudo {

//--- Extension getter isLABEL
  public: virtual class GALGAS_bool getter_isLABEL (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GALGAS_uint & ioCurrentWordAdress,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GALGAS_uint & in_mPage
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_LABEL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_intermediate_5F_pseudo {

//--- Extension getter isLABEL
  public: virtual class GALGAS_bool getter_isLABEL (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GALGAS_baselineSymbolTableForOptimizations & ioRoutineSymbolTable,
           const class GALGAS_uint inLineIndex,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRoutineName (void) const ;

  public: class GALGAS_bool readProperty_mIsRegular (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBEGIN_ROUTINE
  public: virtual void method_optimizeBEGIN_5F_ROUTINE (const class GALGAS_uint inLineIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_bool mProperty_mIsRegular ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                       const GALGAS_bool & in_mIsRegular
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRoutineName (void) const ;

  public: class GALGAS_uint readProperty_mPage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_uint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {

//--- Extension getter isLABEL
  public: virtual class GALGAS_bool getter_isLABEL (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_uint mProperty_mPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                     const GALGAS_uint & in_mPage
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak : public GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_actualInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_actualInstruction : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_actualInstruction (const class cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_actualInstruction extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_actualInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_actualInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_actualInstruction : public cPtr_baseline_5F_intermediate_5F_instruction {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_actualInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak : public GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_actualInstruction & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_actualInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_actualInstruction bang_baseline_5F_intermediate_5F_actualInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction (void) const ;

  public: class GALGAS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                             const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                             const class GALGAS_bool & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_baseline_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction_FD class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD bang_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_F reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mInstruction (void) const ;

  public: class GALGAS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                            const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_baseline_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_F class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction_F class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_F : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                             const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_F_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_F bang_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_bit_5F_oriented_5F_op readProperty_mInstruction (void) const ;

  public: class GALGAS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                             const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                             const class GALGAS_uint & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_bit_5F_oriented_5F_op inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_baseline_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction_FB class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GALGAS_uint & in_mBitNumber
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB bang_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                      const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                      const class GALGAS_uint & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_baseline_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction_BitTestSkip class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter isSkippingInstruction
  public: virtual class GALGAS_bool getter_isSkippingInstruction (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_bool & in_mSkipIfSet,
                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_uint & in_mBitNumber
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_GOTO reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_GOTO : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_GOTO constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_GOTO (const class cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_GOTO : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GALGAS_baselineSymbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_GOTO_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_GOTO bang_baseline_5F_intermediate_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_JUMP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JUMP : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_JUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_uint readProperty_mCurrentPage (void) const ;

  public: class GALGAS_uint readProperty_mTargetPage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2,
                                                                                const class GALGAS_uint & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JUMP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GALGAS_baselineSymbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_uint mProperty_mCurrentPage ;
  public: GALGAS_uint mProperty_mTargetPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_uint & in_mCurrentPage,
                                                 const GALGAS_uint & in_mTargetPage
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_JUMP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_JUMP bang_baseline_5F_intermediate_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_CALL : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_CALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_CALL : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeCALL
  public: virtual void method_optimizeCALL (const class GALGAS_baselineSymbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_CALL_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_CALL & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_CALL bang_baseline_5F_intermediate_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JSR : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JSR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_JSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_uint readProperty_mCurrentPage (void) const ;

  public: class GALGAS_uint readProperty_mTargetPage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_uint & inOperand2,
                                                                               const class GALGAS_uint & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCurrentPage (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetPage (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJSR
  public: virtual void method_optimizeJSR (const class GALGAS_baselineSymbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_uint mProperty_mCurrentPage ;
  public: GALGAS_uint mProperty_mTargetPage ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel,
                                                const GALGAS_uint & in_mCurrentPage,
                                                const GALGAS_uint & in_mTargetPage
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_JSR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_JSR & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_JSR bang_baseline_5F_intermediate_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_WO_OPERAND class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_TRIS reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_TRIS : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_TRIS (const class cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mOperand (void) const ;

  public: class GALGAS_uint readProperty_mOpcode (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpcode (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_TRIS class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_TRIS class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_TRIS : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mOperand ;
  public: GALGAS_uint mProperty_mOpcode ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mOperand,
                                                 const GALGAS_uint & in_mOpcode
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_TRIS_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_TRIS bang_baseline_5F_intermediate_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mInstruction (void) const ;

  public: class GALGAS_uint readProperty_mLiteralValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                           const class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                           const class GALGAS_uint & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction (class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLiteralValue (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction_literalOperation class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter nextInstructionIsReachable
  public: virtual class GALGAS_bool getter_nextInstructionIsReachable (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public: GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                            const GALGAS_uint & in_mLiteralValue
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_luint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_instruction_MNOP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_luint & in_mOccurrenceFactor
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_incDecRegisterInCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_string readProperty_mTargetLabel (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                     const class GALGAS_string & inOperand2,
                                                                                                     const class GALGAS_bool & inOperand3,
                                                                                                     const class GALGAS_bool & inOperand4,
                                                                                                     const class GALGAS_bool & inOperand5
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_baseline_5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_incDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GALGAS_stringset & ioReferencedLabelSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GALGAS_baseline_5F_intermediate_5F_registerExpression inSTATUSregister,
           const class GALGAS_bitSliceTable inStatusRegisterBitSliceTable,
           class GALGAS_baseline_5F_assembly_5F_instructionList & ioAssemblyInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GALGAS_baselineSymbolTableForOptimizations inSymbolTable,
           const class GALGAS_uint inLineIndex,
           class GALGAS_baseline_5F_intermediate_5F_instructionList & ioGeneratedInstructionList,
           class GALGAS_string & ioListFileContents,
           class GALGAS_bool & ioOptimizationsDone,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_string mProperty_mTargetLabel ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GALGAS_string & in_mTargetLabel,
                                                                      const GALGAS_bool & in_mIncrement,
                                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                      const GALGAS_bool & in_mBranchIfZero
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak : public GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (const class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & operator = (const class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baselineRoutineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_baselineRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baselineRoutineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baselineRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_baselineRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_baselineRoutineMap (const GALGAS_baselineRoutineMap & inSource) ;
  public: GALGAS_baselineRoutineMap & operator = (const GALGAS_baselineRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baselineRoutineMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baselineRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_baselineRoutineMap constructor_mapWithMapToOverride (const class GALGAS_baselineRoutineMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_luint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPageForKey (class GALGAS_luint constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPageForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baselineRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bool & outOperand1,
                                                    class GALGAS_luint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_baselineRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baselineRoutineMap ;
 
} ; // End of GALGAS_baselineRoutineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baselineRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_baselineRoutineMap (const GALGAS_baselineRoutineMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mPage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baselineRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@baselineRoutineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_baselineRoutineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: GALGAS_luint mProperty_mPage ;

//--- Constructor
  public: cMapElement_baselineRoutineMap (const GALGAS_lstring & inKey,
                                          const GALGAS_bool & in_mIsNoReturn,
                                          const GALGAS_luint & in_mPage
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baselineRoutineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baselineRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GALGAS_luint mProperty_mPage ;
  public: inline GALGAS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baselineRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_baselineRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMPage (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baselineRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baselineRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_bool & in_mIsNoReturn,
                                                const GALGAS_luint & in_mPage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baselineRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baselineRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1,
                                                                             const class GALGAS_luint & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baselineRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baselineRoutineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (class cPtr_baseline_5F_instruction * inObject,
                                                                               const GALGAS_uint constin_inCurrentPage,
                                                                               const GALGAS_baselineRoutineMap constin_inRoutineMap,
                                                                               const GALGAS_registerTable constin_inRegisterTable,
                                                                               const GALGAS_constantMap constin_inConstantMap,
                                                                               GALGAS_uint & io_ioLocalLabelIndex,
                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               GALGAS_string & io_ioListFileContents,
                                                                               GALGAS_bool & io_ioContinuesInSequence,
                                                                               const GALGAS_routineKind constin_inRoutineKind,
                                                                               const GALGAS_bool constin_inLastInstructionShouldReturn,
                                                                               GALGAS_stringset & io_ioUsedRegisters,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (class cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const GALGAS_uint constin_inCurrentPage,
                                                                             const GALGAS_registerTable constin_inRegisterTable,
                                                                             const GALGAS_constantMap constin_inConstantMap,
                                                                             GALGAS_uint & io_ioLocalLabelIndex,
                                                                             const GALGAS_bool constin_inComplementaryBranch,
                                                                             const GALGAS_location constin_inInstructionLocation,
                                                                             const GALGAS_string constin_inTargetLabel,
                                                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             GALGAS_stringset & io_ioUsedRegisters,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction print'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_intermediate_instruction length'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint callExtensionGetter_length (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baselineSymbolTableForOptimizations map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_baselineSymbolTableForOptimizations ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baselineSymbolTableForOptimizations : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_baselineSymbolTableForOptimizations (void) ;

//--------------------------------- Handle copy
  public: GALGAS_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inSource) ;
  public: GALGAS_baselineSymbolTableForOptimizations & operator = (const GALGAS_baselineSymbolTableForOptimizations & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baselineSymbolTableForOptimizations extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baselineSymbolTableForOptimizations constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_baselineSymbolTableForOptimizations constructor_mapWithMapToOverride (const class GALGAS_baselineSymbolTableForOptimizations & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLineIndexForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionLineIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baselineSymbolTableForOptimizations getter_overriddenMap (C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_baselineSymbolTableForOptimizations * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                const GALGAS_string & inKey
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baselineSymbolTableForOptimizations ;
 
} ; // End of GALGAS_baselineSymbolTableForOptimizations class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baselineSymbolTableForOptimizations : public cGenericAbstractEnumerator {
  public: cEnumerator_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baselineSymbolTableForOptimizations_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@baselineSymbolTableForOptimizations' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_baselineSymbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mDefinitionLineIndex ;

//--- Constructor
  public: cMapElement_baselineSymbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                           const GALGAS_uint & in_mDefinitionLineIndex
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baselineSymbolTableForOptimizations_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baselineSymbolTableForOptimizations_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mDefinitionLineIndex ;
  public: inline GALGAS_uint readProperty_mDefinitionLineIndex (void) const {
    return mProperty_mDefinitionLineIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baselineSymbolTableForOptimizations_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_baselineSymbolTableForOptimizations_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionLineIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLineIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baselineSymbolTableForOptimizations_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baselineSymbolTableForOptimizations_2D_element (const GALGAS_lstring & in_lkey,
                                                                 const GALGAS_uint & in_mDefinitionLineIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baselineSymbolTableForOptimizations_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baselineSymbolTableForOptimizations_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_uint & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baselineSymbolTableForOptimizations_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction setCurrentAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_uint & io_ioCurrentWordAdress,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isNULL'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isSkippingInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_stringset & io_ioReferencedLabelSet,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction defineLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress (const class GALGAS_uint constinArgument0,
                                                      const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                      class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_assembly_5F_instruction (const class cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_assembly_instruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction : public acStrongPtr_class {

//--- Extension getter length
  public: virtual class GALGAS_uint getter_length (C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GALGAS_baseline_5F_symbolTable & ioRoutineSymbolTable,
           class GALGAS_uint & ioWordAddress,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GALGAS_baseline_5F_symbolTable inRoutineSymbolTable,
           class GALGAS_string & ioListFileContents,
           class GALGAS_uint & ioWordAddress,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GALGAS_string & ioListFileContents,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_instruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_assembly_5F_instruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (const class GALGAS_baseline_5F_assembly_5F_instruction & inSource) ;

  public: GALGAS_baseline_5F_assembly_5F_instruction_2D_weak & operator = (const class GALGAS_baseline_5F_assembly_5F_instruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_baseline_5F_assembly_5F_instruction bang_baseline_5F_assembly_5F_instruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_instruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_instruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_assembly_instructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_baseline_5F_assembly_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_baseline_5F_assembly_5F_instructionList constructor_listWithValue (const class GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_assembly_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_baseline_5F_assembly_5F_instructionList add_operation (const GALGAS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_assembly_5F_instruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_baseline_5F_assembly_5F_instruction constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_assembly_5F_instructionList ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_baseline_5F_assembly_5F_instructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_baseline_5F_assembly_5F_instructionList (const GALGAS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_baseline_5F_assembly_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_assembly_5F_instructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_baseline_5F_assembly_5F_instruction mProperty_mInstruction ;
  public: inline GALGAS_baseline_5F_assembly_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_baseline_5F_assembly_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (const GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_assembly_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element constructor_new (const class GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ;

