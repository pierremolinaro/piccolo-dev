#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//LEXIQUE piccolo_5F_lexique
//
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_piccolo_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: C_String mLexicalAttribute_identifierString ;
  public: C_String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccolo_5F_lexique (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_piccolo_5F_lexique : public C_Lexique {
//--- Constructors
  public: C_Lexique_piccolo_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_piccolo_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_piccolo_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier,
   kToken_label,
   kToken_integer,
   kToken_literal_5F_char,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_commentMark,
   kToken_bank,
   kToken_banksave,
   kToken_banksel,
   kToken_baseline,
   kToken_block,
   kToken_bootloader,
   kToken_byte,
   kToken_case,
   kToken_checkbank,
   kToken_checknobank,
   kToken_checkpic,
   kToken_computed,
   kToken_configuration,
   kToken_const,
   kToken_contextsave,
   kToken_data,
   kToken_data_31__36_,
   kToken_data_38_,
   kToken_do,
   kToken_end,
   kToken_else,
   kToken_elsif,
   kToken_ensures,
   kToken_fast,
   kToken_forever,
   kToken_if,
   kToken_implements,
   kToken_include,
   kToken_inline,
   kToken_interrupt,
   kToken_macro,
   kToken_midrange,
   kToken_nobank,
   kToken_noreturn,
   kToken_page,
   kToken_pic_31__38_,
   kToken_preserved,
   kToken_protected,
   kToken_private,
   kToken_ram,
   kToken_requires,
   kToken_rom,
   kToken_routine,
   kToken_switch,
   kToken_unused,
   kToken_uses,
   kToken_w,
   kToken_while,
   kToken_addlw,
   kToken_addwf,
   kToken_addwfc,
   kToken_andlw,
   kToken_andwf,
   kToken_bc,
   kToken_bcf,
   kToken_bn,
   kToken_bnc,
   kToken_bnn,
   kToken_bov,
   kToken_bnov,
   kToken_bnz,
   kToken_bsf,
   kToken_bra,
   kToken_btg,
   kToken_bz,
   kToken_call,
   kToken_clrf,
   kToken_clrw,
   kToken_clrwdt,
   kToken_comf,
   kToken_daw,
   kToken_decf,
   kToken_incf,
   kToken_iorlw,
   kToken_iorwf,
   kToken_fnop,
   kToken_goto,
   kToken_jsr,
   kToken_jump,
   kToken_lfsr,
   kToken_ldataptr,
   kToken_ldata_38_ptr,
   kToken_ldata_31__36_ptr,
   kToken_ltblptr,
   kToken_mnop,
   kToken_movf,
   kToken_movff,
   kToken_movlw,
   kToken_movwf,
   kToken_mullw,
   kToken_mulwf,
   kToken_negf,
   kToken_nop,
   kToken_nopbra,
   kToken_pop,
   kToken_option,
   kToken_push,
   kToken_rcall,
   kToken_reset,
   kToken_retlw,
   kToken_rlcf,
   kToken_rlf,
   kToken_rlncf,
   kToken_rrcf,
   kToken_rrf,
   kToken_rrncf,
   kToken_setf,
   kToken_sleep,
   kToken_subfwb,
   kToken_sublw,
   kToken_subwf,
   kToken_subwfb,
   kToken_swapf,
   kToken_tblrd,
   kToken_tblwt,
   kToken_tris,
   kToken_xorlw,
   kToken_xorwf,
   kToken__2A_,
   kToken__2A__2B_,
   kToken__2C_,
   kToken__21__3D_,
   kToken__3C__3D_,
   kToken__3E__3D_,
   kToken__2A__2D_,
   kToken__2B__2A_,
   kToken__3B_,
   kToken__3A_,
   kToken__3D__3D_,
   kToken__3C_,
   kToken__3E_,
   kToken__5B_,
   kToken__5D_,
   kToken__2E_,
   kToken__21_,
   kToken__26_,
   kToken__7C_,
   kToken__3D_,
   kToken__7B_,
   kToken__7D_,
   kToken__28_,
   kToken__29_,
   kToken__2F_,
   kToken__2D_,
   kToken__2B_,
   kToken__3F_,
   kToken__5E_,
   kToken__3C__3C_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__25_,
   kToken__2E__2E__2E_} ;

//--- Key words table 'controlKeyWordList'
  public: static int16_t search_into_controlKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'instructionKeyWordList'
  public: static int16_t search_into_instructionKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public: GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: utf32 attributeValue_charValue (void) const ;
  public: C_String attributeValue_identifierString (void) const ;
  public: C_String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys
  public: enum {
    kIndexing_routineDefinition,
    kIndexing_routineCall,
    kIndexing_variableDeclaration,
    kIndexing_variableUse,
    kIndexing_constantDeclaration
  } ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccolo_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int16_t terminalVocabularyCount (void) const override { return 159 ; }

//--- Get Token String
  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccolo_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitSliceTable map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bitSliceTable ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bitSliceTable_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitSliceTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_bitSliceTable (void) ;

//--------------------------------- Handle copy
  public: GALGAS_bitSliceTable (const GALGAS_bitSliceTable & inSource) ;
  public: GALGAS_bitSliceTable & operator = (const GALGAS_bitSliceTable & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitSliceTable extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitSliceTable constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_bitSliceTable constructor_mapWithMapToOverride (const class GALGAS_bitSliceTable & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_bitSliceTable add_operation (const GALGAS_bitSliceTable & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceIndexForKey (class GALGAS_uint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceSizeForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSliceIndexForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSliceSizeForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_bitSliceTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bitSliceTable ;
 
} ; // End of GALGAS_bitSliceTable class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_bitSliceTable : public cGenericAbstractEnumerator {
  public: cEnumerator_bitSliceTable (const GALGAS_bitSliceTable & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mSliceIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mSliceSize (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_bitSliceTable_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bitSliceTable' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bitSliceTable : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mSliceIndex ;
  public: GALGAS_uint mProperty_mSliceSize ;

//--- Constructor
  public: cMapElement_bitSliceTable (const GALGAS_lstring & inKey,
                                     const GALGAS_uint & in_mSliceIndex,
                                     const GALGAS_uint & in_mSliceSize
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
// Phase 1: @bitSliceTable_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitSliceTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mSliceIndex ;
  public: inline GALGAS_uint readProperty_mSliceIndex (void) const {
    return mProperty_mSliceIndex ;
  }

  public: GALGAS_uint mProperty_mSliceSize ;
  public: inline GALGAS_uint readProperty_mSliceSize (void) const {
    return mProperty_mSliceSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitSliceTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_bitSliceTable_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSliceIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceIndex = inValue ;
  }

  public: inline void setter_setMSliceSize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceSize = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_bitSliceTable_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_bitSliceTable_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_uint & in_mSliceIndex,
                                           const GALGAS_uint & in_mSliceSize) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitSliceTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitSliceTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_uint & inOperand1,
                                                                        const class GALGAS_uint & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitSliceTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitSliceTable_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_immediatExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatExpression (const class cPtr_immediatExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatExpression extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_immediatExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_registerExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_registerExpression (const class cPtr_registerExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRegisterName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mOffset (void) const ;

  public: class GALGAS_location readProperty_mEndOfOffsetExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerExpression extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_immediatExpression & inOperand1,
                                                                  const class GALGAS_location & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfOffsetExpression (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOffset (class GALGAS_immediatExpression inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @registerExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_registerExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeRegisterExpression
  public: virtual void method_analyzeRegisterExpression (const class GALGAS_uint inAccessBankSplitOffset,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_bool inWriteAccess,
           class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outIPICregisterDescription,
           class GALGAS_bitSliceTable & outBitSliceTable,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method analyzeRegisterExpressionWithoutCheckingBank
  public: virtual void method_analyzeRegisterExpressionWithoutCheckingBank (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_bool inWriteAccess,
           class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outIPICregisterDescription,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getRegisterAddress
  public: virtual void method_getRegisterAddress (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           const class GALGAS_bool inWriteAccess,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_uint & outRegisterAddress,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method resolveBaselineAccess
  public: virtual void method_resolveBaselineAccess (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_baseline_5F_intermediate_5F_registerExpression & outIntermediateRegisterDescription,
           class GALGAS_bitSliceTable & outBitSliceTable,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method resolveMidrangeAccess
  public: virtual void method_resolveMidrangeAccess (const class GALGAS_uint inTotalBankCount,
           const class GALGAS_uint inCurrentBank,
           const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_midrange_5F_intermediate_5F_registerExpression & outIPICregisterDescription,
           class GALGAS_bitSliceTable & outBitSliceTable,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_lstring mProperty_mRegisterName ;
  public: GALGAS_immediatExpression mProperty_mOffset ;
  public: GALGAS_location mProperty_mEndOfOffsetExpression ;

//--- Constructor
  public: cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                   const GALGAS_immediatExpression & in_mOffset,
                                   const GALGAS_location & in_mEndOfOffsetExpression
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
// Phase 1: @registerExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_registerExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_registerExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_registerExpression_2D_weak (const class GALGAS_registerExpression & inSource) ;

  public: GALGAS_registerExpression_2D_weak & operator = (const class GALGAS_registerExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_registerExpression bang_registerExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRam reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationInRam : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_declarationInRam (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_declarationInRam (const class cPtr_declarationInRam * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationInRam extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_declarationInRam class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @declarationInRam class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_declarationInRam : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method handleDeclaration
  public: virtual void method_handleDeclaration (const class GALGAS_constantMap inConstantMap,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ramBankTable & ioRamBank,
           class GALGAS_registerTable & ioRegisterTable,
           const class GALGAS_lstring inCurrentRamBank,
           class GALGAS_declaredByteMap & ioDeclaredByteMap,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_declarationInRam (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRam_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationInRam_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_declarationInRam_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_declarationInRam_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_declarationInRam_2D_weak (const class GALGAS_declarationInRam & inSource) ;

  public: GALGAS_declarationInRam_2D_weak & operator = (const class GALGAS_declarationInRam & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_declarationInRam bang_declarationInRam_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationInRam_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declarationInRam_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declarationInRam_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_declarationInRam_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @registerProtection enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerProtection : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_registerProtection (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_publicRegister,
    kEnum_protectedRegister,
    kEnum_privateRegister
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerProtection extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerProtection constructor_privateRegister (LOCATION_ARGS) ;

  public: static class GALGAS_registerProtection constructor_protectedRegister (LOCATION_ARGS) ;

  public: static class GALGAS_registerProtection constructor_publicRegister (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerProtection & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateRegister (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedRegister (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPublicRegister (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_privateRegister () const ;

  public: VIRTUAL_IN_DEBUG bool optional_protectedRegister () const ;

  public: VIRTUAL_IN_DEBUG bool optional_publicRegister () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerProtection class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerProtection ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @byteDeclarationInRam reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_byteDeclarationInRam : public GALGAS_declarationInRam {
//--------------------------------- Default constructor
  public: GALGAS_byteDeclarationInRam (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_byteDeclarationInRam (const class cPtr_byteDeclarationInRam * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mSizeExpression (void) const ;

  public: class GALGAS_bitSliceTable readProperty_mBitSliceTable (void) const ;

  public: class GALGAS_string readProperty_mBitDefinitionString (void) const ;

  public: class GALGAS_registerProtection readProperty_mProtection (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_byteDeclarationInRam extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_byteDeclarationInRam constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_immediatExpression & inOperand1,
                                                                    const class GALGAS_bitSliceTable & inOperand2,
                                                                    const class GALGAS_string & inOperand3,
                                                                    const class GALGAS_registerProtection & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_byteDeclarationInRam & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitDefinitionString (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitSliceTable (class GALGAS_bitSliceTable inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMName (class GALGAS_lstring inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProtection (class GALGAS_registerProtection inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSizeExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_byteDeclarationInRam class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @byteDeclarationInRam class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_byteDeclarationInRam : public cPtr_declarationInRam {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method handleDeclaration
  public: virtual void method_handleDeclaration (const class GALGAS_constantMap inConstantMap,
           class GALGAS_stringset & ioUsedRegisters,
           class GALGAS_ramBankTable & ioRamBank,
           class GALGAS_registerTable & ioRegisterTable,
           const class GALGAS_lstring inCurrentRamBank,
           class GALGAS_declaredByteMap & ioDeclaredByteMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: GALGAS_immediatExpression mProperty_mSizeExpression ;
  public: GALGAS_bitSliceTable mProperty_mBitSliceTable ;
  public: GALGAS_string mProperty_mBitDefinitionString ;
  public: GALGAS_registerProtection mProperty_mProtection ;

//--- Constructor
  public: cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                     const GALGAS_immediatExpression & in_mSizeExpression,
                                     const GALGAS_bitSliceTable & in_mBitSliceTable,
                                     const GALGAS_string & in_mBitDefinitionString,
                                     const GALGAS_registerProtection & in_mProtection
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
// Phase 1: @byteDeclarationInRam_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_byteDeclarationInRam_2D_weak : public GALGAS_declarationInRam_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_byteDeclarationInRam_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_byteDeclarationInRam_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_byteDeclarationInRam_2D_weak (const class GALGAS_byteDeclarationInRam & inSource) ;

  public: GALGAS_byteDeclarationInRam_2D_weak & operator = (const class GALGAS_byteDeclarationInRam & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_byteDeclarationInRam bang_byteDeclarationInRam_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_byteDeclarationInRam_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_byteDeclarationInRam_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_byteDeclarationInRam_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_byteDeclarationInRam_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRamList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationInRamList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_declarationInRamList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_declarationInRamList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_declarationInRam & in_mDeclarationInRAM
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationInRamList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declarationInRamList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_declarationInRamList constructor_listWithValue (const class GALGAS_declarationInRam & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationInRamList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_declarationInRam & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_declarationInRamList add_operation (const GALGAS_declarationInRamList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_declarationInRamList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_declarationInRam constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_declarationInRam & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_declarationInRam & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_declarationInRam & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationInRAMAtIndex (class GALGAS_declarationInRam constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_declarationInRam & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_declarationInRam & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_declarationInRam getter_mDeclarationInRAMAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationInRamList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationInRamList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationInRamList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_declarationInRamList ;
 
} ; // End of GALGAS_declarationInRamList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declarationInRamList : public cGenericAbstractEnumerator {
  public: cEnumerator_declarationInRamList (const GALGAS_declarationInRamList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_declarationInRam current_mDeclarationInRAM (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_declarationInRamList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRamList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationInRamList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_declarationInRam mProperty_mDeclarationInRAM ;
  public: inline GALGAS_declarationInRam readProperty_mDeclarationInRAM (void) const {
    return mProperty_mDeclarationInRAM ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_declarationInRamList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationInRAM (const GALGAS_declarationInRam & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationInRAM = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_declarationInRamList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_declarationInRamList_2D_element (const GALGAS_declarationInRam & in_mDeclarationInRAM) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationInRamList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declarationInRamList_2D_element constructor_new (const class GALGAS_declarationInRam & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declarationInRamList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_declarationInRamList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ramDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ramDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ramDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ramDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mBankName,
                                                 const class GALGAS_declarationInRamList & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ramDefinitionList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ramDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ramDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_declarationInRamList & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ramDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_declarationInRamList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ramDefinitionList add_operation (const GALGAS_ramDefinitionList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ramDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_declarationInRamList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_declarationInRamList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_declarationInRamList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_declarationInRamList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBankNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GALGAS_declarationInRamList constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_declarationInRamList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_declarationInRamList & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBankNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationInRamList getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ramDefinitionList ;
 
} ; // End of GALGAS_ramDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ramDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_ramDefinitionList (const GALGAS_ramDefinitionList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mBankName (LOCATION_ARGS) const ;
  public: class GALGAS_declarationInRamList current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ramDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ramDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ramDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mBankName ;
  public: inline GALGAS_lstring readProperty_mBankName (void) const {
    return mProperty_mBankName ;
  }

  public: GALGAS_declarationInRamList mProperty_mDeclaration ;
  public: inline GALGAS_declarationInRamList readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ramDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_ramDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBankName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankName = inValue ;
  }

  public: inline void setter_setMDeclaration (const GALGAS_declarationInRamList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ramDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ramDefinitionList_2D_element (const GALGAS_lstring & in_mBankName,
                                               const GALGAS_declarationInRamList & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ramDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ramDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_declarationInRamList & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ramDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ramDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configSettingList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configSettingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_configSettingList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_configSettingList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSettingName,
                                                 const class GALGAS_lstring & in_mSettingValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configSettingList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configSettingList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_configSettingList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_configSettingList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_configSettingList add_operation (const GALGAS_configSettingList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_configSettingList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingValueAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSettingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSettingValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configSettingList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configSettingList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configSettingList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_configSettingList ;
 
} ; // End of GALGAS_configSettingList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configSettingList : public cGenericAbstractEnumerator {
  public: cEnumerator_configSettingList (const GALGAS_configSettingList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSettingName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSettingValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_configSettingList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configSettingList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configSettingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSettingName ;
  public: inline GALGAS_lstring readProperty_mSettingName (void) const {
    return mProperty_mSettingName ;
  }

  public: GALGAS_lstring mProperty_mSettingValue ;
  public: inline GALGAS_lstring readProperty_mSettingValue (void) const {
    return mProperty_mSettingValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_configSettingList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_configSettingList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSettingName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingName = inValue ;
  }

  public: inline void setter_setMSettingValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_configSettingList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_configSettingList_2D_element (const GALGAS_lstring & in_mSettingName,
                                               const GALGAS_lstring & in_mSettingValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configSettingList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configSettingList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_configSettingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_configSettingList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_configDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_configDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mDefinitionLocation,
                                                 const class GALGAS_configSettingList & in_mSettingList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configDefinitionList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_configDefinitionList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_configSettingList & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_configDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_configSettingList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_configDefinitionList add_operation (const GALGAS_configDefinitionList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_configDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_configSettingList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 class GALGAS_configSettingList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                class GALGAS_configSettingList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_configSettingList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLocationAtIndex (class GALGAS_location constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingListAtIndex (class GALGAS_configSettingList constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              class GALGAS_configSettingList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             class GALGAS_configSettingList & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDefinitionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configSettingList getter_mSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_configDefinitionList ;
 
} ; // End of GALGAS_configDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_configDefinitionList (const GALGAS_configDefinitionList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mDefinitionLocation (LOCATION_ARGS) const ;
  public: class GALGAS_configSettingList current_mSettingList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_configDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mDefinitionLocation ;
  public: inline GALGAS_location readProperty_mDefinitionLocation (void) const {
    return mProperty_mDefinitionLocation ;
  }

  public: GALGAS_configSettingList mProperty_mSettingList ;
  public: inline GALGAS_configSettingList readProperty_mSettingList (void) const {
    return mProperty_mSettingList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_configDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_configDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDefinitionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLocation = inValue ;
  }

  public: inline void setter_setMSettingList (const GALGAS_configSettingList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_configDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_configDefinitionList_2D_element (const GALGAS_location & in_mDefinitionLocation,
                                                  const GALGAS_configSettingList & in_mSettingList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configDefinitionList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_configSettingList & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_configDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_configDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_immediatExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatExpression_2D_weak (const class GALGAS_immediatExpression & inSource) ;

  public: GALGAS_immediatExpression_2D_weak & operator = (const class GALGAS_immediatExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatExpression bang_immediatExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_immediatExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_immediatExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_immediatExpression & in_mExpression,
                                                 const class GALGAS_location & in_mErrorLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatExpressionList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_immediatExpressionList constructor_listWithValue (const class GALGAS_immediatExpression & inOperand0,
                                                                                const class GALGAS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_immediatExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_immediatExpression & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_immediatExpressionList add_operation (const GALGAS_immediatExpressionList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_immediatExpressionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_immediatExpression constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_immediatExpression & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_immediatExpression & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_immediatExpression & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_immediatExpression constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_immediatExpression & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_immediatExpression & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_immediatExpressionList ;
 
} ; // End of GALGAS_immediatExpressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_immediatExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_immediatExpressionList (const GALGAS_immediatExpressionList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_immediatExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpressionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_immediatExpression mProperty_mExpression ;
  public: inline GALGAS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mErrorLocation ;
  public: inline GALGAS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_immediatExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_immediatExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_immediatExpressionList_2D_element (const GALGAS_immediatExpression & in_mExpression,
                                                    const GALGAS_location & in_mErrorLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatExpressionList_2D_element constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatExpressionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatInteger reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatInteger : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatInteger (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatInteger constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatInteger (const class cPtr_immediatInteger * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatInteger extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatInteger constructor_new (const class GALGAS_luint & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatInteger & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatInteger class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatInteger class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatInteger : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mValue ;

//--- Constructor
  public: cPtr_immediatInteger (const GALGAS_luint & in_mValue
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
// Phase 1: @immediatInteger_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatInteger_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatInteger_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatInteger_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatInteger_2D_weak (const class GALGAS_immediatInteger & inSource) ;

  public: GALGAS_immediatInteger_2D_weak & operator = (const class GALGAS_immediatInteger & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatInteger bang_immediatInteger_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatInteger_2D_weak extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatInteger_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatInteger_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatInteger_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRegister reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatRegister : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatRegister (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatRegister (const class cPtr_immediatRegister * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegister (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatRegister extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatRegister constructor_new (const class GALGAS_registerExpression & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatRegister & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatRegister class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatRegister class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatRegister : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_registerExpression mProperty_mRegister ;

//--- Constructor
  public: cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
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
// Phase 1: @immediatRegister_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatRegister_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatRegister_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatRegister_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatRegister_2D_weak (const class GALGAS_immediatRegister & inSource) ;

  public: GALGAS_immediatRegister_2D_weak & operator = (const class GALGAS_immediatRegister & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatRegister bang_immediatRegister_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatRegister_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatRegister_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatRegister_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatRegister_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatAdd reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatAdd : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatAdd (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatAdd (const class cPtr_immediatAdd * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatAdd extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatAdd constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatAdd & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatAdd class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatAdd class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatAdd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatAdd (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatAdd_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatAdd_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatAdd_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatAdd_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatAdd_2D_weak (const class GALGAS_immediatAdd & inSource) ;

  public: GALGAS_immediatAdd_2D_weak & operator = (const class GALGAS_immediatAdd & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatAdd bang_immediatAdd_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatAdd_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatAdd_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatAdd_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatAdd_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSub reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSub : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatSub (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatSub (const class cPtr_immediatSub * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSub extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSub constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatSub & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatSub class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatSub class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatSub : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatSub (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatSub_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSub_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatSub_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatSub_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatSub_2D_weak (const class GALGAS_immediatSub & inSource) ;

  public: GALGAS_immediatSub_2D_weak & operator = (const class GALGAS_immediatSub & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatSub bang_immediatSub_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSub_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSub_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatSub_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatSub_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatMul reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatMul : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatMul (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatMul (const class cPtr_immediatMul * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatMul extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatMul constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatMul & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatMul class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatMul class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatMul : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatMul (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatMul_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatMul_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatMul_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatMul_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatMul_2D_weak (const class GALGAS_immediatMul & inSource) ;

  public: GALGAS_immediatMul_2D_weak & operator = (const class GALGAS_immediatMul & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatMul bang_immediatMul_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatMul_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatMul_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatMul_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatMul_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatDiv reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatDiv : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatDiv (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatDiv (const class cPtr_immediatDiv * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatDiv extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatDiv constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatDiv & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatDiv class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatDiv class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatDiv : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatDiv (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatDiv_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatDiv_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatDiv_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatDiv_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatDiv_2D_weak (const class GALGAS_immediatDiv & inSource) ;

  public: GALGAS_immediatDiv_2D_weak & operator = (const class GALGAS_immediatDiv & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatDiv bang_immediatDiv_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatDiv_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatDiv_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatDiv_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatDiv_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatMod reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatMod : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatMod (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatMod (const class cPtr_immediatMod * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatMod extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatMod constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatMod & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatMod class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatMod class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatMod : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatMod (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatMod_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatMod_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatMod_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatMod_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatMod_2D_weak (const class GALGAS_immediatMod & inSource) ;

  public: GALGAS_immediatMod_2D_weak & operator = (const class GALGAS_immediatMod & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatMod bang_immediatMod_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatMod_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatMod_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatMod_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatMod_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatOr reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatOr : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatOr (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatOr (const class cPtr_immediatOr * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatOr extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatOr constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                          const class GALGAS_immediatExpression & inOperand1
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatOr & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatOr class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatOr class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatOr : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatOr (const GALGAS_immediatExpression & in_mLeftExpression,
                           const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatOr_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatOr_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatOr_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatOr_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatOr_2D_weak (const class GALGAS_immediatOr & inSource) ;

  public: GALGAS_immediatOr_2D_weak & operator = (const class GALGAS_immediatOr & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatOr bang_immediatOr_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatOr_2D_weak extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatOr_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatOr_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatOr_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatAnd reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatAnd : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatAnd (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatAnd (const class cPtr_immediatAnd * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatAnd extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatAnd constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatAnd & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatAnd class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatAnd class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatAnd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatAnd (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatAnd_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatAnd_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatAnd_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatAnd_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatAnd_2D_weak (const class GALGAS_immediatAnd & inSource) ;

  public: GALGAS_immediatAnd_2D_weak & operator = (const class GALGAS_immediatAnd & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatAnd bang_immediatAnd_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatAnd_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatAnd_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatAnd_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatAnd_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatXor reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatXor : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatXor (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatXor (const class cPtr_immediatXor * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatXor extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatXor constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                           const class GALGAS_immediatExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatXor & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatXor class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatXor class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatXor : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatXor (const GALGAS_immediatExpression & in_mLeftExpression,
                            const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatXor_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatXor_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatXor_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatXor_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatXor_2D_weak (const class GALGAS_immediatXor & inSource) ;

  public: GALGAS_immediatXor_2D_weak & operator = (const class GALGAS_immediatXor & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatXor bang_immediatXor_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatXor_2D_weak extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatXor_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatXor_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatXor_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLeftShift reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatLeftShift : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatLeftShift (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatLeftShift (const class cPtr_immediatLeftShift * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatLeftShift extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatLeftShift constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                 const class GALGAS_immediatExpression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatLeftShift & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatLeftShift class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatLeftShift class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatLeftShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatLeftShift (const GALGAS_immediatExpression & in_mLeftExpression,
                                  const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatLeftShift_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatLeftShift_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatLeftShift_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatLeftShift_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatLeftShift_2D_weak (const class GALGAS_immediatLeftShift & inSource) ;

  public: GALGAS_immediatLeftShift_2D_weak & operator = (const class GALGAS_immediatLeftShift & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatLeftShift bang_immediatLeftShift_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatLeftShift_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatLeftShift_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatLeftShift_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatLeftShift_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRightShift reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatRightShift : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatRightShift (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatRightShift (const class cPtr_immediatRightShift * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatRightShift extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatRightShift constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                  const class GALGAS_immediatExpression & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatRightShift & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatRightShift class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatRightShift class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatRightShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatRightShift (const GALGAS_immediatExpression & in_mLeftExpression,
                                   const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatRightShift_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatRightShift_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatRightShift_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatRightShift_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatRightShift_2D_weak (const class GALGAS_immediatRightShift & inSource) ;

  public: GALGAS_immediatRightShift_2D_weak & operator = (const class GALGAS_immediatRightShift & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatRightShift bang_immediatRightShift_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatRightShift_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatRightShift_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatRightShift_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatRightShift_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatEqualTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatEqualTest : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatEqualTest (const class cPtr_immediatEqualTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatEqualTest extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatEqualTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                 const class GALGAS_immediatExpression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatEqualTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatEqualTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatEqualTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                  const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatEqualTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatEqualTest_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatEqualTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatEqualTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatEqualTest_2D_weak (const class GALGAS_immediatEqualTest & inSource) ;

  public: GALGAS_immediatEqualTest_2D_weak & operator = (const class GALGAS_immediatEqualTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatEqualTest bang_immediatEqualTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatEqualTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatEqualTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatEqualTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatEqualTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatNotEqualTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatNotEqualTest : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatNotEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatNotEqualTest (const class cPtr_immediatNotEqualTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatNotEqualTest extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatNotEqualTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                    const class GALGAS_immediatExpression & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatNotEqualTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatNotEqualTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatNotEqualTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatNotEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatNotEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                     const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatNotEqualTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatNotEqualTest_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatNotEqualTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatNotEqualTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatNotEqualTest_2D_weak (const class GALGAS_immediatNotEqualTest & inSource) ;

  public: GALGAS_immediatNotEqualTest_2D_weak & operator = (const class GALGAS_immediatNotEqualTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatNotEqualTest bang_immediatNotEqualTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatNotEqualTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatNotEqualTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatNotEqualTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatNotEqualTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatGreaterTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatGreaterTest : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatGreaterTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatGreaterTest (const class cPtr_immediatGreaterTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatGreaterTest extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatGreaterTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                   const class GALGAS_immediatExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatGreaterTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatGreaterTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatGreaterTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatGreaterTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatGreaterTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatGreaterTest_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatGreaterTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatGreaterTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatGreaterTest_2D_weak (const class GALGAS_immediatGreaterTest & inSource) ;

  public: GALGAS_immediatGreaterTest_2D_weak & operator = (const class GALGAS_immediatGreaterTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatGreaterTest bang_immediatGreaterTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatGreaterTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatGreaterTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatGreaterTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatGreaterTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatGreaterOrEqualTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatGreaterOrEqualTest : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatGreaterOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatGreaterOrEqualTest (const class cPtr_immediatGreaterOrEqualTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatGreaterOrEqualTest extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatGreaterOrEqualTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                          const class GALGAS_immediatExpression & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatGreaterOrEqualTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatGreaterOrEqualTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatGreaterOrEqualTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatGreaterOrEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                           const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatGreaterOrEqualTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatGreaterOrEqualTest_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatGreaterOrEqualTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatGreaterOrEqualTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatGreaterOrEqualTest_2D_weak (const class GALGAS_immediatGreaterOrEqualTest & inSource) ;

  public: GALGAS_immediatGreaterOrEqualTest_2D_weak & operator = (const class GALGAS_immediatGreaterOrEqualTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatGreaterOrEqualTest bang_immediatGreaterOrEqualTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatGreaterOrEqualTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatGreaterOrEqualTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatGreaterOrEqualTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatGreaterOrEqualTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLowerTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatLowerTest : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatLowerTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatLowerTest (const class cPtr_immediatLowerTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatLowerTest extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatLowerTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                 const class GALGAS_immediatExpression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatLowerTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatLowerTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatLowerTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatLowerTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatLowerTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                  const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatLowerTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatLowerTest_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatLowerTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatLowerTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatLowerTest_2D_weak (const class GALGAS_immediatLowerTest & inSource) ;

  public: GALGAS_immediatLowerTest_2D_weak & operator = (const class GALGAS_immediatLowerTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatLowerTest bang_immediatLowerTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatLowerTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatLowerTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatLowerTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatLowerTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLowerOrEqualTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatLowerOrEqualTest : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatLowerOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatLowerOrEqualTest (const class cPtr_immediatLowerOrEqualTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatLowerOrEqualTest extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatLowerOrEqualTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                        const class GALGAS_immediatExpression & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatLowerOrEqualTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_immediatExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatLowerOrEqualTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatLowerOrEqualTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatLowerOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mLeftExpression ;
  public: GALGAS_immediatExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_immediatLowerOrEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                         const GALGAS_immediatExpression & in_mRightExpression
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
// Phase 1: @immediatLowerOrEqualTest_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatLowerOrEqualTest_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatLowerOrEqualTest_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatLowerOrEqualTest_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatLowerOrEqualTest_2D_weak (const class GALGAS_immediatLowerOrEqualTest & inSource) ;

  public: GALGAS_immediatLowerOrEqualTest_2D_weak & operator = (const class GALGAS_immediatLowerOrEqualTest & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatLowerOrEqualTest bang_immediatLowerOrEqualTest_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatLowerOrEqualTest_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatLowerOrEqualTest_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatLowerOrEqualTest_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatLowerOrEqualTest_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatNegate reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatNegate : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatNegate (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatNegate (const class cPtr_immediatNegate * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatNegate extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatNegate constructor_new (const class GALGAS_immediatExpression & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatNegate & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_immediatExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatNegate class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatNegate class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatNegate : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mExpression ;

//--- Constructor
  public: cPtr_immediatNegate (const GALGAS_immediatExpression & in_mExpression
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
// Phase 1: @immediatNegate_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatNegate_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatNegate_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatNegate_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatNegate_2D_weak (const class GALGAS_immediatNegate & inSource) ;

  public: GALGAS_immediatNegate_2D_weak & operator = (const class GALGAS_immediatNegate & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatNegate bang_immediatNegate_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatNegate_2D_weak extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatNegate_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatNegate_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatNegate_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatComplement reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatComplement : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatComplement (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatComplement (const class cPtr_immediatComplement * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatComplement extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatComplement constructor_new (const class GALGAS_immediatExpression & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatComplement & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_immediatExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatComplement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatComplement class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatComplement : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mExpression ;

//--- Constructor
  public: cPtr_immediatComplement (const GALGAS_immediatExpression & in_mExpression
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
// Phase 1: @immediatComplement_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatComplement_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatComplement_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatComplement_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatComplement_2D_weak (const class GALGAS_immediatComplement & inSource) ;

  public: GALGAS_immediatComplement_2D_weak & operator = (const class GALGAS_immediatComplement & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatComplement bang_immediatComplement_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatComplement_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatComplement_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatComplement_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatComplement_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSliceExpressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSliceExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_immediatSliceExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_immediatSliceExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSliceName,
                                                 const class GALGAS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSliceExpressionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSliceExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_immediatSliceExpressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_immediatExpression & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_immediatSliceExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_immediatExpression & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_immediatSliceExpressionList add_operation (const GALGAS_immediatSliceExpressionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_immediatSliceExpressionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_immediatExpression constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_immediatExpression & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_immediatExpression & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_immediatExpression & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_immediatExpression constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_immediatExpression & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_immediatExpression & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSliceNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatSliceExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatSliceExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatSliceExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_immediatSliceExpressionList ;
 
} ; // End of GALGAS_immediatSliceExpressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_immediatSliceExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_immediatSliceExpressionList (const GALGAS_immediatSliceExpressionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSliceName (LOCATION_ARGS) const ;
  public: class GALGAS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_immediatSliceExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSliceExpressionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSliceExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSliceName ;
  public: inline GALGAS_lstring readProperty_mSliceName (void) const {
    return mProperty_mSliceName ;
  }

  public: GALGAS_immediatExpression mProperty_mExpression ;
  public: inline GALGAS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_immediatSliceExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceName = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_immediatSliceExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_immediatSliceExpressionList_2D_element (const GALGAS_lstring & in_mSliceName,
                                                         const GALGAS_immediatExpression & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSliceExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSliceExpressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_immediatExpression & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatSliceExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatSliceExpressionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSlice reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSlice : public GALGAS_immediatExpression {
//--------------------------------- Default constructor
  public: GALGAS_immediatSlice (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatSlice constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_immediatSlice (const class cPtr_immediatSlice * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRegisterName (void) const ;

  public: class GALGAS_immediatSliceExpressionList readProperty_mSliceExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSlice extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSlice constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_immediatSliceExpressionList & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatSlice & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegisterName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceExpressionList (class GALGAS_immediatSliceExpressionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatSlice class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatSlice class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_immediatSlice : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_sint_36__34_ & outResult,
           class GALGAS_stringset & ioUsedRegisters,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mRegisterName ;
  public: GALGAS_immediatSliceExpressionList mProperty_mSliceExpressionList ;

//--- Constructor
  public: cPtr_immediatSlice (const GALGAS_lstring & in_mRegisterName,
                              const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
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
// Phase 1: @immediatSlice_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_immediatSlice_2D_weak : public GALGAS_immediatExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_immediatSlice_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_immediatSlice_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_immediatSlice_2D_weak (const class GALGAS_immediatSlice & inSource) ;

  public: GALGAS_immediatSlice_2D_weak & operator = (const class GALGAS_immediatSlice & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_immediatSlice bang_immediatSlice_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_immediatSlice_2D_weak extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_immediatSlice_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_immediatSlice_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_immediatSlice_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_constantDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_constantDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mConstantName,
                                                 const class GALGAS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantDefinitionList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_constantDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_immediatExpression & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_constantDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_immediatExpression & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constantDefinitionList add_operation (const GALGAS_constantDefinitionList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_constantDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_immediatExpression constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_immediatExpression & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_immediatExpression & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_immediatExpression & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_immediatExpression constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_immediatExpression & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_immediatExpression & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_constantDefinitionList ;
 
} ; // End of GALGAS_constantDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_constantDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_constantDefinitionList (const GALGAS_constantDefinitionList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GALGAS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constantDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: inline GALGAS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GALGAS_immediatExpression mProperty_mExpression ;
  public: inline GALGAS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_constantDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constantDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constantDefinitionList_2D_element (const GALGAS_lstring & in_mConstantName,
                                                    const GALGAS_immediatExpression & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constantDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actualConfigurationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actualConfigurationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_actualConfigurationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualConfigurationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_actualConfigurationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_actualConfigurationMap (const GALGAS_actualConfigurationMap & inSource) ;
  public: GALGAS_actualConfigurationMap & operator = (const GALGAS_actualConfigurationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualConfigurationMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actualConfigurationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_actualConfigurationMap constructor_mapWithMapToOverride (const class GALGAS_actualConfigurationMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_actualConfigurationMap add_operation (const GALGAS_actualConfigurationMap & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GALGAS_uint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterValueForKey (class GALGAS_uint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterAddressForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterValueForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualConfigurationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_actualConfigurationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_actualConfigurationMap ;
 
} ; // End of GALGAS_actualConfigurationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_actualConfigurationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_actualConfigurationMap (const GALGAS_actualConfigurationMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRegisterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actualConfigurationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@actualConfigurationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actualConfigurationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mRegisterAddress ;
  public: GALGAS_uint mProperty_mRegisterValue ;

//--- Constructor
  public: cMapElement_actualConfigurationMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uint & in_mRegisterAddress,
                                              const GALGAS_uint & in_mRegisterValue
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
// Phase 1: @actualConfigurationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualConfigurationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mRegisterAddress ;
  public: inline GALGAS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GALGAS_uint mProperty_mRegisterValue ;
  public: inline GALGAS_uint readProperty_mRegisterValue (void) const {
    return mProperty_mRegisterValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_actualConfigurationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_actualConfigurationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterValue (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_actualConfigurationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_actualConfigurationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_uint & in_mRegisterAddress,
                                                    const GALGAS_uint & in_mRegisterValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualConfigurationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actualConfigurationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_uint & inOperand1,
                                                                                 const class GALGAS_uint & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actualConfigurationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualConfigurationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_bitNumberExpression (const class cPtr_bitNumberExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_bitNumberExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_bitSliceTable inBitSliceTable,
           class GALGAS_uint & outBitNumber,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_bitNumberExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitNumberExpression_2D_weak (const class GALGAS_bitNumberExpression & inSource) ;

  public: GALGAS_bitNumberExpression_2D_weak & operator = (const class GALGAS_bitNumberExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitNumberExpression bang_bitNumberExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLiteralExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLiteralExpression : public GALGAS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLiteralExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_bitNumberLiteralExpression (const class cPtr_bitNumberLiteralExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mBitNumberLiteralExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLiteralExpression extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLiteralExpression constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                          const class GALGAS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLiteralExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumberLiteralExpression (class GALGAS_immediatExpression inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpression (class GALGAS_location inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberLiteralExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberLiteralExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralExpression : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_bitSliceTable inBitSliceTable,
           class GALGAS_uint & outBitNumber,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_immediatExpression mProperty_mBitNumberLiteralExpression ;
  public: GALGAS_location mProperty_mEndOfExpression ;

//--- Constructor
  public: cPtr_bitNumberLiteralExpression (const GALGAS_immediatExpression & in_mBitNumberLiteralExpression,
                                           const GALGAS_location & in_mEndOfExpression
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
// Phase 1: @bitNumberLiteralExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLiteralExpression_2D_weak : public GALGAS_bitNumberExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLiteralExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberLiteralExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitNumberLiteralExpression_2D_weak (const class GALGAS_bitNumberLiteralExpression & inSource) ;

  public: GALGAS_bitNumberLiteralExpression_2D_weak & operator = (const class GALGAS_bitNumberLiteralExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitNumberLiteralExpression bang_bitNumberLiteralExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLiteralExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLiteralExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLiteralExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberLiteralExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLiteralValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLiteralValue : public GALGAS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLiteralValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberLiteralValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_bitNumberLiteralValue (const class cPtr_bitNumberLiteralValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mBitNumberLiteralValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLiteralValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLiteralValue constructor_new (const class GALGAS_luint & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLiteralValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumberLiteralValue (class GALGAS_luint inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberLiteralValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberLiteralValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_bitSliceTable inBitSliceTable,
           class GALGAS_uint & outBitNumber,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mBitNumberLiteralValue ;

//--- Constructor
  public: cPtr_bitNumberLiteralValue (const GALGAS_luint & in_mBitNumberLiteralValue
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
// Phase 1: @bitNumberLiteralValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLiteralValue_2D_weak : public GALGAS_bitNumberExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLiteralValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberLiteralValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitNumberLiteralValue_2D_weak (const class GALGAS_bitNumberLiteralValue & inSource) ;

  public: GALGAS_bitNumberLiteralValue_2D_weak & operator = (const class GALGAS_bitNumberLiteralValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitNumberLiteralValue bang_bitNumberLiteralValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLiteralValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLiteralValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLiteralValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberLiteralValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLabelValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLabelValue : public GALGAS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLabelValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberLabelValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_bitNumberLabelValue (const class cPtr_bitNumberLabelValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mBitNumberLabelValue (void) const ;

  public: class GALGAS_luint readProperty_mBitNumberIndexValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLabelValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLabelValue constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_luint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLabelValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumberIndexValue (class GALGAS_luint inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitNumberLabelValue (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberLabelValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberLabelValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_bitNumberLabelValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GALGAS_registerTable inRegisterTable,
           const class GALGAS_constantMap inConstantMap,
           class GALGAS_stringset & ioUsedRegisters,
           const class GALGAS_bitSliceTable inBitSliceTable,
           class GALGAS_uint & outBitNumber,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mBitNumberLabelValue ;
  public: GALGAS_luint mProperty_mBitNumberIndexValue ;

//--- Constructor
  public: cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                    const GALGAS_luint & in_mBitNumberIndexValue
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
// Phase 1: @bitNumberLabelValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitNumberLabelValue_2D_weak : public GALGAS_bitNumberExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitNumberLabelValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitNumberLabelValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitNumberLabelValue_2D_weak (const class GALGAS_bitNumberLabelValue & inSource) ;

  public: GALGAS_bitNumberLabelValue_2D_weak & operator = (const class GALGAS_bitNumberLabelValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitNumberLabelValue bang_bitNumberLabelValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitNumberLabelValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitNumberLabelValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitNumberLabelValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitNumberLabelValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @labelMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_labelMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_labelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_labelMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_labelMap (const GALGAS_labelMap & inSource) ;
  public: GALGAS_labelMap & operator = (const GALGAS_labelMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_labelMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_labelMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_labelMap constructor_mapWithMapToOverride (const class GALGAS_labelMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_labelMap add_operation (const GALGAS_labelMap & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_labelMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_labelMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_labelMap ;
 
} ; // End of GALGAS_labelMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_labelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_labelMap (const GALGAS_labelMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_labelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@labelMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_labelMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_labelMap (const GALGAS_lstring & inKey
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
// Phase 1: @labelMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_labelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_labelMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_labelMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_labelMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_labelMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_labelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_labelMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_labelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_labelMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4String' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_x_34_String (const class GALGAS_uint & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_constantMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_constantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_constantMap (const GALGAS_constantMap & inSource) ;
  public: GALGAS_constantMap & operator = (const GALGAS_constantMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_constantMap constructor_mapWithMapToOverride (const class GALGAS_constantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_sint_36__34_ & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constantMap add_operation (const GALGAS_constantMap & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_sint_36__34_ constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_sint_36__34_ constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_sint_36__34_ & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_sint_36__34_ getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_sint_36__34_ & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constantMap ;
 
} ; // End of GALGAS_constantMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_constantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_sint_36__34_ current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_constantMap : public cMapElement {
//--- Map attributes
  public: GALGAS_sint_36__34_ mProperty_mValue ;

//--- Constructor
  public: cMapElement_constantMap (const GALGAS_lstring & inKey,
                                   const GALGAS_sint_36__34_ & in_mValue
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
// Phase 1: @constantMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_sint_36__34_ mProperty_mValue ;
  public: inline GALGAS_sint_36__34_ readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_constantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_sint_36__34_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constantMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_sint_36__34_ & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_sint_36__34_ & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constantMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_routineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineMap (const GALGAS_routineMap & inSource) ;
  public: GALGAS_routineMap & operator = (const GALGAS_routineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_routineMap constructor_mapWithMapToOverride (const class GALGAS_routineMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineMap add_operation (const GALGAS_routineMap & inOperand,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRequiredBankForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mReturnedBankForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bool & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_bool & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineMap ;
 
} ; // End of GALGAS_routineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: GALGAS_uint mProperty_mRequiredBank ;
  public: GALGAS_uint mProperty_mReturnedBank ;
  public: GALGAS_bool mProperty_mPreservesBank ;

//--- Constructor
  public: cMapElement_routineMap (const GALGAS_lstring & inKey,
                                  const GALGAS_bool & in_mIsNoReturn,
                                  const GALGAS_uint & in_mRequiredBank,
                                  const GALGAS_uint & in_mReturnedBank,
                                  const GALGAS_bool & in_mPreservesBank
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
// Phase 1: @routineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GALGAS_uint mProperty_mRequiredBank ;
  public: inline GALGAS_uint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GALGAS_uint mProperty_mReturnedBank ;
  public: inline GALGAS_uint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GALGAS_bool mProperty_mPreservesBank ;
  public: inline GALGAS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_routineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_routineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_routineMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_bool & in_mIsNoReturn,
                                        const GALGAS_uint & in_mRequiredBank,
                                        const GALGAS_uint & in_mReturnedBank,
                                        const GALGAS_bool & in_mPreservesBank) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_uint & inOperand2,
                                                                     const class GALGAS_uint & inOperand3,
                                                                     const class GALGAS_bool & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @routineKind enum                                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_routineKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_regularRoutine,
    kEnum_noReturnRoutine,
    kEnum_interruptRoutine
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineKind extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineKind constructor_interruptRoutine (LOCATION_ARGS) ;

  public: static class GALGAS_routineKind constructor_noReturnRoutine (LOCATION_ARGS) ;

  public: static class GALGAS_routineKind constructor_regularRoutine (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInterruptRoutine (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoReturnRoutine (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegularRoutine (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_interruptRoutine () const ;

  public: VIRTUAL_IN_DEBUG bool optional_noReturnRoutine () const ;

  public: VIRTUAL_IN_DEBUG bool optional_regularRoutine () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@immediatExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (class cPtr_immediatExpression * inObject,
                               const class GALGAS_registerTable constin_inRegisterTable,
                               const class GALGAS_constantMap constin_inConstantMap,
                               class GALGAS_sint_36__34_ & out_outResult,
                               class GALGAS_stringset & io_ioUsedRegisters,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerTable map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_registerTable ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_registerTable_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_registerTable (void) ;

//--------------------------------- Handle copy
  public: GALGAS_registerTable (const GALGAS_registerTable & inSource) ;
  public: GALGAS_registerTable & operator = (const GALGAS_registerTable & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerTable extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerTable constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_registerTable constructor_mapWithMapToOverride (const class GALGAS_registerTable & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uintlist & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_bitSliceTable & inOperand3,
                                                     const class GALGAS_string & inOperand4,
                                                     const class GALGAS_registerProtection & inOperand5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_registerTable add_operation (const GALGAS_registerTable & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uintlist constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_bitSliceTable constinArgument3,
                                                  class GALGAS_string constinArgument4,
                                                  class GALGAS_registerProtection constinArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitDefinitionStringForKey (class GALGAS_string constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitSliceTableForKey (class GALGAS_bitSliceTable constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProtectionForKey (class GALGAS_registerProtection constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressListForKey (class GALGAS_uintlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSizeForKey (class GALGAS_uint constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uintlist & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_bitSliceTable & outArgument3,
                                                  class GALGAS_string & outArgument4,
                                                  class GALGAS_registerProtection & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionStringForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTableForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerProtection getter_mProtectionForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mRegisterAddressListForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSizeForKey (const class GALGAS_string & constinOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerTable getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uintlist & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_bitSliceTable & outOperand3,
                                                    class GALGAS_string & outOperand4,
                                                    class GALGAS_registerProtection & outOperand5) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_registerTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_registerTable ;
 
} ; // End of GALGAS_registerTable class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_registerTable : public cGenericAbstractEnumerator {
  public: cEnumerator_registerTable (const GALGAS_registerTable & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uintlist current_mRegisterAddressList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mSize (LOCATION_ARGS) const ;
  public: class GALGAS_bitSliceTable current_mBitSliceTable (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBitDefinitionString (LOCATION_ARGS) const ;
  public: class GALGAS_registerProtection current_mProtection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_registerTable_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@registerTable' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_registerTable : public cMapElement {
//--- Map attributes
  public: GALGAS_uintlist mProperty_mRegisterAddressList ;
  public: GALGAS_uint mProperty_mSize ;
  public: GALGAS_bitSliceTable mProperty_mBitSliceTable ;
  public: GALGAS_string mProperty_mBitDefinitionString ;
  public: GALGAS_registerProtection mProperty_mProtection ;

//--- Constructor
  public: cMapElement_registerTable (const GALGAS_lstring & inKey,
                                     const GALGAS_uintlist & in_mRegisterAddressList,
                                     const GALGAS_uint & in_mSize,
                                     const GALGAS_bitSliceTable & in_mBitSliceTable,
                                     const GALGAS_string & in_mBitDefinitionString,
                                     const GALGAS_registerProtection & in_mProtection
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
//Abstract extension method '@bitNumberExpression getBitNumber'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBitNumber (class cPtr_bitNumberExpression * inObject,
                                       const class GALGAS_registerTable constin_inRegisterTable,
                                       const class GALGAS_constantMap constin_inConstantMap,
                                       class GALGAS_stringset & io_ioUsedRegisters,
                                       const class GALGAS_bitSliceTable constin_inBitSliceTable,
                                       class GALGAS_uint & out_outBitNumber,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForOptimizations map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForOptimizations ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForOptimizations_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForOptimizations : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_symbolTableForOptimizations (void) ;

//--------------------------------- Handle copy
  public: GALGAS_symbolTableForOptimizations (const GALGAS_symbolTableForOptimizations & inSource) ;
  public: GALGAS_symbolTableForOptimizations & operator = (const GALGAS_symbolTableForOptimizations & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForOptimizations extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForOptimizations constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_symbolTableForOptimizations constructor_mapWithMapToOverride (const class GALGAS_symbolTableForOptimizations & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_symbolTableForOptimizations add_operation (const GALGAS_symbolTableForOptimizations & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLineIndexForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsDeletableForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionLineIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsDeletableForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_symbolTableForOptimizations getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForOptimizations * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForOptimizations ;
 
} ; // End of GALGAS_symbolTableForOptimizations class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForOptimizations : public cGenericAbstractEnumerator {
  public: cEnumerator_symbolTableForOptimizations (const GALGAS_symbolTableForOptimizations & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsDeletable (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_symbolTableForOptimizations_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@symbolTableForOptimizations' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mDefinitionLineIndex ;
  public: GALGAS_bool mProperty_mIsDeletable ;

//--- Constructor
  public: cMapElement_symbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & in_mDefinitionLineIndex,
                                                   const GALGAS_bool & in_mIsDeletable
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
// Phase 1: @symbolTableForOptimizations_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForOptimizations_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mDefinitionLineIndex ;
  public: inline GALGAS_uint readProperty_mDefinitionLineIndex (void) const {
    return mProperty_mDefinitionLineIndex ;
  }

  public: GALGAS_bool mProperty_mIsDeletable ;
  public: inline GALGAS_bool readProperty_mIsDeletable (void) const {
    return mProperty_mIsDeletable ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_symbolTableForOptimizations_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_symbolTableForOptimizations_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionLineIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLineIndex = inValue ;
  }

  public: inline void setter_setMIsDeletable (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsDeletable = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_symbolTableForOptimizations_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_symbolTableForOptimizations_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_uint & in_mDefinitionLineIndex,
                                                         const GALGAS_bool & in_mIsDeletable) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForOptimizations_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForOptimizations_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_uint & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_symbolTableForOptimizations_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_symbolTableForOptimizations_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configFieldMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configFieldMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configFieldMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configFieldMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_configFieldMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_configFieldMap (const GALGAS_configFieldMap & inSource) ;
  public: GALGAS_configFieldMap & operator = (const GALGAS_configFieldMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configFieldMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configFieldMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_configFieldMap constructor_mapWithMapToOverride (const class GALGAS_configFieldMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_fieldSettingMap & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_configFieldMap add_operation (const GALGAS_configFieldMap & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_luint constinArgument2,
                                                  class GALGAS_lstring constinArgument3,
                                                  class GALGAS_fieldSettingMap constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDescriptionForKey (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldSettingMapForKey (class GALGAS_fieldSettingMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaskValueForKey (class GALGAS_luint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterNameForKey (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_fieldSettingMap & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescriptionForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fieldSettingMap getter_mFieldSettingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMaskValueForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterNameForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configFieldMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_luint & outOperand2,
                                                    class GALGAS_lstring & outOperand3,
                                                    class GALGAS_fieldSettingMap & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_configFieldMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configFieldMap ;
 
} ; // End of GALGAS_configFieldMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configFieldMap : public cGenericAbstractEnumerator {
  public: cEnumerator_configFieldMap (const GALGAS_configFieldMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GALGAS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_configFieldMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fieldSettingMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_fieldSettingMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_fieldSettingMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fieldSettingMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_fieldSettingMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_fieldSettingMap (const GALGAS_fieldSettingMap & inSource) ;
  public: GALGAS_fieldSettingMap & operator = (const GALGAS_fieldSettingMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fieldSettingMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fieldSettingMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_fieldSettingMap constructor_mapWithMapToOverride (const class GALGAS_fieldSettingMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_fieldSettingMap add_operation (const GALGAS_fieldSettingMap & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaskForKey (class GALGAS_uint constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaskForKey (const class GALGAS_string & constinOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fieldSettingMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_fieldSettingMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_fieldSettingMap ;
 
} ; // End of GALGAS_fieldSettingMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_fieldSettingMap : public cGenericAbstractEnumerator {
  public: cEnumerator_fieldSettingMap (const GALGAS_fieldSettingMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mValue (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mMask (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_fieldSettingMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@configFieldMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configFieldMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mRegisterName ;
  public: GALGAS_luint mProperty_mMaskValue ;
  public: GALGAS_lstring mProperty_mDescription ;
  public: GALGAS_fieldSettingMap mProperty_mFieldSettingMap ;

//--- Constructor
  public: cMapElement_configFieldMap (const GALGAS_lstring & inKey,
                                      const GALGAS_lstring & in_mRegisterName,
                                      const GALGAS_luint & in_mMaskValue,
                                      const GALGAS_lstring & in_mDescription,
                                      const GALGAS_fieldSettingMap & in_mFieldSettingMap
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
// Phase 1: @configFieldMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configFieldMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mRegisterName ;
  public: inline GALGAS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GALGAS_luint mProperty_mMaskValue ;
  public: inline GALGAS_luint readProperty_mMaskValue (void) const {
    return mProperty_mMaskValue ;
  }

  public: GALGAS_lstring mProperty_mDescription ;
  public: inline GALGAS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

  public: GALGAS_fieldSettingMap mProperty_mFieldSettingMap ;
  public: inline GALGAS_fieldSettingMap readProperty_mFieldSettingMap (void) const {
    return mProperty_mFieldSettingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_configFieldMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_configFieldMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterName = inValue ;
  }

  public: inline void setter_setMMaskValue (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaskValue = inValue ;
  }

  public: inline void setter_setMDescription (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

  public: inline void setter_setMFieldSettingMap (const GALGAS_fieldSettingMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldSettingMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_configFieldMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_configFieldMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_lstring & in_mRegisterName,
                                            const GALGAS_luint & in_mMaskValue,
                                            const GALGAS_lstring & in_mDescription,
                                            const GALGAS_fieldSettingMap & in_mFieldSettingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configFieldMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configFieldMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_luint & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_fieldSettingMap & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_configFieldMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_configFieldMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap_2D_element ;

