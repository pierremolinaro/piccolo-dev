#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           class GGS_stringset & io_ioVisitedBlockSet,
                                           const class GGS_blockInstructionBlockMap constin_inBlockMap,
                                           const class GGS_string constin_inCurrentBlockName,
                                           const class GGS_uint constin_inInitialBlockSetting,
                                           class GGS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           class GGS_bool & io_ioContinuesInSequence,
                                           class GGS_bool & io_ioContinueAccessibilityExploration,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const class GGS_uint constin_inAccessBankSplitOffset,
                                        const class GGS_uint constin_inCurrentBank,
                                        const class GGS_registerTable constin_inRegisterTable,
                                        const class GGS_constantMap constin_inConstantMap,
                                        class GGS_uint & io_ioLocalLabelIndex,
                                        class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        class GGS_stringset & io_ioUsedRegisters,
                                        const class GGS_string constin_inLabelForBlock,
                                        class GGS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (class cPtr_pic_31__38_ConditionExpression * inObject,
                                           const class GGS_uint constin_inAccessBankSplitOffset,
                                           const class GGS_uint constin_inCurrentBank,
                                           const class GGS_registerTable constin_inRegisterTable,
                                           const class GGS_constantMap constin_inConstantMap,
                                           class GGS_uint & io_ioLocalLabelIndex,
                                           class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const class GGS_lstring constin_inConditionTrueLabel,
                                           const class GGS_lstring constin_inConditionFalseLabel,
                                           class GGS_stringset & io_ioUsedRegisters,
                                           class GGS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const class GGS_uint constin_inAddress,
                                                                     const class GGS_string constin_inBlockLabel,
                                                                     const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     class GGS_uint & io_ioConversionCount,
                                                                     class GGS_string & io_ioListFileContents,
                                                                     class GGS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringlist callExtensionGetter_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
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
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE piccoloDevice_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_piccoloDevice_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccoloDevice_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_piccoloDevice_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_piccoloDevice_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_integer = 2 ;
  public: static const int32_t kToken_string = 3 ;
  public: static const int32_t kToken_comment = 4 ;
  public: static const int32_t kToken_controller = 5 ;
  public: static const int32_t kToken_processor = 6 ;
  public: static const int32_t kToken_romsize = 7 ;
  public: static const int32_t kToken_eepromsize = 8 ;
  public: static const int32_t kToken_bank = 9 ;
  public: static const int32_t kToken_unusedregister = 10 ;
  public: static const int32_t kToken_mirrorat = 11 ;
  public: static const int32_t kToken_ram = 12 ;
  public: static const int32_t kToken_register = 13 ;
  public: static const int32_t kToken_at = 14 ;
  public: static const int32_t kToken_to = 15 ;
  public: static const int32_t kToken_configuration = 16 ;
  public: static const int32_t kToken_width = 17 ;
  public: static const int32_t kToken_description = 18 ;
  public: static const int32_t kToken_mask = 19 ;
  public: static const int32_t kToken_illegal = 20 ;
  public: static const int32_t kToken_message = 21 ;
  public: static const int32_t kToken_setting = 22 ;
  public: static const int32_t kToken__3C_ = 23 ;
  public: static const int32_t kToken__3E_ = 24 ;
  public: static const int32_t kToken__2C_ = 25 ;
  public: static const int32_t kToken__2D_ = 26 ;
  public: static const int32_t kToken__2F_ = 27 ;
  public: static const int32_t kToken__3B_ = 28 ;
  public: static const int32_t kToken__3A_ = 29 ;
  public: static const int32_t kToken__5B_ = 30 ;
  public: static const int32_t kToken__5D_ = 31 ;
  public: static const int32_t kToken__7B_ = 32 ;
  public: static const int32_t kToken__7D_ = 33 ;

//--- Key words table 'controlKeyWordList'
  public: static int32_t search_into_controlKeyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: utf32 attributeValue_charValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccoloDevice_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 33 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_assembly_instruction length'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_length (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4String' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_34_String (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_sint_36__34_ mProperty_mValue ;
  public: inline GGS_sint_36__34_ readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_sint_36__34_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_sint_36__34_ & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_constantMap_2E_element (const GGS_constantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantMap_2E_element & operator = (const GGS_constantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_sint_36__34_ & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_sint_36__34_ & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_constantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_uint mProperty_mRequiredBank ;
  public: inline GGS_uint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GGS_uint mProperty_mReturnedBank ;
  public: inline GGS_uint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GGS_bool mProperty_mPreservesBank ;
  public: inline GGS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineMap_2E_element (const GGS_lstring & in_lkey,
                                     const GGS_bool & in_mIsNoReturn,
                                     const GGS_uint & in_mRequiredBank,
                                     const GGS_uint & in_mReturnedBank,
                                     const GGS_bool & in_mPreservesBank) ;

//--------------------------------- Copy constructor
  public: GGS_routineMap_2E_element (const GGS_routineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineMap_2E_element & operator = (const GGS_routineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     const class GGS_uint & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMap_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_bool & inOperand1,
                                                                 const class GGS_uint & inOperand2,
                                                                 const class GGS_uint & inOperand3,
                                                                 const class GGS_bool & inOperand4,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineMap_2E_element_3F_ (const GGS_routineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@immediatExpression eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (class cPtr_immediatExpression * inObject,
                               const class GGS_registerTable constin_inRegisterTable,
                               const class GGS_constantMap constin_inConstantMap,
                               class GGS_sint_36__34_ & out_outResult,
                               class GGS_stringset & io_ioUsedRegisters,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@bitNumberExpression getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBitNumber (class cPtr_bitNumberExpression * inObject,
                                       const class GGS_registerTable constin_inRegisterTable,
                                       const class GGS_constantMap constin_inConstantMap,
                                       class GGS_stringset & io_ioUsedRegisters,
                                       const class GGS_bitSliceTable constin_inBitSliceTable,
                                       class GGS_uint & out_outBitNumber,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForOptimizations_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForOptimizations_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDefinitionLineIndex ;
  public: inline GGS_uint readProperty_mDefinitionLineIndex (void) const {
    return mProperty_mDefinitionLineIndex ;
  }

  public: GGS_bool mProperty_mIsDeletable ;
  public: inline GGS_bool readProperty_mIsDeletable (void) const {
    return mProperty_mIsDeletable ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionLineIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLineIndex = inValue ;
  }

  public: inline void setter_setMIsDeletable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsDeletable = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForOptimizations_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_uint & in_mDefinitionLineIndex,
                                                      const GGS_bool & in_mIsDeletable) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForOptimizations_2E_element (const GGS_symbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForOptimizations_2E_element & operator = (const GGS_symbolTableForOptimizations_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForOptimizations_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForOptimizations_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForOptimizations_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForOptimizations.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForOptimizations_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForOptimizations_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForOptimizations_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForOptimizations_2E_element_3F_ (const GGS_symbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForOptimizations_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForOptimizations_2E_element unwrappedValue (void) const {
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
  public: static GGS_symbolTableForOptimizations_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                                   const class GGS_string constin_inNextLabel,
                                                   class GGS_uint & out_outMin,
                                                   class GGS_uint & out_outMax,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (class cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                   const class GGS_string constin_inNextLabel,
                                   class GGS_uint & out_outMin,
                                   class GGS_uint & out_outMax,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         const class GGS_blockDurationMap constin_inExploredBlockMap,
                                         class GGS_uint & out_outMin,
                                         class GGS_uint & out_outMax,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                  const class GGS_string constin_inBlockLabel,
                                                  class GGS_bool & io_ioOptimizationDone,
                                                  class GGS_string & io_ioListFileContents,
                                                  class GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  class GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  class GGS_bool & out_outIdenticalTerminators,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const class GGS_ipic_31__38_SequentialInstructionList inObject,
                                                       const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                       const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                       class GGS_stringset & io_ioReferencedBlockSet,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const class GGS_ipic_31__38_Block inObject,
                                            const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                            class GGS_stringset & io_ioReferencedBlockSet,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const class GGS_ipic_31__38_Block inObject,
                               const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                               const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                               const class GGS_ipic_31__38_BlockList constin_inBlockList,
                               class GGS_bool & io_ioOptimizationDone,
                               class GGS_string & io_ioListFileContents,
                               class GGS_ipic_31__38_Block & out_outOptimizedBlock,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const class GGS_symbolTableForBlockOptimization constinArgument0,
                                                                          const class GGS_optimizeFlagStruct constinArgument1,
                                                                          const class GGS_ipic_31__38_BlockList constinArgument2,
                                                                          const class GGS_ipic_31__38_SequentialInstructionList constinArgument3,
                                                                          const class GGS_lstring constinArgument4,
                                                                          class GGS_bool & outArgument5,
                                                                          class GGS_string & ioArgument6,
                                                                          class GGS_ipic_31__38_SequentialInstructionList & outArgument7,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const class GGS_ipic_31__38_Block inObject,
                                                 const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GGS_string constin_inNextBlockLabel,
                                                 const class GGS_uint constin_inBlockStartAddress,
                                                 class GGS_uint & io_ioConversionCount,
                                                 class GGS_string & io_ioListFileContents,
                                                 class GGS_ipic_31__38_Block & out_outModifiedBlock,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18Block blockSize' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_blockSize (const class GGS_ipic_31__38_Block & inObject,
                                          const class GGS_string & constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const class GGS_ipic_31__38_Block inObject,
                                             const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                             const class GGS_string constin_inNextBlockLabel,
                                             const class GGS_uint constin_inBlockStartAddress,
                                             class GGS_branchOverflowMap & io_ioOverflowMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

