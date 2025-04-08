#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@fieldSettingMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_fieldSettingMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mValue ;
  public: GGS_uint mProperty_mMask ;

//--- Constructors
  public: cMapElement_fieldSettingMap (const GGS_fieldSettingMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_fieldSettingMap (const GGS_lstring & inKey,
                                       const GGS_uint & in_mValue,
                                       const GGS_uint & in_mMask
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fieldSettingMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_fieldSettingMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mValue ;
  public: inline GGS_uint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

  public: GGS_uint mProperty_mMask ;
  public: inline GGS_uint readProperty_mMask (void) const {
    return mProperty_mMask ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fieldSettingMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

  public: inline void setter_setMMask (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMask = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fieldSettingMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mValue,
                                          const GGS_uint & in_mMask) ;

//--------------------------------- Copy constructor
  public: GGS_fieldSettingMap_2E_element (const GGS_fieldSettingMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fieldSettingMap_2E_element & operator = (const GGS_fieldSettingMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fieldSettingMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_uint & inOperand1,
                                                                  const class GGS_uint & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fieldSettingMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fieldSettingMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      const class GGS_uint & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fieldSettingMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_fieldSettingMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fieldSettingMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fieldSettingMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fieldSettingMap_2E_element_3F_ (const GGS_fieldSettingMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fieldSettingMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fieldSettingMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fieldSettingMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_instruction_5F_FD_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDWF,
    enum_ANDWF,
    enum_COMF,
    enum_DECF,
    enum_DECFSZ,
    enum_INCF,
    enum_INCFSZ,
    enum_IORWF,
    enum_MOVF,
    enum_RLF,
    enum_RRF,
    enum_SUBWF,
    enum_SWAPF,
    enum_XORWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_ADDWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_ANDWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_COMF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_DECF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_INCF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_IORWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_MOVF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_RLF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_RRF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_SUBWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_SWAPF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRLF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_instruction_FD_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_F_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_MOVWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_F_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_F_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_bit_5F_oriented_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_BCF,
    enum_BSF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_bit_5F_oriented_5F_op extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_bit_5F_oriented_5F_op class_func_BCF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_bit_5F_oriented_5F_op class_func_BSF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBSF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_literal_5F_instruction_5F_opcode
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ANDLW,
    enum_IORLW,
    enum_MOVLW,
    enum_RETLW,
    enum_XORLW
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_literal_5F_instruction_5F_opcode extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_ANDLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_IORLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_MOVLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_RETLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRETLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_WO_5F_OPERAND_5F_group
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_WO_5F_OPERAND_5F_group : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRW,
    enum_NOP,
    enum_CLRWDT,
    enum_OPTION_5F_,
    enum_SLEEP
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_WO_5F_OPERAND_5F_group extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_CLRW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_CLRWDT (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_NOP (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_OPTION_5F_ (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOPTION_5F_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_WO_OPERAND_group mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction (const class cPtr_baseline_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_init_21_ (const class GGS_location & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction (const GGS_location & in_mInstructionLocation,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_2E_weak (const class GGS_baseline_5F_instruction & inSource) ;

  public: GGS_baseline_5F_instruction_2E_weak & operator = (const class GGS_baseline_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction bang_baseline_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction unwrappedValue (void) const {
    GGS_baseline_5F_instruction result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_instructionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baseline_5F_instructionList (const class GGS_baseline_5F_instructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_instructionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baseline_5F_instructionList (const class GGS_baseline_5F_instructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instructionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_baseline_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instructionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instructionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instructionList class_func_listWithValue (const class GGS_baseline_5F_instruction & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_baseline_5F_instructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_baseline_5F_instruction & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_baseline_5F_instructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_baseline_5F_instructionList add_operation (const GGS_baseline_5F_instructionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_baseline_5F_instruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_baseline_5F_instruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_baseline_5F_instruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_baseline_5F_instruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_baseline_5F_instruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_baseline_5F_instruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_baseline_5F_instruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_baseline_5F_instruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_instructionList ;
  friend class DownEnumerator_baseline_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_instruction mProperty_mInstruction ;
  public: inline GGS_baseline_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_baseline_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_instructionList_2E_element (const GGS_baseline_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_instructionList_2E_element (const GGS_baseline_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_instructionList_2E_element & operator = (const GGS_baseline_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instructionList_2E_element init_21_ (const class GGS_baseline_5F_instruction & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instructionList_2E_element class_func_new (const class GGS_baseline_5F_instruction & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FD : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_FD (const class cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;
  public: void setProperty_mInstruction_5F_FD_5F_base_5F_code (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FD class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FD : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bool & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                              const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bool & in_m_5F_W_5F_isDestination,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FD_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_FD_2E_weak (const class GGS_baseline_5F_instruction_5F_FD & inSource) ;

  public: GGS_baseline_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_FD bang_baseline_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_FD unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_FD result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_FD (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_F : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_F (const class cPtr_baseline_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;
  public: void setProperty_mFAinstruction (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                    const class GGS_registerExpression & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_F class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                        const class GGS_registerExpression & inOperand2,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_F : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                              const class GGS_registerExpression & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                             const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GGS_registerExpression & in_mRegisterExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_F_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_F_2E_weak (const class GGS_baseline_5F_instruction_5F_F & inSource) ;

  public: GGS_baseline_5F_instruction_5F_F_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_F bang_baseline_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_F unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_F result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_F (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FB : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_FB (const class cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;
  public: void setProperty_mBitOrientedOp (const GGS_baseline_5F_bit_5F_oriented_5F_op & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FB class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FB : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bitNumberExpression & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                              const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bitNumberExpression & in_mBitNumber,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FB_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_FB_2E_weak (const class GGS_baseline_5F_instruction_5F_FB & inSource) ;

  public: GGS_baseline_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_FB bang_baseline_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_FB unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_FB result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_FB (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_CALL : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_CALL (const class cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_CALL extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_CALL class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_CALL : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_CALL_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_CALL_2E_weak (const class GGS_baseline_5F_instruction_5F_CALL & inSource) ;

  public: GGS_baseline_5F_instruction_5F_CALL_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_CALL_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_CALL bang_baseline_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_CALL unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_CALL result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_CALL (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JSR : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_JSR (const class cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_JSR init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_JSR extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JSR : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_JSR_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JSR_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_JSR_2E_weak (const class GGS_baseline_5F_instruction_5F_JSR & inSource) ;

  public: GGS_baseline_5F_instruction_5F_JSR_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_JSR_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_JSR bang_baseline_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_JSR unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_JSR result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_JSR (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_GOTO : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_GOTO (const class cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_GOTO extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_GOTO class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_GOTO : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_GOTO_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_GOTO_2E_weak (const class GGS_baseline_5F_instruction_5F_GOTO & inSource) ;

  public: GGS_baseline_5F_instruction_5F_GOTO_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_GOTO_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_GOTO bang_baseline_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_GOTO unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_GOTO result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_GOTO (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JUMP : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_JUMP (const class cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_JUMP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_JUMP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JUMP : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_JUMP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_JUMP_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_JUMP_2E_weak (const class GGS_baseline_5F_instruction_5F_JUMP & inSource) ;

  public: GGS_baseline_5F_instruction_5F_JUMP_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_JUMP_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_JUMP bang_baseline_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_JUMP unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_JUMP result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_JUMP (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND init_21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND class_func_new (const class GGS_location & inOperand0,
                                                                                    const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                      Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                         const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (const class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) ;

  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_WO_5F_OPERAND bang_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_WO_5F_OPERAND unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_TRIS : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_TRIS (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_TRIS (const class cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_TRIS init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_TRIS extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_TRIS class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_TRIS class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_TRIS : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_TRIS_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOperand ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_TRIS_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_TRIS_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_TRIS_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_TRIS_2E_weak (const class GGS_baseline_5F_instruction_5F_TRIS & inSource) ;

  public: GGS_baseline_5F_instruction_5F_TRIS_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_TRIS & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_TRIS_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_TRIS_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_TRIS bang_baseline_5F_instruction_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_TRIS unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_TRIS result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_TRIS (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_TRIS_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_TRIS_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_TRIS_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_literalOperation : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;
  public: void setProperty_mLiteralInstruction (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;
  public: void setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                   const class GGS_immediatExpression & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                       const class GGS_immediatExpression & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                             const class GGS_immediatExpression & inOperand2,
                                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                            const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                            const GGS_immediatExpression & in_mImmediatExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_literalOperation_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (const class GGS_baseline_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_literalOperation bang_baseline_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_literalOperation (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_MNOP : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_MNOP (const class cPtr_baseline_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_luint & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_luint & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_MNOP : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_luint & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                const GGS_luint & in_mOccurrenceFactor,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_MNOP_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_MNOP_2E_weak (const class GGS_baseline_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_baseline_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_MNOP bang_baseline_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_MNOP unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_MNOP result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_instruction_5F_MNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_MNOP (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FOREVER : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_FOREVER (const class cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_baseline_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;
  public: void setProperty_mEndOfInstructionList (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_FOREVER init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_baseline_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FOREVER extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FOREVER class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_baseline_5F_instructionList & inOperand1,
                                                                              const class GGS_location & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FOREVER : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_baseline_5F_instructionList & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldNotContinueInSequence
  public: virtual void method_shouldNotContinueInSequence (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                   const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                   const GGS_location & in_mEndOfInstructionList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_FOREVER_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FOREVER_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (const class GGS_baseline_5F_instruction_5F_FOREVER & inSource) ;

  public: GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_FOREVER & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_FOREVER_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_FOREVER_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_FOREVER bang_baseline_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_FOREVER unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_FOREVER result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_FOREVER (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FOREVER_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FOREVER_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;
  public: void setProperty_mConstantName (const GGS_lstring & inValue) ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;
  public: void setProperty_mLowerBoundExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;
  public: void setProperty_mUpperBoundExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_baseline_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;
  public: void setProperty_mEndOfInstruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_lstring & inOperand1,
                                                                                               const class GGS_immediatExpression & inOperand2,
                                                                                               const class GGS_immediatExpression & inOperand3,
                                                                                               const class GGS_baseline_5F_instructionList & inOperand4,
                                                                                               const class GGS_location & inOperand5,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_immediatExpression & inOperand2,
                                                                                       const class GGS_immediatExpression & inOperand3,
                                                                                       const class GGS_baseline_5F_instructionList & inOperand4,
                                                                                       const class GGS_location & inOperand5,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_immediatExpression & inOperand2,
                                                                                         const class GGS_immediatExpression & inOperand3,
                                                                                         const class GGS_baseline_5F_instructionList & inOperand4,
                                                                                         const class GGS_location & inOperand5,
                                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GGS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mLowerBoundExpression,
                                                            const GGS_immediatExpression & in_mUpperBoundExpression,
                                                            const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_instruction & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instruction & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_baseline_5F_instruction & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                               const GGS_baseline_5F_instruction & in_mInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON bang_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_BitTest : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GGS_bool & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_IF_5F_BitTest init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_baseline_5F_instruction & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_registerExpression & inOperand3,
                                                                                        const class GGS_bitNumberExpression & inOperand4,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_BitTest extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_BitTest class_func_new (const class GGS_location & inOperand0,
                                                                                    const class GGS_baseline_5F_instruction & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_registerExpression & inOperand3,
                                                                                    const class GGS_bitNumberExpression & inOperand4,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instruction & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_registerExpression & inOperand3,
                                                                                  const class GGS_bitNumberExpression & inOperand4,
                                                                                  Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getBaseCode
  public: virtual void method_getBaseCode (class GGS_uint & arg_outBaseCode,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getMnemonic
  public: virtual void method_getMnemonic (class GGS_string & arg_outMnemonic,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                         const GGS_baseline_5F_instruction & in_mInstruction,
                                                         const GGS_bool & in_mSkipIfSet,
                                                         const GGS_registerExpression & in_mRegisterExpression,
                                                         const GGS_bitNumberExpression & in_mBitNumber,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (const class GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_IF_5F_BitTest bang_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_IF_5F_BitTest unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_IF_5F_BitTest (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_IncDec : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec (const class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_IF_5F_IncDec init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_baseline_5F_instruction & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_registerExpression & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_IncDec extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_IncDec class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_instruction & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   const class GGS_registerExpression & inOperand3,
                                                                                   const class GGS_bool & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_baseline_5F_instruction & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_registerExpression & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                        const GGS_baseline_5F_instruction & in_mInstruction,
                                                        const GGS_bool & in_mIncrement,
                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak : public GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (const class GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_IF_5F_IncDec bang_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_IF_5F_IncDec unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_IF_5F_IncDec (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_conditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_conditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_conditionExpression (const class cPtr_baseline_5F_conditionExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_conditionExpression init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_conditionExpression extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_conditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_conditionExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_conditionExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_conditionExpression_init (Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_conditionExpression (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_conditionExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_conditionExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_conditionExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_conditionExpression_2E_weak (const class GGS_baseline_5F_conditionExpression & inSource) ;

  public: GGS_baseline_5F_conditionExpression_2E_weak & operator = (const class GGS_baseline_5F_conditionExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_conditionExpression_2E_weak init_nil (void) {
    GGS_baseline_5F_conditionExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_conditionExpression bang_baseline_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_conditionExpression unwrappedValue (void) const {
    GGS_baseline_5F_conditionExpression result ;
    if (isValid ()) {
      const cPtr_baseline_5F_conditionExpression * p = (cPtr_baseline_5F_conditionExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_conditionExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_conditionExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_conditionExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_conditionExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_incDecRegisterInCondition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_incDecRegisterInCondition init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_incDecRegisterInCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_incDecRegisterInCondition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_incDecRegisterInCondition_init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                           const class GGS_bool & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_bool & inOperand3,
                                                                           Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_baseline_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_incDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                      const GGS_bool & in_mIncrement,
                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                      const GGS_bool & in_mBranchIfZero,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_incDecRegisterInCondition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_incDecRegisterInCondition_2E_weak (const class GGS_baseline_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_baseline_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_baseline_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_incDecRegisterInCondition bang_baseline_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_incDecRegisterInCondition unwrappedValue (void) const {
    GGS_baseline_5F_incDecRegisterInCondition result ;
    if (isValid ()) {
      const cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_incDecRegisterInCondition (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_negateCondition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_negateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_negateCondition (const class cPtr_baseline_5F_negateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_conditionExpression readProperty_mCondition (void) const ;
  public: void setProperty_mCondition (const GGS_baseline_5F_conditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_negateCondition init_21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_negateCondition extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_negateCondition class_func_new (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_negateCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_negateCondition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_negateCondition_init_21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mCondition ;


//--- Default constructor
  public: cPtr_baseline_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_negateCondition (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_negateCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_negateCondition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_negateCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_negateCondition_2E_weak (const class GGS_baseline_5F_negateCondition & inSource) ;

  public: GGS_baseline_5F_negateCondition_2E_weak & operator = (const class GGS_baseline_5F_negateCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_negateCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_negateCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_negateCondition bang_baseline_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_negateCondition unwrappedValue (void) const {
    GGS_baseline_5F_negateCondition result ;
    if (isValid ()) {
      const cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_negateCondition (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_negateCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_negateCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_negateCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_andCondition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_andCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_andCondition (const class cPtr_baseline_5F_andCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_conditionExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_baseline_5F_conditionExpression & inValue) ;

  public: class GGS_baseline_5F_conditionExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_baseline_5F_conditionExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_andCondition init_21__21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                            const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_andCondition extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_andCondition class_func_new (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                    const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_andCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_andCondition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_andCondition_init_21__21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                      const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mLeftExpression ;
  public: GGS_baseline_5F_conditionExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_baseline_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_andCondition (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                         const GGS_baseline_5F_conditionExpression & in_mRightExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_andCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_andCondition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_andCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_andCondition_2E_weak (const class GGS_baseline_5F_andCondition & inSource) ;

  public: GGS_baseline_5F_andCondition_2E_weak & operator = (const class GGS_baseline_5F_andCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_andCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_andCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_andCondition bang_baseline_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_andCondition unwrappedValue (void) const {
    GGS_baseline_5F_andCondition result ;
    if (isValid ()) {
      const cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_andCondition (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_andCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_andCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_andCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GGS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;
  public: void setProperty_mRegisterExpression (const GGS_registerExpression & inValue) ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_bitNumberExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                              const class GGS_bitNumberExpression & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                                      const class GGS_bitNumberExpression & inOperand1,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_baseline_5F_conditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                        const class GGS_bitNumberExpression & inOperand1,
                                                                                        Compiler * inCompiler) ;


//--- Extension method build_intermediate_condition_instructions
  public: virtual void method_build_5F_intermediate_5F_condition_5F_instructions (const class GGS_uint arg_inCurrentPage,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           const class GGS_bool arg_inComplementaryBranch,
           const class GGS_location arg_inInstructionLocation,
           const class GGS_string arg_inTargetLabel,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GGS_registerExpression & in_mRegisterExpression,
                                                                           const GGS_bitNumberExpression & in_mBitNumber,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak : public GGS_baseline_5F_conditionExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & operator = (const class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak init_nil (void) {
    GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition unwrappedValue (void) const {
    GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
    if (isValid ()) {
      const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_structured_5F_if : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_structured_5F_if (const class cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_conditionExpression readProperty_mIfCondition (void) const ;
  public: void setProperty_mIfCondition (const GGS_baseline_5F_conditionExpression & inValue) ;

  public: class GGS_baseline_5F_instructionList readProperty_mThenInstructionList (void) const ;
  public: void setProperty_mThenInstructionList (const GGS_baseline_5F_instructionList & inValue) ;

  public: class GGS_baseline_5F_instructionList readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GGS_baseline_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfElsePartLocation (void) const ;
  public: void setProperty_mEndOfElsePartLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_structured_5F_if init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                                                           const class GGS_baseline_5F_instructionList & inOperand2,
                                                                                           const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                           const class GGS_location & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_structured_5F_if extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_structured_5F_if class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                                                       const class GGS_baseline_5F_instructionList & inOperand2,
                                                                                       const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                       const class GGS_location & inOperand4,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_structured_5F_if : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_conditionExpression & inOperand1,
                                                                                     const class GGS_baseline_5F_instructionList & inOperand2,
                                                                                     const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                     const class GGS_location & inOperand4,
                                                                                     Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method shouldTerminateWithMOVLW
  public: virtual void method_shouldTerminateWithMOVLW (const class GGS_string arg_inErrorMessage,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mIfCondition ;
  public: GGS_baseline_5F_instructionList mProperty_mThenInstructionList ;
  public: GGS_baseline_5F_instructionList mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElsePartLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                            const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                            const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                            const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                            const GGS_location & in_mEndOfElsePartLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_structured_5F_if_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (const class GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) ;

  public: GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_structured_5F_if bang_baseline_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_structured_5F_if unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_structured_5F_if result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_structured_5F_if (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_partList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_partList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baseline_5F_partList (const class GGS_baseline_5F_partList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_partList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_partList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baseline_5F_partList (const class GGS_baseline_5F_partList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_partList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_partList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_partList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_partList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_baseline_5F_partList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_conditionExpression & in_mCondition,
                                                 const class GGS_baseline_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_partList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_partList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_partList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_partList class_func_listWithValue (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                          const class GGS_baseline_5F_instructionList & inOperand1,
                                                                          const class GGS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_baseline_5F_partList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                    const class GGS_baseline_5F_instructionList & inOperand1,
                                                    const class GGS_location & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_baseline_5F_partList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_baseline_5F_partList add_operation (const GGS_baseline_5F_partList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_baseline_5F_conditionExpression constinArgument0,
                                               class GGS_baseline_5F_instructionList constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_baseline_5F_conditionExpression constinArgument0,
                                                      class GGS_baseline_5F_instructionList constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                 class GGS_baseline_5F_instructionList & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                class GGS_baseline_5F_instructionList & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                      class GGS_baseline_5F_instructionList & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GGS_baseline_5F_conditionExpression constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_baseline_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_baseline_5F_conditionExpression & outArgument0,
                                              class GGS_baseline_5F_instructionList & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_baseline_5F_conditionExpression & outArgument0,
                                             class GGS_baseline_5F_instructionList & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_conditionExpression getter_mConditionAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfPartLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_partList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_partList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_partList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_partList ;
  friend class DownEnumerator_baseline_5F_partList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_partList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_partList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_conditionExpression mProperty_mCondition ;
  public: inline GGS_baseline_5F_conditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfPartLocation ;
  public: inline GGS_location readProperty_mEndOfPartLocation (void) const {
    return mProperty_mEndOfPartLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_partList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GGS_baseline_5F_conditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_baseline_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_partList_2E_element (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                               const GGS_baseline_5F_instructionList & in_mInstructionList,
                                               const GGS_location & in_mEndOfPartLocation) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_partList_2E_element (const GGS_baseline_5F_partList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_partList_2E_element & operator = (const GGS_baseline_5F_partList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_partList_2E_element init_21__21__21_ (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                       const class GGS_baseline_5F_instructionList & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_partList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_partList_2E_element class_func_new (const class GGS_baseline_5F_conditionExpression & inOperand0,
                                                                           const class GGS_baseline_5F_instructionList & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_do_5F_while : public GGS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_instruction_5F_do_5F_while (const class cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instructionList readProperty_mRepeatedInstructionList (void) const ;
  public: void setProperty_mRepeatedInstructionList (const GGS_baseline_5F_instructionList & inValue) ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructionList (void) const ;
  public: void setProperty_mEndOfRepeatedInstructionList (const GGS_location & inValue) ;

  public: class GGS_baseline_5F_partList readProperty_mWhilePartList (void) const ;
  public: void setProperty_mWhilePartList (const GGS_baseline_5F_partList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_instruction_5F_do_5F_while init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instructionList & inOperand1,
                                                                                  const class GGS_location & inOperand2,
                                                                                  const class GGS_baseline_5F_partList & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_do_5F_while extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_do_5F_while class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_baseline_5F_instructionList & inOperand1,
                                                                                  const class GGS_location & inOperand2,
                                                                                  const class GGS_baseline_5F_partList & inOperand3,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_instruction_do_while class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_do_5F_while : public cPtr_baseline_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_baseline_5F_instructionList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_baseline_5F_partList & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_baseline_intermediate_instructionList
  public: virtual void method_build_5F_baseline_5F_intermediate_5F_instructionList (const class GGS_uint arg_inCurrentPage,
           const class GGS_baselineRoutineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           const class GGS_bool arg_inLastInstructionShouldReturn,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GGS_baseline_5F_partList mProperty_mWhilePartList ;


//--- Default constructor
  public: cPtr_baseline_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                       const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                       const GGS_location & in_mEndOfRepeatedInstructionList,
                                                       const GGS_baseline_5F_partList & in_mWhilePartList,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_instruction_5F_do_5F_while_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak : public GGS_baseline_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (const class GGS_baseline_5F_instruction_5F_do_5F_while & inSource) ;

  public: GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & operator = (const class GGS_baseline_5F_instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak init_nil (void) {
    GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_instruction_5F_do_5F_while bang_baseline_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_instruction_5F_do_5F_while unwrappedValue (void) const {
    GGS_baseline_5F_instruction_5F_do_5F_while result ;
    if (isValid ()) {
      const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_instruction_5F_do_5F_while (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_routineDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_routineDefinitionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baseline_5F_routineDefinitionList (const class GGS_baseline_5F_routineDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_routineDefinitionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baseline_5F_routineDefinitionList (const class GGS_baseline_5F_routineDefinitionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_routineDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_routineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_routineDefinitionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_baseline_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mPage,
                                                 const class GGS_bool & in_mIsNoReturn,
                                                 const class GGS_baseline_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_routineDefinitionList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_routineDefinitionList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_routineDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_routineDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                       const class GGS_location & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_baseline_5F_routineDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_luint & inOperand1,
                                                    const class GGS_bool & inOperand2,
                                                    const class GGS_baseline_5F_instructionList & inOperand3,
                                                    const class GGS_location & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_baseline_5F_routineDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_baseline_5F_routineDefinitionList add_operation (const GGS_baseline_5F_routineDefinitionList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_bool constinArgument2,
                                               class GGS_baseline_5F_instructionList constinArgument3,
                                               class GGS_location constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_baseline_5F_instructionList constinArgument3,
                                                      class GGS_location constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 class GGS_baseline_5F_instructionList & outArgument3,
                                                 class GGS_location & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_bool & outArgument2,
                                                class GGS_baseline_5F_instructionList & outArgument3,
                                                class GGS_location & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_baseline_5F_instructionList & outArgument3,
                                                      class GGS_location & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_baseline_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPageAtIndex (class GGS_luint constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_luint & outArgument1,
                                              class GGS_bool & outArgument2,
                                              class GGS_baseline_5F_instructionList & outArgument3,
                                              class GGS_location & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_bool & outArgument2,
                                             class GGS_baseline_5F_instructionList & outArgument3,
                                             class GGS_location & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mPageAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mRoutineNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_routineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_routineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_routineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_routineDefinitionList ;
  friend class DownEnumerator_baseline_5F_routineDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_routineDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_routineDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: inline GGS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GGS_luint mProperty_mPage ;
  public: inline GGS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_baseline_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfRoutineLocation ;
  public: inline GGS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_routineDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMPage (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_baseline_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_lstring & in_mRoutineName,
                                                            const GGS_luint & in_mPage,
                                                            const GGS_bool & in_mIsNoReturn,
                                                            const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfRoutineLocation) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_routineDefinitionList_2E_element & operator = (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_routineDefinitionList_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_luint & inOperand1,
                                                                                            const class GGS_bool & inOperand2,
                                                                                            const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                            const class GGS_location & inOperand4,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_routineDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_routineDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_luint & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_baseline_5F_instructionList & inOperand3,
                                                                                        const class GGS_location & inOperand4,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_baseline_5F_instruction * inObject,
                                          class GGS_stringset & io_ioUsedRoutines,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_declaredRoutineMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_declaredRoutineMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baseline_5F_declaredRoutineMap (const class GGS_baseline_5F_declaredRoutineMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_declaredRoutineMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baseline_5F_declaredRoutineMap (const class GGS_baseline_5F_declaredRoutineMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_declaredRoutineMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_baseline_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GGS_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inSource) ;
  public: GGS_baseline_5F_declaredRoutineMap & operator = (const GGS_baseline_5F_declaredRoutineMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_declaredRoutineMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_declaredRoutineMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_declaredRoutineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_declaredRoutineMap class_func_mapWithMapToOverride (const class GGS_baseline_5F_declaredRoutineMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_baseline_5F_declaredRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GGS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_declaredRoutineMap ;
  friend class DownEnumerator_baseline_5F_declaredRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@baseline_declaredRoutineMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_baseline_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_baseline_5F_declaredRoutineMap (const GGS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_declaredRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_declaredRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_declaredRoutineMap_2E_element & operator = (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_declaredRoutineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baseline_declaredRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baseline_5F_declaredRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baseline_5F_declaredRoutineMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldTerminateWithMOVLW (class cPtr_baseline_5F_instruction * inObject,
                                                   const class GGS_string constin_inErrorMessage,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldNotContinueInSequence (class cPtr_baseline_5F_instruction * inObject,
                                                      const class GGS_string constin_inErrorMessage,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_registerExpression struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyString ;
  public: inline GGS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                              const GGS_uint & in_mRegisterAddress) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_baseline_5F_intermediate_5F_registerExpression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_intermediate_5F_registerExpression & operator = (const GGS_baseline_5F_intermediate_5F_registerExpression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_registerExpression init_21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_registerExpression class_func_new (const class GGS_string & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction (const class cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_baselineSymbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentWordAdress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction bang_baseline_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction * p = (cPtr_baseline_5F_intermediate_5F_instruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_intermediate_5F_instructionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baseline_5F_intermediate_5F_instructionList (const class GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_intermediate_5F_instructionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baseline_5F_intermediate_5F_instructionList (const class GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_intermediate_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instructionList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instructionList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_intermediate_5F_instructionList class_func_listWithValue (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_baseline_5F_intermediate_5F_instructionList add_operation (const GGS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_intermediate_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_intermediate_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_intermediate_5F_instructionList ;
  friend class DownEnumerator_baseline_5F_intermediate_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_intermediate_5F_instruction mProperty_mInstruction ;
  public: inline GGS_baseline_5F_intermediate_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_baseline_5F_intermediate_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element & operator = (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instructionList_2E_element init_21_ (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instructionList_2E_element class_func_new (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_NULL : public GGS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_NULL (const class cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_NULL init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_NULL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_NULL class_func_new (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_NULL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_NULL : public cPtr_baseline_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_NULL_init (Compiler * inCompiler) ;


//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_NULL (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_NULL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_NULL_2E_weak : public GGS_baseline_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_NULL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_NULL_2E_weak (const class GGS_baseline_5F_intermediate_5F_NULL & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_NULL_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_NULL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_NULL_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_NULL bang_baseline_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_NULL unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_NULL result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_NULL * p = (cPtr_baseline_5F_intermediate_5F_NULL *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_NULL (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_NULL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_NULL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo : public GGS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo (const class cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo : public cPtr_baseline_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_init (Compiler * inCompiler) ;


//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_2E_weak : public GGS_baseline_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo bang_baseline_5F_intermediate_5F_pseudo_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_pseudo unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_pseudo result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_pseudo * p = (cPtr_baseline_5F_intermediate_5F_pseudo *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_pseudo (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mPage (void) const ;
  public: void setProperty_mPage (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE init_21_ (const class GGS_uint & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE class_func_new (const class GGS_uint & inOperand0,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_PAGE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (const class GGS_uint & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentWordAdress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GGS_uint & in_mPage,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;
  public: void setProperty_mLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL init_21_ (const class GGS_lstring & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL class_func_new (const class GGS_lstring & inOperand0,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_baselineSymbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;
  public: void setProperty_mRoutineName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mIsRegular (void) const ;
  public: void setProperty_mIsRegular (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBEGIN_ROUTINE
  public: virtual void method_optimizeBEGIN_5F_ROUTINE (const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_bool mProperty_mIsRegular ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                       const GGS_bool & in_mIsRegular,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public GGS_baseline_5F_intermediate_5F_pseudo {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;
  public: void setProperty_mRoutineName (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mPage (void) const ;
  public: void setProperty_mPage (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class_func_new (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_uint & inOperand1,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_uint mProperty_mPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                     const GGS_uint & in_mPage,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak : public GGS_baseline_5F_intermediate_5F_pseudo_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_actualInstruction : public GGS_baseline_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_actualInstruction (const class cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_actualInstruction : public cPtr_baseline_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_actualInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak : public GGS_baseline_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (const class GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_actualInstruction bang_baseline_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_actualInstruction unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_actualInstruction result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_actualInstruction (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FD : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_FD class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                              const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GGS_bool & in_m_5F_W_5F_isDestination,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FD bang_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction_5F_FD unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction_5F_FD (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_F : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                    const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_F class_func_new (const class GGS_location & inOperand0,
                                                                                        const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                        const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_F : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                              const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                              Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                             const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                             const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_F bang_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction_5F_F unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction_5F_F (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FB : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_bit_5F_oriented_5F_op readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_bit_5F_oriented_5F_op & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_FB class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                   const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_uint & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                              const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GGS_uint & in_mBitNumber,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_FB bang_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction_5F_FB unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction_5F_FB (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GGS_bool & inValue) ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip class_func_new (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                            const class GGS_uint & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_bool & in_mSkipIfSet,
                                                                       const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GGS_uint & in_mBitNumber,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_GOTO : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_GOTO (const class cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_GOTO extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_GOTO class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_GOTO : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_GOTO_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (const class GGS_baseline_5F_intermediate_5F_GOTO & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_GOTO_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_GOTO bang_baseline_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_GOTO unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_GOTO result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_GOTO (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JUMP : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_JUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mCurrentPage (void) const ;
  public: void setProperty_mCurrentPage (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mTargetPage (void) const ;
  public: void setProperty_mTargetPage (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_JUMP init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_uint & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_JUMP extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_uint & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JUMP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_uint & inOperand2,
                                                                      const class GGS_uint & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_uint mProperty_mCurrentPage ;
  public: GGS_uint mProperty_mTargetPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_uint & in_mCurrentPage,
                                                 const GGS_uint & in_mTargetPage,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JUMP_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (const class GGS_baseline_5F_intermediate_5F_JUMP & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_JUMP_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_JUMP bang_baseline_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_JUMP unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_JUMP result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_JUMP (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_CALL : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_CALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_CALL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_CALL class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_CALL : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeCALL
  public: virtual void method_optimizeCALL (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_CALL_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_CALL_2E_weak (const class GGS_baseline_5F_intermediate_5F_CALL & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_CALL_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_CALL_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_CALL bang_baseline_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_CALL unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_CALL result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_CALL (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JSR : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_JSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mCurrentPage (void) const ;
  public: void setProperty_mCurrentPage (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mTargetPage (void) const ;
  public: void setProperty_mTargetPage (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_JSR init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           const class GGS_uint & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           const class GGS_uint & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     const class GGS_uint & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJSR
  public: virtual void method_optimizeJSR (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_uint mProperty_mCurrentPage ;
  public: GGS_uint mProperty_mTargetPage ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                const GGS_uint & in_mCurrentPage,
                                                const GGS_uint & in_mTargetPage,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_JSR_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_JSR_2E_weak (const class GGS_baseline_5F_intermediate_5F_JSR & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_JSR bang_baseline_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_JSR unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_JSR result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_JSR (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND class_func_new (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                          const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (const class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_TRIS : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_TRIS (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_TRIS (const class cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mOpcode (void) const ;
  public: void setProperty_mOpcode (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_TRIS init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_uint & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_TRIS extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_TRIS class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_TRIS class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_TRIS : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_uint & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOperand ;
  public: GGS_uint mProperty_mOpcode ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mOperand,
                                                 const GGS_uint & in_mOpcode,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_TRIS_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_TRIS_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (const class GGS_baseline_5F_intermediate_5F_TRIS & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_TRIS & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_TRIS_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_TRIS bang_baseline_5F_intermediate_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_TRIS unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_TRIS result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_TRIS (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_TRIS_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_TRIS_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mInstruction (void) const ;
  public: void setProperty_mInstruction (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;
  public: void setProperty_mLiteralValue (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                   const class GGS_uint & inOperand2,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                                       const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                       const class GGS_uint & inOperand2,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                            const GGS_uint & in_mLiteralValue,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                                           const class GGS_luint & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                const GGS_luint & in_mOccurrenceFactor,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition : public GGS_baseline_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) ;

  public: class GGS_string readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GGS_string & inValue) ;

  public: class GGS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;
  public: void setProperty_mBranchIfZero (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_bool & inOperand3,
                                                                                                         const class GGS_bool & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition class_func_new (const class GGS_location & inOperand0,
                                                                                                 const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_bool & inOperand3,
                                                                                                 const class GGS_bool & inOperand4,
                                                                                                 const class GGS_bool & inOperand5,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_baseline_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_bool & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GGS_baselineSymbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_baseline_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_string mProperty_mTargetLabel ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_string & in_mTargetLabel,
                                                                      const GGS_bool & in_mIncrement,
                                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                      const GGS_bool & in_mBranchIfZero,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak : public GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition unwrappedValue (void) const {
    GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
    if (isValid ()) {
      const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineRoutineMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baselineRoutineMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baselineRoutineMap (const class GGS_baselineRoutineMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baselineRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baselineRoutineMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baselineRoutineMap (const class GGS_baselineRoutineMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baselineRoutineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineRoutineMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_baselineRoutineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baselineRoutineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_baselineRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_baselineRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GGS_baselineRoutineMap (const GGS_baselineRoutineMap & inSource) ;
  public: GGS_baselineRoutineMap & operator = (const GGS_baselineRoutineMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineRoutineMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineRoutineMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baselineRoutineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_baselineRoutineMap class_func_mapWithMapToOverride (const class GGS_baselineRoutineMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool constinArgument1,
                                                  class GGS_luint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPageForKey (class GGS_luint constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool & outArgument1,
                                                  class GGS_luint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mPageForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baselineRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_baselineRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_baselineRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_baselineRoutineMap ;
  friend class DownEnumerator_baselineRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@baselineRoutineMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_baselineRoutineMap : public cMapElement {
//--- Map attributes
  public: GGS_bool mProperty_mIsNoReturn ;
  public: GGS_luint mProperty_mPage ;

//--- Constructors
  public: cMapElement_baselineRoutineMap (const GGS_baselineRoutineMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_baselineRoutineMap (const GGS_lstring & inKey,
                                          const GGS_bool & in_mIsNoReturn,
                                          const GGS_luint & in_mPage
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baselineRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_luint mProperty_mPage ;
  public: inline GGS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baselineRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMPage (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baselineRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_bool & in_mIsNoReturn,
                                             const GGS_luint & in_mPage) ;

//--------------------------------- Copy constructor
  public: GGS_baselineRoutineMap_2E_element (const GGS_baselineRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baselineRoutineMap_2E_element & operator = (const GGS_baselineRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineRoutineMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_luint & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baselineRoutineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_luint & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baselineRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baselineRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baselineRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baselineRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baselineRoutineMap_2E_element_3F_ (const GGS_baselineRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baselineRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baselineRoutineMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (class cPtr_baseline_5F_instruction * inObject,
                                                                               const class GGS_uint constin_inCurrentPage,
                                                                               const class GGS_baselineRoutineMap constin_inRoutineMap,
                                                                               const class GGS_registerTable constin_inRegisterTable,
                                                                               const class GGS_constantMap constin_inConstantMap,
                                                                               class GGS_uint & io_ioLocalLabelIndex,
                                                                               class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               class GGS_string & io_ioListFileContents,
                                                                               class GGS_bool & io_ioContinuesInSequence,
                                                                               const class GGS_routineKind constin_inRoutineKind,
                                                                               const class GGS_bool constin_inLastInstructionShouldReturn,
                                                                               class GGS_stringset & io_ioUsedRegisters,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (class cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const class GGS_uint constin_inCurrentPage,
                                                                             const class GGS_registerTable constin_inRegisterTable,
                                                                             const class GGS_constantMap constin_inConstantMap,
                                                                             class GGS_uint & io_ioLocalLabelIndex,
                                                                             const class GGS_bool constin_inComplementaryBranch,
                                                                             const class GGS_location constin_inInstructionLocation,
                                                                             const class GGS_string constin_inTargetLabel,
                                                                             class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             class GGS_stringset & io_ioUsedRegisters,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_intermediate_instruction length'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_length (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineSymbolTableForOptimizations map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baselineSymbolTableForOptimizations final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baselineSymbolTableForOptimizations (const class GGS_baselineSymbolTableForOptimizations & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baselineSymbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baselineSymbolTableForOptimizations final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baselineSymbolTableForOptimizations (const class GGS_baselineSymbolTableForOptimizations & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baselineSymbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineSymbolTableForOptimizations map
//--------------------------------------------------------------------------------------------------

class cMapElement_baselineSymbolTableForOptimizations ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_baselineSymbolTableForOptimizations : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_baselineSymbolTableForOptimizations (void) ;

//--------------------------------- Handle copy
  public: GGS_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inSource) ;
  public: GGS_baselineSymbolTableForOptimizations & operator = (const GGS_baselineSymbolTableForOptimizations & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineSymbolTableForOptimizations init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineSymbolTableForOptimizations extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baselineSymbolTableForOptimizations class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_baselineSymbolTableForOptimizations class_func_mapWithMapToOverride (const class GGS_baselineSymbolTableForOptimizations & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLineIndexForKey (class GGS_uint constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mDefinitionLineIndexForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baselineSymbolTableForOptimizations getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_baselineSymbolTableForOptimizations_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_baselineSymbolTableForOptimizations * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                const GGS_string & inKey
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_baselineSymbolTableForOptimizations ;
  friend class DownEnumerator_baselineSymbolTableForOptimizations ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@baselineSymbolTableForOptimizations' map
//--------------------------------------------------------------------------------------------------

class cMapElement_baselineSymbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mDefinitionLineIndex ;

//--- Constructors
  public: cMapElement_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations_2E_element & inValue
                                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_baselineSymbolTableForOptimizations (const GGS_lstring & inKey,
                                                           const GGS_uint & in_mDefinitionLineIndex
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineSymbolTableForOptimizations_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baselineSymbolTableForOptimizations_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDefinitionLineIndex ;
  public: inline GGS_uint readProperty_mDefinitionLineIndex (void) const {
    return mProperty_mDefinitionLineIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionLineIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLineIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_lstring & in_lkey,
                                                              const GGS_uint & in_mDefinitionLineIndex) ;

//--------------------------------- Copy constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baselineSymbolTableForOptimizations_2E_element & operator = (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineSymbolTableForOptimizations_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineSymbolTableForOptimizations_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baselineSymbolTableForOptimizations_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baselineSymbolTableForOptimizations.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baselineSymbolTableForOptimizations_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baselineSymbolTableForOptimizations_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baselineSymbolTableForOptimizations_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baselineSymbolTableForOptimizations_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineSymbolTableForOptimizations_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            class GGS_uint & io_ioCurrentWordAdress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isLABEL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               class GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      class GGS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const class GGS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                             const class GGS_uint constin_inLineIndex,
                                             class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             class GGS_string & io_ioListFileContents,
                                             class GGS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (const class GGS_uint constinArgument0,
                                                                  const class GGS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                                  class GGS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction (const class cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction bang_baseline_5F_assembly_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_baseline_5F_assembly_5F_instruction unwrappedValue (void) const {
    GGS_baseline_5F_assembly_5F_instruction result ;
    if (isValid ()) {
      const cPtr_baseline_5F_assembly_5F_instruction * p = (cPtr_baseline_5F_assembly_5F_instruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_baseline_5F_assembly_5F_instruction (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_assembly_5F_instructionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_baseline_5F_assembly_5F_instructionList (const class GGS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_assembly_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_assembly_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_assembly_5F_instructionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_baseline_5F_assembly_5F_instructionList (const class GGS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_baseline_5F_assembly_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_assembly_5F_instructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_assembly_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instructionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_baseline_5F_assembly_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instructionList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instructionList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_assembly_5F_instructionList class_func_listWithValue (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_baseline_5F_assembly_5F_instructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_baseline_5F_assembly_5F_instructionList add_operation (const GGS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_baseline_5F_assembly_5F_instruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_baseline_5F_assembly_5F_instruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_baseline_5F_assembly_5F_instruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_assembly_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_assembly_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_assembly_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_baseline_5F_assembly_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_assembly_5F_instructionList ;
  friend class DownEnumerator_baseline_5F_assembly_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_assembly_5F_instruction mProperty_mInstruction ;
  public: inline GGS_baseline_5F_assembly_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_baseline_5F_assembly_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element & operator = (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instructionList_2E_element init_21_ (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instructionList_2E_element class_func_new (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2E_element ;

