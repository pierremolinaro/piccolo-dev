#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
// Phase 1: @2lstringlist list
//
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS__32_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue_30_,
                                                 const class GGS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS__32_lstringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GGS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_lstringlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
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
 
} ; // End of GGS__32_lstringlist_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE piccolo_5F_lexique
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

class cTokenFor_piccolo_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccolo_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_piccolo_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_piccolo_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier /* 1 */ ,
   kToken_label /* 2 */ ,
   kToken_integer /* 3 */ ,
   kToken_literal_5F_char /* 4 */ ,
   kToken_literal_5F_string /* 5 */ ,
   kToken_comment /* 6 */ ,
   kToken_commentMark /* 7 */ ,
   kToken_bank /* 8 */ ,
   kToken_banksave /* 9 */ ,
   kToken_banksel /* 10 */ ,
   kToken_baseline /* 11 */ ,
   kToken_block /* 12 */ ,
   kToken_bootloader /* 13 */ ,
   kToken_byte /* 14 */ ,
   kToken_case /* 15 */ ,
   kToken_checkbank /* 16 */ ,
   kToken_checknobank /* 17 */ ,
   kToken_checkpic /* 18 */ ,
   kToken_computed /* 19 */ ,
   kToken_configuration /* 20 */ ,
   kToken_const /* 21 */ ,
   kToken_contextsave /* 22 */ ,
   kToken_data /* 23 */ ,
   kToken_data_31__36_ /* 24 */ ,
   kToken_data_38_ /* 25 */ ,
   kToken_do /* 26 */ ,
   kToken_end /* 27 */ ,
   kToken_else /* 28 */ ,
   kToken_elsif /* 29 */ ,
   kToken_ensures /* 30 */ ,
   kToken_fast /* 31 */ ,
   kToken_forever /* 32 */ ,
   kToken_if /* 33 */ ,
   kToken_implements /* 34 */ ,
   kToken_include /* 35 */ ,
   kToken_inline /* 36 */ ,
   kToken_interrupt /* 37 */ ,
   kToken_macro /* 38 */ ,
   kToken_midrange /* 39 */ ,
   kToken_nobank /* 40 */ ,
   kToken_noreturn /* 41 */ ,
   kToken_page /* 42 */ ,
   kToken_pic_31__38_ /* 43 */ ,
   kToken_preserved /* 44 */ ,
   kToken_protected /* 45 */ ,
   kToken_private /* 46 */ ,
   kToken_ram /* 47 */ ,
   kToken_requires /* 48 */ ,
   kToken_rom /* 49 */ ,
   kToken_routine /* 50 */ ,
   kToken_switch /* 51 */ ,
   kToken_unused /* 52 */ ,
   kToken_uses /* 53 */ ,
   kToken_w /* 54 */ ,
   kToken_while /* 55 */ ,
   kToken_addlw /* 56 */ ,
   kToken_addwf /* 57 */ ,
   kToken_addwfc /* 58 */ ,
   kToken_andlw /* 59 */ ,
   kToken_andwf /* 60 */ ,
   kToken_bc /* 61 */ ,
   kToken_bcf /* 62 */ ,
   kToken_bn /* 63 */ ,
   kToken_bnc /* 64 */ ,
   kToken_bnn /* 65 */ ,
   kToken_bov /* 66 */ ,
   kToken_bnov /* 67 */ ,
   kToken_bnz /* 68 */ ,
   kToken_bsf /* 69 */ ,
   kToken_bra /* 70 */ ,
   kToken_btg /* 71 */ ,
   kToken_bz /* 72 */ ,
   kToken_call /* 73 */ ,
   kToken_clrf /* 74 */ ,
   kToken_clrw /* 75 */ ,
   kToken_clrwdt /* 76 */ ,
   kToken_comf /* 77 */ ,
   kToken_daw /* 78 */ ,
   kToken_decf /* 79 */ ,
   kToken_incf /* 80 */ ,
   kToken_iorlw /* 81 */ ,
   kToken_iorwf /* 82 */ ,
   kToken_fnop /* 83 */ ,
   kToken_goto /* 84 */ ,
   kToken_jsr /* 85 */ ,
   kToken_jump /* 86 */ ,
   kToken_lfsr /* 87 */ ,
   kToken_ldataptr /* 88 */ ,
   kToken_ldata_38_ptr /* 89 */ ,
   kToken_ldata_31__36_ptr /* 90 */ ,
   kToken_ltblptr /* 91 */ ,
   kToken_mnop /* 92 */ ,
   kToken_movf /* 93 */ ,
   kToken_movff /* 94 */ ,
   kToken_movlw /* 95 */ ,
   kToken_movwf /* 96 */ ,
   kToken_mullw /* 97 */ ,
   kToken_mulwf /* 98 */ ,
   kToken_negf /* 99 */ ,
   kToken_nop /* 100 */ ,
   kToken_nopbra /* 101 */ ,
   kToken_pop /* 102 */ ,
   kToken_option /* 103 */ ,
   kToken_push /* 104 */ ,
   kToken_rcall /* 105 */ ,
   kToken_reset /* 106 */ ,
   kToken_retlw /* 107 */ ,
   kToken_rlcf /* 108 */ ,
   kToken_rlf /* 109 */ ,
   kToken_rlncf /* 110 */ ,
   kToken_rrcf /* 111 */ ,
   kToken_rrf /* 112 */ ,
   kToken_rrncf /* 113 */ ,
   kToken_setf /* 114 */ ,
   kToken_sleep /* 115 */ ,
   kToken_subfwb /* 116 */ ,
   kToken_sublw /* 117 */ ,
   kToken_subwf /* 118 */ ,
   kToken_subwfb /* 119 */ ,
   kToken_swapf /* 120 */ ,
   kToken_tblrd /* 121 */ ,
   kToken_tblwt /* 122 */ ,
   kToken_tris /* 123 */ ,
   kToken_xorlw /* 124 */ ,
   kToken_xorwf /* 125 */ ,
   kToken__2A_ /* 126 */ ,
   kToken__2A__2B_ /* 127 */ ,
   kToken__2C_ /* 128 */ ,
   kToken__21__3D_ /* 129 */ ,
   kToken__3C__3D_ /* 130 */ ,
   kToken__3E__3D_ /* 131 */ ,
   kToken__2A__2D_ /* 132 */ ,
   kToken__2B__2A_ /* 133 */ ,
   kToken__3B_ /* 134 */ ,
   kToken__3A_ /* 135 */ ,
   kToken__3D__3D_ /* 136 */ ,
   kToken__3C_ /* 137 */ ,
   kToken__3E_ /* 138 */ ,
   kToken__5B_ /* 139 */ ,
   kToken__5D_ /* 140 */ ,
   kToken__2E_ /* 141 */ ,
   kToken__21_ /* 142 */ ,
   kToken__26_ /* 143 */ ,
   kToken__7C_ /* 144 */ ,
   kToken__3D_ /* 145 */ ,
   kToken__7B_ /* 146 */ ,
   kToken__7D_ /* 147 */ ,
   kToken__28_ /* 148 */ ,
   kToken__29_ /* 149 */ ,
   kToken__2F_ /* 150 */ ,
   kToken__2D_ /* 151 */ ,
   kToken__2B_ /* 152 */ ,
   kToken__3F_ /* 153 */ ,
   kToken__5E_ /* 154 */ ,
   kToken__3C__3C_ /* 155 */ ,
   kToken__3E__3E_ /* 156 */ ,
   kToken__7E_ /* 157 */ ,
   kToken__25_ /* 158 */ ,
   kToken__2E__2E__2E_ /* 159 */ } ;

//--- Key words table 'controlKeyWordList'
  public: static int32_t search_into_controlKeyWordList (const String & inSearchedString) ;

//--- Key words table 'instructionKeyWordList'
  public: static int32_t search_into_instructionKeyWordList (const String & inSearchedString) ;

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
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 159 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccolo_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitSliceTable map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bitSliceTable ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bitSliceTable_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_bitSliceTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_bitSliceTable (void) ;

//--------------------------------- Handle copy
  public: GGS_bitSliceTable (const GGS_bitSliceTable & inSource) ;
  public: GGS_bitSliceTable & operator = (const GGS_bitSliceTable & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitSliceTable init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitSliceTable extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitSliceTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_bitSliceTable class_func_mapWithMapToOverride (const class GGS_bitSliceTable & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_bitSliceTable add_operation (const GGS_bitSliceTable & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceIndexForKey (class GGS_uint constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceSizeForKey (class GGS_uint constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mSliceIndexForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mSliceSizeForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bitSliceTable getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_bitSliceTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_bitSliceTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_bitSliceTable_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_bitSliceTable ;
 
} ; // End of GGS_bitSliceTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_bitSliceTable : public cGenericAbstractEnumerator {
  public: cEnumerator_bitSliceTable (const GGS_bitSliceTable & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mSliceIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mSliceSize (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bitSliceTable_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bitSliceTable' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bitSliceTable : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mSliceIndex ;
  public: GGS_uint mProperty_mSliceSize ;

//--- Constructors
  public: cMapElement_bitSliceTable (const GGS_bitSliceTable_2E_element & inValue
                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_bitSliceTable (const GGS_lstring & inKey,
                                     const GGS_uint & in_mSliceIndex,
                                     const GGS_uint & in_mSliceSize
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
//
// Phase 1: @bitSliceTable_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_bitSliceTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mSliceIndex ;
  public: inline GGS_uint readProperty_mSliceIndex (void) const {
    return mProperty_mSliceIndex ;
  }

  public: GGS_uint mProperty_mSliceSize ;
  public: inline GGS_uint readProperty_mSliceSize (void) const {
    return mProperty_mSliceSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bitSliceTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSliceIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceIndex = inValue ;
  }

  public: inline void setter_setMSliceSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceSize = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_bitSliceTable_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bitSliceTable_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_uint & in_mSliceIndex,
                                        const GGS_uint & in_mSliceSize) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitSliceTable_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_uint & inOperand1,
                                                                const class GGS_uint & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitSliceTable_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitSliceTable_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_bitSliceTable_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: bitSliceTable.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_bitSliceTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bitSliceTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bitSliceTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bitSliceTable_2E_element_3F_ (const GGS_bitSliceTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bitSliceTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bitSliceTable_2E_element unwrappedValue (void) const {
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
  public: static GGS_bitSliceTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitSliceTable_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_immediatExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatExpression (const class cPtr_immediatExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpression init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatExpression_init (Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_immediatExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_registerExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_registerExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_registerExpression (const class cPtr_registerExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRegisterName (void) const ;
  public: void setProperty_mRegisterName (const GGS_lstring & inValue) ;

  public: class GGS_immediatExpression readProperty_mOffset (void) const ;
  public: void setProperty_mOffset (const GGS_immediatExpression & inValue) ;

  public: class GGS_location readProperty_mEndOfOffsetExpression (void) const ;
  public: void setProperty_mEndOfOffsetExpression (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerExpression init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_immediatExpression & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerExpression class_func_new (const class GGS_lstring & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              const class GGS_location & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @registerExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_registerExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void registerExpression_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_immediatExpression & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeRegisterExpression
  public: virtual void method_analyzeRegisterExpression (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_bool arg_inWriteAccess,
           class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & arg_outIPICregisterDescription,
           class GGS_bitSliceTable & arg_outBitSliceTable,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method analyzeRegisterExpressionWithoutCheckingBank
  public: virtual void method_analyzeRegisterExpressionWithoutCheckingBank (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_bool arg_inWriteAccess,
           class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & arg_outIPICregisterDescription,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getRegisterAddress
  public: virtual void method_getRegisterAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_bool arg_inWriteAccess,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_uint & arg_outRegisterAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method resolveBaselineAccess
  public: virtual void method_resolveBaselineAccess (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_baseline_5F_intermediate_5F_registerExpression & arg_outIntermediateRegisterDescription,
           class GGS_bitSliceTable & arg_outBitSliceTable,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method resolveMidrangeAccess
  public: virtual void method_resolveMidrangeAccess (const class GGS_uint arg_inTotalBankCount,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_midrange_5F_intermediate_5F_registerExpression & arg_outIPICregisterDescription,
           class GGS_bitSliceTable & arg_outBitSliceTable,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_immediatExpression mProperty_mOffset ;
  public: GGS_location mProperty_mEndOfOffsetExpression ;


//--- Default constructor
  public: cPtr_registerExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_registerExpression (const GGS_lstring & in_mRegisterName,
                                   const GGS_immediatExpression & in_mOffset,
                                   const GGS_location & in_mEndOfOffsetExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_registerExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_registerExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerExpression_2E_weak (const class GGS_registerExpression & inSource) ;

  public: GGS_registerExpression_2E_weak & operator = (const class GGS_registerExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_registerExpression_2E_weak init_nil (void) {
    GGS_registerExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_registerExpression bang_registerExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_registerExpression unwrappedValue (void) const {
    GGS_registerExpression result ;
    if (isValid ()) {
      const cPtr_registerExpression * p = (cPtr_registerExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_registerExpression (p) ;
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
  public: static GGS_registerExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerExpression_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRam reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRam : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_declarationInRam (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_declarationInRam (const class cPtr_declarationInRam * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationInRam init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationInRam extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_declarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_declarationInRam class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @declarationInRam class
//
//--------------------------------------------------------------------------------------------------

class cPtr_declarationInRam : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void declarationInRam_init (Compiler * inCompiler) ;


//--- Extension method handleDeclaration
  public: virtual void method_handleDeclaration (const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ramBankTable & arg_ioRamBank,
           class GGS_registerTable & arg_ioRegisterTable,
           const class GGS_lstring arg_inCurrentRamBank,
           class GGS_declaredByteMap & arg_ioDeclaredByteMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_declarationInRam (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_declarationInRam (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRam_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRam_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_declarationInRam_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_declarationInRam_2E_weak (const class GGS_declarationInRam & inSource) ;

  public: GGS_declarationInRam_2E_weak & operator = (const class GGS_declarationInRam & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_declarationInRam_2E_weak init_nil (void) {
    GGS_declarationInRam_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_declarationInRam bang_declarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_declarationInRam unwrappedValue (void) const {
    GGS_declarationInRam result ;
    if (isValid ()) {
      const cPtr_declarationInRam * p = (cPtr_declarationInRam *) ptr () ;
      if (nullptr != p) {
        result = GGS_declarationInRam (p) ;
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
  public: static GGS_declarationInRam_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationInRam_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_declarationInRam_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_declarationInRam_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum registerProtection
//--------------------------------------------------------------------------------------------------

class GGS_registerProtection : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_registerProtection (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_publicRegister,
    enum_protectedRegister,
    enum_privateRegister
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
  public: static GGS_registerProtection extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerProtection class_func_privateRegister (LOCATION_ARGS) ;

  public: static class GGS_registerProtection class_func_protectedRegister (LOCATION_ARGS) ;

  public: static class GGS_registerProtection class_func_publicRegister (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateRegister (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedRegister (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPublicRegister (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerProtection class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerProtection ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @byteDeclarationInRam reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_byteDeclarationInRam : public GGS_declarationInRam {
//--------------------------------- Default constructor
  public: GGS_byteDeclarationInRam (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_byteDeclarationInRam (const class cPtr_byteDeclarationInRam * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mName (void) const ;
  public: void setProperty_mName (const GGS_lstring & inValue) ;

  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_bitSliceTable readProperty_mBitSliceTable (void) const ;
  public: void setProperty_mBitSliceTable (const GGS_bitSliceTable & inValue) ;

  public: class GGS_string readProperty_mBitDefinitionString (void) const ;
  public: void setProperty_mBitDefinitionString (const GGS_string & inValue) ;

  public: class GGS_registerProtection readProperty_mProtection (void) const ;
  public: void setProperty_mProtection (const GGS_registerProtection & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_byteDeclarationInRam init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_immediatExpression & inOperand1,
                                                                    const class GGS_bitSliceTable & inOperand2,
                                                                    const class GGS_string & inOperand3,
                                                                    const class GGS_registerProtection & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_byteDeclarationInRam extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_byteDeclarationInRam class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_immediatExpression & inOperand1,
                                                                const class GGS_bitSliceTable & inOperand2,
                                                                const class GGS_string & inOperand3,
                                                                const class GGS_registerProtection & inOperand4
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_byteDeclarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_byteDeclarationInRam class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @byteDeclarationInRam class
//
//--------------------------------------------------------------------------------------------------

class cPtr_byteDeclarationInRam : public cPtr_declarationInRam {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void byteDeclarationInRam_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              const class GGS_bitSliceTable & inOperand2,
                                                              const class GGS_string & inOperand3,
                                                              const class GGS_registerProtection & inOperand4,
                                                              Compiler * inCompiler) ;


//--- Extension method handleDeclaration
  public: virtual void method_handleDeclaration (const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ramBankTable & arg_ioRamBank,
           class GGS_registerTable & arg_ioRegisterTable,
           const class GGS_lstring arg_inCurrentRamBank,
           class GGS_declaredByteMap & arg_ioDeclaredByteMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mName ;
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_bitSliceTable mProperty_mBitSliceTable ;
  public: GGS_string mProperty_mBitDefinitionString ;
  public: GGS_registerProtection mProperty_mProtection ;


//--- Default constructor
  public: cPtr_byteDeclarationInRam (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_byteDeclarationInRam (const GGS_lstring & in_mName,
                                     const GGS_immediatExpression & in_mSizeExpression,
                                     const GGS_bitSliceTable & in_mBitSliceTable,
                                     const GGS_string & in_mBitDefinitionString,
                                     const GGS_registerProtection & in_mProtection
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @byteDeclarationInRam_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_byteDeclarationInRam_2E_weak : public GGS_declarationInRam_2E_weak {
//--------------------------------- Default constructor
  public: GGS_byteDeclarationInRam_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_byteDeclarationInRam_2E_weak (const class GGS_byteDeclarationInRam & inSource) ;

  public: GGS_byteDeclarationInRam_2E_weak & operator = (const class GGS_byteDeclarationInRam & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_byteDeclarationInRam_2E_weak init_nil (void) {
    GGS_byteDeclarationInRam_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_byteDeclarationInRam bang_byteDeclarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_byteDeclarationInRam unwrappedValue (void) const {
    GGS_byteDeclarationInRam result ;
    if (isValid ()) {
      const cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) ptr () ;
      if (nullptr != p) {
        result = GGS_byteDeclarationInRam (p) ;
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
  public: static GGS_byteDeclarationInRam_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_byteDeclarationInRam_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_byteDeclarationInRam_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_byteDeclarationInRam_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRamList list
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRamList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_declarationInRamList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_declarationInRamList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_declarationInRam & in_mDeclarationInRAM
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationInRamList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationInRamList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationInRamList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_declarationInRamList class_func_listWithValue (const class GGS_declarationInRam & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_declarationInRamList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_declarationInRam & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_declarationInRamList add_operation (const GGS_declarationInRamList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_declarationInRam constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_declarationInRam constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_declarationInRam & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_declarationInRam & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_declarationInRam & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationInRAMAtIndex (class GGS_declarationInRam constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_declarationInRam & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_declarationInRam & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_declarationInRam getter_mDeclarationInRAMAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationInRamList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationInRamList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationInRamList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_declarationInRamList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_declarationInRamList ;
 
} ; // End of GGS_declarationInRamList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_declarationInRamList : public cGenericAbstractEnumerator {
  public: cEnumerator_declarationInRamList (const GGS_declarationInRamList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_declarationInRam current_mDeclarationInRAM (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationInRamList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationInRamList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRamList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationInRam mProperty_mDeclarationInRAM ;
  public: inline GGS_declarationInRam readProperty_mDeclarationInRAM (void) const {
    return mProperty_mDeclarationInRAM ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declarationInRamList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationInRAM (const GGS_declarationInRam & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationInRAM = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_declarationInRamList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationInRamList_2E_element (const GGS_declarationInRam & in_mDeclarationInRAM) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationInRamList_2E_element init_21_ (const class GGS_declarationInRam & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationInRamList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationInRamList_2E_element class_func_new (const class GGS_declarationInRam & inOperand0,
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
 
} ; // End of GGS_declarationInRamList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ramDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_ramDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_ramDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_ramDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mBankName,
                                                 const class GGS_declarationInRamList & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramDefinitionList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramDefinitionList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ramDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_declarationInRamList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_ramDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_declarationInRamList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ramDefinitionList add_operation (const GGS_ramDefinitionList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_declarationInRamList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_declarationInRamList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_declarationInRamList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_declarationInRamList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_declarationInRamList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBankNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_declarationInRamList constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_declarationInRamList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_declarationInRamList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBankNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationInRamList getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_ramDefinitionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ramDefinitionList ;
 
} ; // End of GGS_ramDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ramDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_ramDefinitionList (const GGS_ramDefinitionList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mBankName (LOCATION_ARGS) const ;
  public: class GGS_declarationInRamList current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ramDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ramDefinitionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_ramDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBankName ;
  public: inline GGS_lstring readProperty_mBankName (void) const {
    return mProperty_mBankName ;
  }

  public: GGS_declarationInRamList mProperty_mDeclaration ;
  public: inline GGS_declarationInRamList readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ramDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBankName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankName = inValue ;
  }

  public: inline void setter_setMDeclaration (const GGS_declarationInRamList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_ramDefinitionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ramDefinitionList_2E_element (const GGS_lstring & in_mBankName,
                                            const GGS_declarationInRamList & in_mDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramDefinitionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_declarationInRamList & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_declarationInRamList & inOperand1,
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
 
} ; // End of GGS_ramDefinitionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configSettingList list
//
//--------------------------------------------------------------------------------------------------

class GGS_configSettingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_configSettingList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_configSettingList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSettingName,
                                                 const class GGS_lstring & in_mSettingValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configSettingList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configSettingList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configSettingList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_configSettingList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_configSettingList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_configSettingList add_operation (const GGS_configSettingList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingValueAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSettingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSettingValueAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_configSettingList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_configSettingList ;
 
} ; // End of GGS_configSettingList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_configSettingList : public cGenericAbstractEnumerator {
  public: cEnumerator_configSettingList (const GGS_configSettingList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mSettingName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSettingValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configSettingList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configSettingList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_configSettingList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSettingName ;
  public: inline GGS_lstring readProperty_mSettingName (void) const {
    return mProperty_mSettingName ;
  }

  public: GGS_lstring mProperty_mSettingValue ;
  public: inline GGS_lstring readProperty_mSettingValue (void) const {
    return mProperty_mSettingValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configSettingList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSettingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingName = inValue ;
  }

  public: inline void setter_setMSettingValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_configSettingList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configSettingList_2E_element (const GGS_lstring & in_mSettingName,
                                            const GGS_lstring & in_mSettingValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configSettingList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configSettingList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configSettingList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
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
 
} ; // End of GGS_configSettingList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_configDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_configDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_configDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mDefinitionLocation,
                                                 const class GGS_configSettingList & in_mSettingList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configDefinitionList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configDefinitionList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_configDefinitionList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                          const class GGS_configSettingList & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_configDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_location & inOperand0,
                                                     const class GGS_configSettingList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_configDefinitionList add_operation (const GGS_configDefinitionList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_configSettingList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_configSettingList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_configSettingList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_configSettingList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_configSettingList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLocationAtIndex (class GGS_location constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingListAtIndex (class GGS_configSettingList constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_configSettingList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_configSettingList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mDefinitionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_mSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_configDefinitionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_configDefinitionList ;
 
} ; // End of GGS_configDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_configDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_configDefinitionList (const GGS_configDefinitionList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_location current_mDefinitionLocation (LOCATION_ARGS) const ;
  public: class GGS_configSettingList current_mSettingList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configDefinitionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_configDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mDefinitionLocation ;
  public: inline GGS_location readProperty_mDefinitionLocation (void) const {
    return mProperty_mDefinitionLocation ;
  }

  public: GGS_configSettingList mProperty_mSettingList ;
  public: inline GGS_configSettingList readProperty_mSettingList (void) const {
    return mProperty_mSettingList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDefinitionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLocation = inValue ;
  }

  public: inline void setter_setMSettingList (const GGS_configSettingList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_configDefinitionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configDefinitionList_2E_element (const GGS_location & in_mDefinitionLocation,
                                               const GGS_configSettingList & in_mSettingList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configDefinitionList_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_configSettingList & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configDefinitionList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_configSettingList & inOperand1,
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
 
} ; // End of GGS_configDefinitionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_immediatExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatExpression_2E_weak (const class GGS_immediatExpression & inSource) ;

  public: GGS_immediatExpression_2E_weak & operator = (const class GGS_immediatExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatExpression_2E_weak init_nil (void) {
    GGS_immediatExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatExpression bang_immediatExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatExpression unwrappedValue (void) const {
    GGS_immediatExpression result ;
    if (isValid ()) {
      const cPtr_immediatExpression * p = (cPtr_immediatExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatExpression (p) ;
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
  public: static GGS_immediatExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatExpression_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpressionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_immediatExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_immediatExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_immediatExpression & in_mExpression,
                                                 const class GGS_location & in_mErrorLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpressionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpressionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_immediatExpressionList class_func_listWithValue (const class GGS_immediatExpression & inOperand0,
                                                                            const class GGS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_immediatExpressionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_immediatExpressionList add_operation (const GGS_immediatExpressionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_immediatExpression constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_immediatExpression constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_immediatExpression & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_immediatExpression & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_immediatExpression & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_immediatExpression & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_immediatExpression & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_immediatExpressionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_immediatExpressionList ;
 
} ; // End of GGS_immediatExpressionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_immediatExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_immediatExpressionList (const GGS_immediatExpressionList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatExpressionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mErrorLocation ;
  public: inline GGS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_immediatExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_immediatExpressionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_immediatExpressionList_2E_element (const GGS_immediatExpression & in_mExpression,
                                                 const GGS_location & in_mErrorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpressionList_2E_element init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpressionList_2E_element class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                             const class GGS_location & inOperand1,
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
 
} ; // End of GGS_immediatExpressionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatInteger reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatInteger : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatInteger (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatInteger (const class cPtr_immediatInteger * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatInteger init_21_ (const class GGS_luint & inOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatInteger extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatInteger class_func_new (const class GGS_luint & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatInteger & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatInteger class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatInteger class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatInteger : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatInteger_init_21_ (const class GGS_luint & inOperand0,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_immediatInteger (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatInteger (const GGS_luint & in_mValue
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatInteger_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatInteger_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatInteger_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatInteger_2E_weak (const class GGS_immediatInteger & inSource) ;

  public: GGS_immediatInteger_2E_weak & operator = (const class GGS_immediatInteger & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatInteger_2E_weak init_nil (void) {
    GGS_immediatInteger_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatInteger bang_immediatInteger_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatInteger unwrappedValue (void) const {
    GGS_immediatInteger result ;
    if (isValid ()) {
      const cPtr_immediatInteger * p = (cPtr_immediatInteger *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatInteger (p) ;
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
  public: static GGS_immediatInteger_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatInteger_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatInteger_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatInteger_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRegister reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatRegister : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatRegister (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatRegister (const class cPtr_immediatRegister * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;
  public: void setProperty_mRegister (const GGS_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatRegister init_21_ (const class GGS_registerExpression & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatRegister extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRegister class_func_new (const class GGS_registerExpression & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRegister & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatRegister class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatRegister class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatRegister : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatRegister_init_21_ (const class GGS_registerExpression & inOperand0,
                                          Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;


//--- Default constructor
  public: cPtr_immediatRegister (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatRegister (const GGS_registerExpression & in_mRegister
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRegister_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatRegister_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatRegister_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatRegister_2E_weak (const class GGS_immediatRegister & inSource) ;

  public: GGS_immediatRegister_2E_weak & operator = (const class GGS_immediatRegister & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatRegister_2E_weak init_nil (void) {
    GGS_immediatRegister_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatRegister bang_immediatRegister_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatRegister unwrappedValue (void) const {
    GGS_immediatRegister result ;
    if (isValid ()) {
      const cPtr_immediatRegister * p = (cPtr_immediatRegister *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatRegister (p) ;
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
  public: static GGS_immediatRegister_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRegister_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRegister_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatRegister_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatAdd reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatAdd : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatAdd (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatAdd (const class cPtr_immediatAdd * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatAdd init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatAdd extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAdd class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAdd & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatAdd class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatAdd class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatAdd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatAdd_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatAdd (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatAdd_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatAdd_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatAdd_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatAdd_2E_weak (const class GGS_immediatAdd & inSource) ;

  public: GGS_immediatAdd_2E_weak & operator = (const class GGS_immediatAdd & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatAdd_2E_weak init_nil (void) {
    GGS_immediatAdd_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatAdd bang_immediatAdd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatAdd unwrappedValue (void) const {
    GGS_immediatAdd result ;
    if (isValid ()) {
      const cPtr_immediatAdd * p = (cPtr_immediatAdd *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatAdd (p) ;
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
  public: static GGS_immediatAdd_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAdd_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAdd_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatAdd_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSub reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatSub : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatSub (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatSub (const class cPtr_immediatSub * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSub init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSub extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSub class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSub & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatSub class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatSub class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatSub : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatSub_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatSub (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatSub (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSub_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatSub_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatSub_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatSub_2E_weak (const class GGS_immediatSub & inSource) ;

  public: GGS_immediatSub_2E_weak & operator = (const class GGS_immediatSub & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatSub_2E_weak init_nil (void) {
    GGS_immediatSub_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatSub bang_immediatSub_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatSub unwrappedValue (void) const {
    GGS_immediatSub result ;
    if (isValid ()) {
      const cPtr_immediatSub * p = (cPtr_immediatSub *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatSub (p) ;
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
  public: static GGS_immediatSub_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSub_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSub_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatSub_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatMul reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatMul : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatMul (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatMul (const class cPtr_immediatMul * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatMul init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatMul extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMul class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMul & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatMul class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatMul class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatMul : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatMul_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatMul (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatMul (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatMul_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatMul_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatMul_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatMul_2E_weak (const class GGS_immediatMul & inSource) ;

  public: GGS_immediatMul_2E_weak & operator = (const class GGS_immediatMul & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatMul_2E_weak init_nil (void) {
    GGS_immediatMul_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatMul bang_immediatMul_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatMul unwrappedValue (void) const {
    GGS_immediatMul result ;
    if (isValid ()) {
      const cPtr_immediatMul * p = (cPtr_immediatMul *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatMul (p) ;
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
  public: static GGS_immediatMul_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMul_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMul_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatMul_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatDiv reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatDiv : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatDiv (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatDiv (const class cPtr_immediatDiv * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatDiv init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatDiv extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatDiv class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatDiv & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatDiv class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatDiv class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatDiv : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatDiv_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatDiv (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatDiv (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatDiv_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatDiv_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatDiv_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatDiv_2E_weak (const class GGS_immediatDiv & inSource) ;

  public: GGS_immediatDiv_2E_weak & operator = (const class GGS_immediatDiv & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatDiv_2E_weak init_nil (void) {
    GGS_immediatDiv_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatDiv bang_immediatDiv_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatDiv unwrappedValue (void) const {
    GGS_immediatDiv result ;
    if (isValid ()) {
      const cPtr_immediatDiv * p = (cPtr_immediatDiv *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatDiv (p) ;
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
  public: static GGS_immediatDiv_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatDiv_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatDiv_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatDiv_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatMod reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatMod : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatMod (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatMod (const class cPtr_immediatMod * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatMod init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatMod extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMod class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMod & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatMod class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatMod class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatMod : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatMod_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatMod (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatMod (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatMod_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatMod_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatMod_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatMod_2E_weak (const class GGS_immediatMod & inSource) ;

  public: GGS_immediatMod_2E_weak & operator = (const class GGS_immediatMod & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatMod_2E_weak init_nil (void) {
    GGS_immediatMod_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatMod bang_immediatMod_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatMod unwrappedValue (void) const {
    GGS_immediatMod result ;
    if (isValid ()) {
      const cPtr_immediatMod * p = (cPtr_immediatMod *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatMod (p) ;
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
  public: static GGS_immediatMod_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMod_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMod_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatMod_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatOr reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatOr : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatOr (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatOr (const class cPtr_immediatOr * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatOr init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                              const class GGS_immediatExpression & inOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatOr extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatOr class_func_new (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatOr & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatOr class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatOr class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatOr : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatOr_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                        const class GGS_immediatExpression & inOperand1,
                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatOr (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatOr (const GGS_immediatExpression & in_mLeftExpression,
                           const GGS_immediatExpression & in_mRightExpression
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatOr_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatOr_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatOr_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatOr_2E_weak (const class GGS_immediatOr & inSource) ;

  public: GGS_immediatOr_2E_weak & operator = (const class GGS_immediatOr & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatOr_2E_weak init_nil (void) {
    GGS_immediatOr_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatOr bang_immediatOr_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatOr unwrappedValue (void) const {
    GGS_immediatOr result ;
    if (isValid ()) {
      const cPtr_immediatOr * p = (cPtr_immediatOr *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatOr (p) ;
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
  public: static GGS_immediatOr_2E_weak extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatOr_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatOr_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatOr_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatAnd reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatAnd : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatAnd (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatAnd (const class cPtr_immediatAnd * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatAnd init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatAnd extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAnd class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAnd & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatAnd class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatAnd class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatAnd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatAnd_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatAnd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatAnd (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatAnd_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatAnd_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatAnd_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatAnd_2E_weak (const class GGS_immediatAnd & inSource) ;

  public: GGS_immediatAnd_2E_weak & operator = (const class GGS_immediatAnd & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatAnd_2E_weak init_nil (void) {
    GGS_immediatAnd_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatAnd bang_immediatAnd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatAnd unwrappedValue (void) const {
    GGS_immediatAnd result ;
    if (isValid ()) {
      const cPtr_immediatAnd * p = (cPtr_immediatAnd *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatAnd (p) ;
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
  public: static GGS_immediatAnd_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAnd_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAnd_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatAnd_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatXor reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatXor : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatXor (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatXor (const class cPtr_immediatXor * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatXor init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatXor extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatXor class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatXor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatXor class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatXor class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatXor : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatXor_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatXor (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatXor (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatXor_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatXor_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatXor_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatXor_2E_weak (const class GGS_immediatXor & inSource) ;

  public: GGS_immediatXor_2E_weak & operator = (const class GGS_immediatXor & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatXor_2E_weak init_nil (void) {
    GGS_immediatXor_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatXor bang_immediatXor_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatXor unwrappedValue (void) const {
    GGS_immediatXor result ;
    if (isValid ()) {
      const cPtr_immediatXor * p = (cPtr_immediatXor *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatXor (p) ;
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
  public: static GGS_immediatXor_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatXor_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatXor_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatXor_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLeftShift reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatLeftShift : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLeftShift (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLeftShift (const class cPtr_immediatLeftShift * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLeftShift init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLeftShift extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLeftShift class_func_new (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLeftShift & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatLeftShift class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatLeftShift class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLeftShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLeftShift_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLeftShift (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLeftShift (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLeftShift_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatLeftShift_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLeftShift_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLeftShift_2E_weak (const class GGS_immediatLeftShift & inSource) ;

  public: GGS_immediatLeftShift_2E_weak & operator = (const class GGS_immediatLeftShift & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLeftShift_2E_weak init_nil (void) {
    GGS_immediatLeftShift_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLeftShift bang_immediatLeftShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatLeftShift unwrappedValue (void) const {
    GGS_immediatLeftShift result ;
    if (isValid ()) {
      const cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatLeftShift (p) ;
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
  public: static GGS_immediatLeftShift_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLeftShift_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLeftShift_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatLeftShift_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRightShift reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatRightShift : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatRightShift (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatRightShift (const class cPtr_immediatRightShift * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatRightShift init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatRightShift extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRightShift class_func_new (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRightShift & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatRightShift class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatRightShift class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatRightShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatRightShift_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                const class GGS_immediatExpression & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatRightShift (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatRightShift (const GGS_immediatExpression & in_mLeftExpression,
                                   const GGS_immediatExpression & in_mRightExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatRightShift_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatRightShift_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatRightShift_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatRightShift_2E_weak (const class GGS_immediatRightShift & inSource) ;

  public: GGS_immediatRightShift_2E_weak & operator = (const class GGS_immediatRightShift & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatRightShift_2E_weak init_nil (void) {
    GGS_immediatRightShift_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatRightShift bang_immediatRightShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatRightShift unwrappedValue (void) const {
    GGS_immediatRightShift result ;
    if (isValid ()) {
      const cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatRightShift (p) ;
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
  public: static GGS_immediatRightShift_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRightShift_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRightShift_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatRightShift_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatEqualTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatEqualTest (const class cPtr_immediatEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatEqualTest extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatEqualTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatEqualTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatEqualTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatEqualTest_2E_weak (const class GGS_immediatEqualTest & inSource) ;

  public: GGS_immediatEqualTest_2E_weak & operator = (const class GGS_immediatEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatEqualTest_2E_weak init_nil (void) {
    GGS_immediatEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatEqualTest bang_immediatEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatEqualTest unwrappedValue (void) const {
    GGS_immediatEqualTest result ;
    if (isValid ()) {
      const cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatEqualTest (p) ;
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
  public: static GGS_immediatEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatEqualTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatNotEqualTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatNotEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatNotEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatNotEqualTest (const class cPtr_immediatNotEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatNotEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_immediatExpression & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatNotEqualTest extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNotEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                const class GGS_immediatExpression & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNotEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatNotEqualTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatNotEqualTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatNotEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatNotEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                  const class GGS_immediatExpression & inOperand1,
                                                  Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatNotEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatNotEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                     const GGS_immediatExpression & in_mRightExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatNotEqualTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatNotEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatNotEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatNotEqualTest_2E_weak (const class GGS_immediatNotEqualTest & inSource) ;

  public: GGS_immediatNotEqualTest_2E_weak & operator = (const class GGS_immediatNotEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatNotEqualTest_2E_weak init_nil (void) {
    GGS_immediatNotEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatNotEqualTest bang_immediatNotEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatNotEqualTest unwrappedValue (void) const {
    GGS_immediatNotEqualTest result ;
    if (isValid ()) {
      const cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatNotEqualTest (p) ;
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
  public: static GGS_immediatNotEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNotEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNotEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatNotEqualTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatGreaterTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatGreaterTest (const class cPtr_immediatGreaterTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatGreaterTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatGreaterTest extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                               const class GGS_immediatExpression & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatGreaterTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatGreaterTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatGreaterTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                 const class GGS_immediatExpression & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatGreaterTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatGreaterTest (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatGreaterTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatGreaterTest_2E_weak (const class GGS_immediatGreaterTest & inSource) ;

  public: GGS_immediatGreaterTest_2E_weak & operator = (const class GGS_immediatGreaterTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatGreaterTest_2E_weak init_nil (void) {
    GGS_immediatGreaterTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatGreaterTest bang_immediatGreaterTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatGreaterTest unwrappedValue (void) const {
    GGS_immediatGreaterTest result ;
    if (isValid ()) {
      const cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatGreaterTest (p) ;
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
  public: static GGS_immediatGreaterTest_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatGreaterTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatGreaterOrEqualTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterOrEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatGreaterOrEqualTest (const class cPtr_immediatGreaterOrEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatGreaterOrEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatGreaterOrEqualTest extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterOrEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                      const class GGS_immediatExpression & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatGreaterOrEqualTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatGreaterOrEqualTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatGreaterOrEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_immediatExpression & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatGreaterOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatGreaterOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                           const GGS_immediatExpression & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatGreaterOrEqualTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterOrEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterOrEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatGreaterOrEqualTest_2E_weak (const class GGS_immediatGreaterOrEqualTest & inSource) ;

  public: GGS_immediatGreaterOrEqualTest_2E_weak & operator = (const class GGS_immediatGreaterOrEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatGreaterOrEqualTest_2E_weak init_nil (void) {
    GGS_immediatGreaterOrEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatGreaterOrEqualTest bang_immediatGreaterOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatGreaterOrEqualTest unwrappedValue (void) const {
    GGS_immediatGreaterOrEqualTest result ;
    if (isValid ()) {
      const cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatGreaterOrEqualTest (p) ;
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
  public: static GGS_immediatGreaterOrEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterOrEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterOrEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatGreaterOrEqualTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLowerTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLowerTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLowerTest (const class cPtr_immediatLowerTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLowerTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLowerTest extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatLowerTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatLowerTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLowerTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLowerTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLowerTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLowerTest (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLowerTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLowerTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLowerTest_2E_weak (const class GGS_immediatLowerTest & inSource) ;

  public: GGS_immediatLowerTest_2E_weak & operator = (const class GGS_immediatLowerTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLowerTest_2E_weak init_nil (void) {
    GGS_immediatLowerTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLowerTest bang_immediatLowerTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatLowerTest unwrappedValue (void) const {
    GGS_immediatLowerTest result ;
    if (isValid ()) {
      const cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatLowerTest (p) ;
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
  public: static GGS_immediatLowerTest_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatLowerTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLowerOrEqualTest reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerOrEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLowerOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLowerOrEqualTest (const class cPtr_immediatLowerOrEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLowerOrEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                            const class GGS_immediatExpression & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLowerOrEqualTest extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerOrEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                    const class GGS_immediatExpression & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatLowerOrEqualTest class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatLowerOrEqualTest class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLowerOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLowerOrEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLowerOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLowerOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                         const GGS_immediatExpression & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatLowerOrEqualTest_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerOrEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLowerOrEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLowerOrEqualTest_2E_weak (const class GGS_immediatLowerOrEqualTest & inSource) ;

  public: GGS_immediatLowerOrEqualTest_2E_weak & operator = (const class GGS_immediatLowerOrEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLowerOrEqualTest_2E_weak init_nil (void) {
    GGS_immediatLowerOrEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLowerOrEqualTest bang_immediatLowerOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatLowerOrEqualTest unwrappedValue (void) const {
    GGS_immediatLowerOrEqualTest result ;
    if (isValid ()) {
      const cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatLowerOrEqualTest (p) ;
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
  public: static GGS_immediatLowerOrEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerOrEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerOrEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatLowerOrEqualTest_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatNegate reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatNegate : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatNegate (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatNegate (const class cPtr_immediatNegate * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatNegate init_21_ (const class GGS_immediatExpression & inOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatNegate extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNegate class_func_new (const class GGS_immediatExpression & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNegate & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatNegate class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatNegate class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatNegate : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatNegate_init_21_ (const class GGS_immediatExpression & inOperand0,
                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_immediatNegate (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatNegate (const GGS_immediatExpression & in_mExpression
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatNegate_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatNegate_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatNegate_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatNegate_2E_weak (const class GGS_immediatNegate & inSource) ;

  public: GGS_immediatNegate_2E_weak & operator = (const class GGS_immediatNegate & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatNegate_2E_weak init_nil (void) {
    GGS_immediatNegate_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatNegate bang_immediatNegate_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatNegate unwrappedValue (void) const {
    GGS_immediatNegate result ;
    if (isValid ()) {
      const cPtr_immediatNegate * p = (cPtr_immediatNegate *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatNegate (p) ;
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
  public: static GGS_immediatNegate_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNegate_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNegate_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatNegate_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatComplement reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatComplement : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatComplement (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatComplement (const class cPtr_immediatComplement * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_immediatExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatComplement init_21_ (const class GGS_immediatExpression & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatComplement extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatComplement class_func_new (const class GGS_immediatExpression & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatComplement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatComplement class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatComplement class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatComplement : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatComplement_init_21_ (const class GGS_immediatExpression & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_immediatComplement (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatComplement (const GGS_immediatExpression & in_mExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatComplement_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatComplement_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatComplement_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatComplement_2E_weak (const class GGS_immediatComplement & inSource) ;

  public: GGS_immediatComplement_2E_weak & operator = (const class GGS_immediatComplement & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatComplement_2E_weak init_nil (void) {
    GGS_immediatComplement_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatComplement bang_immediatComplement_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatComplement unwrappedValue (void) const {
    GGS_immediatComplement result ;
    if (isValid ()) {
      const cPtr_immediatComplement * p = (cPtr_immediatComplement *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatComplement (p) ;
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
  public: static GGS_immediatComplement_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatComplement_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatComplement_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatComplement_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSliceExpressionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatSliceExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_immediatSliceExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_immediatSliceExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSliceName,
                                                 const class GGS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSliceExpressionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSliceExpressionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSliceExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_immediatSliceExpressionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_immediatSliceExpressionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_immediatSliceExpressionList add_operation (const GGS_immediatSliceExpressionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_immediatExpression constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_immediatExpression constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_immediatExpression & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_immediatExpression & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_immediatExpression & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_immediatExpression & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_immediatExpression & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSliceNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatSliceExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatSliceExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatSliceExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_immediatSliceExpressionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_immediatSliceExpressionList ;
 
} ; // End of GGS_immediatSliceExpressionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_immediatSliceExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_immediatSliceExpressionList (const GGS_immediatSliceExpressionList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mSliceName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatSliceExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSliceExpressionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatSliceExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceName ;
  public: inline GGS_lstring readProperty_mSliceName (void) const {
    return mProperty_mSliceName ;
  }

  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_immediatSliceExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_immediatSliceExpressionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_immediatSliceExpressionList_2E_element (const GGS_lstring & in_mSliceName,
                                                      const GGS_immediatExpression & in_mExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSliceExpressionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_immediatExpression & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSliceExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSliceExpressionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_immediatExpression & inOperand1,
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
 
} ; // End of GGS_immediatSliceExpressionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSlice reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatSlice : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatSlice (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatSlice (const class cPtr_immediatSlice * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRegisterName (void) const ;
  public: void setProperty_mRegisterName (const GGS_lstring & inValue) ;

  public: class GGS_immediatSliceExpressionList readProperty_mSliceExpressionList (void) const ;
  public: void setProperty_mSliceExpressionList (const GGS_immediatSliceExpressionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSlice init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_immediatSliceExpressionList & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSlice extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSlice class_func_new (const class GGS_lstring & inOperand0,
                                                         const class GGS_immediatSliceExpressionList & inOperand1
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatSlice class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @immediatSlice class
//
//--------------------------------------------------------------------------------------------------

class cPtr_immediatSlice : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatSlice_init_21__21_ (const class GGS_lstring & inOperand0,
                                           const class GGS_immediatSliceExpressionList & inOperand1,
                                           Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_immediatSliceExpressionList mProperty_mSliceExpressionList ;


//--- Default constructor
  public: cPtr_immediatSlice (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatSlice (const GGS_lstring & in_mRegisterName,
                              const GGS_immediatSliceExpressionList & in_mSliceExpressionList
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @immediatSlice_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_immediatSlice_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatSlice_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatSlice_2E_weak (const class GGS_immediatSlice & inSource) ;

  public: GGS_immediatSlice_2E_weak & operator = (const class GGS_immediatSlice & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatSlice_2E_weak init_nil (void) {
    GGS_immediatSlice_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatSlice bang_immediatSlice_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_immediatSlice unwrappedValue (void) const {
    GGS_immediatSlice result ;
    if (isValid ()) {
      const cPtr_immediatSlice * p = (cPtr_immediatSlice *) ptr () ;
      if (nullptr != p) {
        result = GGS_immediatSlice (p) ;
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
  public: static GGS_immediatSlice_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSlice_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSlice_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_immediatSlice_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_constantDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_constantDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_constantDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mConstantName,
                                                 const class GGS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantDefinitionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantDefinitionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_constantDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_immediatExpression & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_constantDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_constantDefinitionList add_operation (const GGS_constantDefinitionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_immediatExpression constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_immediatExpression constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_immediatExpression & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_immediatExpression & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_immediatExpression & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_immediatExpression & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_immediatExpression & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mConstantNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_constantDefinitionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constantDefinitionList ;
 
} ; // End of GGS_constantDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_constantDefinitionList (const GGS_constantDefinitionList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantDefinitionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantDefinitionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_constantDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: inline GGS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constantDefinitionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantDefinitionList_2E_element (const GGS_lstring & in_mConstantName,
                                                 const GGS_immediatExpression & in_mExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantDefinitionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_immediatExpression & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_immediatExpression & inOperand1,
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
 
} ; // End of GGS_constantDefinitionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualConfigurationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_actualConfigurationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_actualConfigurationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_actualConfigurationMap (const GGS_actualConfigurationMap & inSource) ;
  public: GGS_actualConfigurationMap & operator = (const GGS_actualConfigurationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualConfigurationMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualConfigurationMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualConfigurationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_actualConfigurationMap class_func_mapWithMapToOverride (const class GGS_actualConfigurationMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actualConfigurationMap add_operation (const GGS_actualConfigurationMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GGS_uint constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterValueForKey (class GGS_uint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRegisterAddressForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRegisterValueForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualConfigurationMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_actualConfigurationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_actualConfigurationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GGS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actualConfigurationMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualConfigurationMap ;
 
} ; // End of GGS_actualConfigurationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualConfigurationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_actualConfigurationMap (const GGS_actualConfigurationMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualConfigurationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@actualConfigurationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_actualConfigurationMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mRegisterAddress ;
  public: GGS_uint mProperty_mRegisterValue ;

//--- Constructors
  public: cMapElement_actualConfigurationMap (const GGS_actualConfigurationMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_actualConfigurationMap (const GGS_lstring & inKey,
                                              const GGS_uint & in_mRegisterAddress,
                                              const GGS_uint & in_mRegisterValue
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
//
// Phase 1: @actualConfigurationMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_uint mProperty_mRegisterValue ;
  public: inline GGS_uint readProperty_mRegisterValue (void) const {
    return mProperty_mRegisterValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterValue (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_actualConfigurationMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualConfigurationMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_uint & in_mRegisterAddress,
                                                 const GGS_uint & in_mRegisterValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualConfigurationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         const class GGS_uint & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualConfigurationMap_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualConfigurationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_actualConfigurationMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: actualConfigurationMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_actualConfigurationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_actualConfigurationMap_2E_element_3F_ (const GGS_actualConfigurationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_actualConfigurationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_actualConfigurationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_actualConfigurationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_actualConfigurationMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_bitNumberExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberExpression (const class cPtr_bitNumberExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberExpression init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberExpression extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberExpression_init (Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_bitNumberExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_bitNumberExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberExpression_2E_weak (const class GGS_bitNumberExpression & inSource) ;

  public: GGS_bitNumberExpression_2E_weak & operator = (const class GGS_bitNumberExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberExpression_2E_weak init_nil (void) {
    GGS_bitNumberExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberExpression bang_bitNumberExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_bitNumberExpression unwrappedValue (void) const {
    GGS_bitNumberExpression result ;
    if (isValid ()) {
      const cPtr_bitNumberExpression * p = (cPtr_bitNumberExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_bitNumberExpression (p) ;
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
  public: static GGS_bitNumberExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberExpression_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLiteralExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralExpression : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLiteralExpression (const class cPtr_bitNumberLiteralExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mBitNumberLiteralExpression (void) const ;
  public: void setProperty_mBitNumberLiteralExpression (const GGS_immediatExpression & inValue) ;

  public: class GGS_location readProperty_mEndOfExpression (void) const ;
  public: void setProperty_mEndOfExpression (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLiteralExpression init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLiteralExpression extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralExpression class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                      const class GGS_location & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberLiteralExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberLiteralExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralExpression : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLiteralExpression_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mBitNumberLiteralExpression ;
  public: GGS_location mProperty_mEndOfExpression ;


//--- Default constructor
  public: cPtr_bitNumberLiteralExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLiteralExpression (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                           const GGS_location & in_mEndOfExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLiteralExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralExpression_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLiteralExpression_2E_weak (const class GGS_bitNumberLiteralExpression & inSource) ;

  public: GGS_bitNumberLiteralExpression_2E_weak & operator = (const class GGS_bitNumberLiteralExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLiteralExpression_2E_weak init_nil (void) {
    GGS_bitNumberLiteralExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLiteralExpression bang_bitNumberLiteralExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_bitNumberLiteralExpression unwrappedValue (void) const {
    GGS_bitNumberLiteralExpression result ;
    if (isValid ()) {
      const cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_bitNumberLiteralExpression (p) ;
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
  public: static GGS_bitNumberLiteralExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberLiteralExpression_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLiteralValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralValue : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLiteralValue (const class cPtr_bitNumberLiteralValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBitNumberLiteralValue (void) const ;
  public: void setProperty_mBitNumberLiteralValue (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLiteralValue init_21_ (const class GGS_luint & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLiteralValue extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralValue class_func_new (const class GGS_luint & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberLiteralValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberLiteralValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLiteralValue_init_21_ (const class GGS_luint & inOperand0,
                                               Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBitNumberLiteralValue ;


//--- Default constructor
  public: cPtr_bitNumberLiteralValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLiteralValue (const GGS_luint & in_mBitNumberLiteralValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLiteralValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralValue_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLiteralValue_2E_weak (const class GGS_bitNumberLiteralValue & inSource) ;

  public: GGS_bitNumberLiteralValue_2E_weak & operator = (const class GGS_bitNumberLiteralValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLiteralValue_2E_weak init_nil (void) {
    GGS_bitNumberLiteralValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLiteralValue bang_bitNumberLiteralValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_bitNumberLiteralValue unwrappedValue (void) const {
    GGS_bitNumberLiteralValue result ;
    if (isValid ()) {
      const cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_bitNumberLiteralValue (p) ;
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
  public: static GGS_bitNumberLiteralValue_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberLiteralValue_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLabelValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLabelValue : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLabelValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLabelValue (const class cPtr_bitNumberLabelValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mBitNumberLabelValue (void) const ;
  public: void setProperty_mBitNumberLabelValue (const GGS_lstring & inValue) ;

  public: class GGS_luint readProperty_mBitNumberIndexValue (void) const ;
  public: void setProperty_mBitNumberIndexValue (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLabelValue init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_luint & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLabelValue extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLabelValue class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_luint & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLabelValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberLabelValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitNumberLabelValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLabelValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLabelValue_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_luint & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mBitNumberLabelValue ;
  public: GGS_luint mProperty_mBitNumberIndexValue ;


//--- Default constructor
  public: cPtr_bitNumberLabelValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLabelValue (const GGS_lstring & in_mBitNumberLabelValue,
                                    const GGS_luint & in_mBitNumberIndexValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitNumberLabelValue_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLabelValue_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLabelValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLabelValue_2E_weak (const class GGS_bitNumberLabelValue & inSource) ;

  public: GGS_bitNumberLabelValue_2E_weak & operator = (const class GGS_bitNumberLabelValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLabelValue_2E_weak init_nil (void) {
    GGS_bitNumberLabelValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLabelValue bang_bitNumberLabelValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_bitNumberLabelValue unwrappedValue (void) const {
    GGS_bitNumberLabelValue result ;
    if (isValid ()) {
      const cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) ptr () ;
      if (nullptr != p) {
        result = GGS_bitNumberLabelValue (p) ;
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
  public: static GGS_bitNumberLabelValue_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLabelValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLabelValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitNumberLabelValue_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @labelMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_labelMap ;

//--------------------------------------------------------------------------------------------------

class GGS_labelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_labelMap (void) ;

//--------------------------------- Handle copy
  public: GGS_labelMap (const GGS_labelMap & inSource) ;
  public: GGS_labelMap & operator = (const GGS_labelMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_labelMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_labelMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_labelMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_labelMap class_func_mapWithMapToOverride (const class GGS_labelMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_labelMap add_operation (const GGS_labelMap & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_labelMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_labelMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_labelMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GGS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_labelMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_labelMap ;
 
} ; // End of GGS_labelMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_labelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_labelMap (const GGS_labelMap & inEnumeratedObject,
                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_labelMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@labelMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_labelMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_labelMap (const GGS_labelMap_2E_element & inValue
                                COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_labelMap (const GGS_lstring & inKey
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
//
// Phase 1: @labelMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_labelMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_labelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_labelMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_labelMap_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_labelMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_labelMap_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_labelMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_labelMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: labelMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_labelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_labelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_labelMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_labelMap_2E_element_3F_ (const GGS_labelMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_labelMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_labelMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_labelMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_labelMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4String' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_34_String (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_constantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_constantMap (void) ;

//--------------------------------- Handle copy
  public: GGS_constantMap (const GGS_constantMap & inSource) ;
  public: GGS_constantMap & operator = (const GGS_constantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_constantMap class_func_mapWithMapToOverride (const class GGS_constantMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_sint_36__34_ & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_constantMap add_operation (const GGS_constantMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_sint_36__34_ constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GGS_sint_36__34_ constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_sint_36__34_ & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_mValueForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_constantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_constantMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constantMap ;
 
} ; // End of GGS_constantMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constantMap (const GGS_constantMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_sint_36__34_ current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantMap : public cMapElement {
//--- Map attributes
  public: GGS_sint_36__34_ mProperty_mValue ;

//--- Constructors
  public: cMapElement_constantMap (const GGS_constantMap_2E_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_constantMap (const GGS_lstring & inKey,
                                   const GGS_sint_36__34_ & in_mValue
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
//
// Phase 1: @constantMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constantMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_sint_36__34_ & in_mValue) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constantMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constantMap.element? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constantMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_routineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_routineMap (void) ;

//--------------------------------- Handle copy
  public: GGS_routineMap (const GGS_routineMap & inSource) ;
  public: GGS_routineMap & operator = (const GGS_routineMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMap init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMap extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_routineMap class_func_mapWithMapToOverride (const class GGS_routineMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_bool & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_uint & inOperand3,
                                                     const class GGS_bool & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineMap add_operation (const GGS_routineMap & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_uint constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankForKey (class GGS_uint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankForKey (class GGS_uint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  class GGS_bool & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mPreservesBankForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRequiredBankForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mReturnedBankForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineMap getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GGS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_routineMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineMap ;
 
} ; // End of GGS_routineMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineMap (const GGS_routineMap & inEnumeratedObject,
                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_uint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineMap : public cMapElement {
//--- Map attributes
  public: GGS_bool mProperty_mIsNoReturn ;
  public: GGS_uint mProperty_mRequiredBank ;
  public: GGS_uint mProperty_mReturnedBank ;
  public: GGS_bool mProperty_mPreservesBank ;

//--- Constructors
  public: cMapElement_routineMap (const GGS_routineMap_2E_element & inValue
                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineMap (const GGS_lstring & inKey,
                                  const GGS_bool & in_mIsNoReturn,
                                  const GGS_uint & in_mRequiredBank,
                                  const GGS_uint & in_mReturnedBank,
                                  const GGS_bool & in_mPreservesBank
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
//
// Phase 1: @routineMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineMap_2E_element (const GGS_lstring & in_lkey,
                                     const GGS_bool & in_mIsNoReturn,
                                     const GGS_uint & in_mRequiredBank,
                                     const GGS_uint & in_mReturnedBank,
                                     const GGS_bool & in_mPreservesBank) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: routineMap.element? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum routineKind
//--------------------------------------------------------------------------------------------------

class GGS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_routineKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regularRoutine,
    enum_noReturnRoutine,
    enum_interruptRoutine
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
  public: static GGS_routineKind extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineKind class_func_interruptRoutine (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_noReturnRoutine (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_regularRoutine (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInterruptRoutine (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoReturnRoutine (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegularRoutine (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

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
// Phase 1: @registerTable map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_registerTable ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_registerTable_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_registerTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_registerTable (void) ;

//--------------------------------- Handle copy
  public: GGS_registerTable (const GGS_registerTable & inSource) ;
  public: GGS_registerTable & operator = (const GGS_registerTable & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerTable init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerTable extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_registerTable class_func_mapWithMapToOverride (const class GGS_registerTable & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uintlist & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_bitSliceTable & inOperand3,
                                                     const class GGS_string & inOperand4,
                                                     const class GGS_registerProtection & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_registerTable add_operation (const GGS_registerTable & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uintlist constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_bitSliceTable constinArgument3,
                                                  class GGS_string constinArgument4,
                                                  class GGS_registerProtection constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitDefinitionStringForKey (class GGS_string constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitSliceTableForKey (class GGS_bitSliceTable constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProtectionForKey (class GGS_registerProtection constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressListForKey (class GGS_uintlist constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSizeForKey (class GGS_uint constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uintlist & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_bitSliceTable & outArgument3,
                                                  class GGS_string & outArgument4,
                                                  class GGS_registerProtection & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBitDefinitionStringForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bitSliceTable getter_mBitSliceTableForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_registerProtection getter_mProtectionForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mRegisterAddressListForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mSizeForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_registerTable getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_registerTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_registerTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_registerTable_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_registerTable ;
 
} ; // End of GGS_registerTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_registerTable : public cGenericAbstractEnumerator {
  public: cEnumerator_registerTable (const GGS_registerTable & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mRegisterAddressList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mSize (LOCATION_ARGS) const ;
  public: class GGS_bitSliceTable current_mBitSliceTable (LOCATION_ARGS) const ;
  public: class GGS_string current_mBitDefinitionString (LOCATION_ARGS) const ;
  public: class GGS_registerProtection current_mProtection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_registerTable_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@registerTable' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_registerTable : public cMapElement {
//--- Map attributes
  public: GGS_uintlist mProperty_mRegisterAddressList ;
  public: GGS_uint mProperty_mSize ;
  public: GGS_bitSliceTable mProperty_mBitSliceTable ;
  public: GGS_string mProperty_mBitDefinitionString ;
  public: GGS_registerProtection mProperty_mProtection ;

//--- Constructors
  public: cMapElement_registerTable (const GGS_registerTable_2E_element & inValue
                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_registerTable (const GGS_lstring & inKey,
                                     const GGS_uintlist & in_mRegisterAddressList,
                                     const GGS_uint & in_mSize,
                                     const GGS_bitSliceTable & in_mBitSliceTable,
                                     const GGS_string & in_mBitDefinitionString,
                                     const GGS_registerProtection & in_mProtection
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
//
// Phase 1: @symbolTableForOptimizations map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForOptimizations ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForOptimizations_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForOptimizations : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_symbolTableForOptimizations (void) ;

//--------------------------------- Handle copy
  public: GGS_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inSource) ;
  public: GGS_symbolTableForOptimizations & operator = (const GGS_symbolTableForOptimizations & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForOptimizations init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForOptimizations extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForOptimizations class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_symbolTableForOptimizations class_func_mapWithMapToOverride (const class GGS_symbolTableForOptimizations & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_symbolTableForOptimizations add_operation (const GGS_symbolTableForOptimizations & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLineIndexForKey (class GGS_uint constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsDeletableForKey (class GGS_bool constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mDefinitionLineIndexForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsDeletableForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForOptimizations getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForOptimizations_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForOptimizations * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GGS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_symbolTableForOptimizations_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_symbolTableForOptimizations ;
 
} ; // End of GGS_symbolTableForOptimizations class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForOptimizations : public cGenericAbstractEnumerator {
  public: cEnumerator_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsDeletable (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_symbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@symbolTableForOptimizations' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mDefinitionLineIndex ;
  public: GGS_bool mProperty_mIsDeletable ;

//--- Constructors
  public: cMapElement_symbolTableForOptimizations (const GGS_symbolTableForOptimizations_2E_element & inValue
                                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_symbolTableForOptimizations (const GGS_lstring & inKey,
                                                   const GGS_uint & in_mDefinitionLineIndex,
                                                   const GGS_bool & in_mIsDeletable
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
//
// Phase 1: @symbolTableForOptimizations_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_symbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForOptimizations_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_uint & in_mDefinitionLineIndex,
                                                      const GGS_bool & in_mIsDeletable) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_symbolTableForOptimizations_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: symbolTableForOptimizations.element? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_symbolTableForOptimizations_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configFieldMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_configFieldMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configFieldMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_configFieldMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_configFieldMap (void) ;

//--------------------------------- Handle copy
  public: GGS_configFieldMap (const GGS_configFieldMap & inSource) ;
  public: GGS_configFieldMap & operator = (const GGS_configFieldMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configFieldMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configFieldMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configFieldMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_configFieldMap class_func_mapWithMapToOverride (const class GGS_configFieldMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_luint & inOperand2,
                                                     const class GGS_lstring & inOperand3,
                                                     const class GGS_fieldSettingMap & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_configFieldMap add_operation (const GGS_configFieldMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_luint constinArgument2,
                                                  class GGS_lstring constinArgument3,
                                                  class GGS_fieldSettingMap constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDescriptionForKey (class GGS_lstring constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldSettingMapForKey (class GGS_fieldSettingMap constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaskValueForKey (class GGS_luint constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterNameForKey (class GGS_lstring constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_luint & outArgument2,
                                                  class GGS_lstring & outArgument3,
                                                  class GGS_fieldSettingMap & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDescriptionForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fieldSettingMap getter_mFieldSettingMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mMaskValueForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mRegisterNameForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configFieldMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_configFieldMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_configFieldMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_configFieldMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_configFieldMap ;
 
} ; // End of GGS_configFieldMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_configFieldMap : public cGenericAbstractEnumerator {
  public: cEnumerator_configFieldMap (const GGS_configFieldMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configFieldMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fieldSettingMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_fieldSettingMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_fieldSettingMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_fieldSettingMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_fieldSettingMap (void) ;

//--------------------------------- Handle copy
  public: GGS_fieldSettingMap (const GGS_fieldSettingMap & inSource) ;
  public: GGS_fieldSettingMap & operator = (const GGS_fieldSettingMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fieldSettingMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fieldSettingMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fieldSettingMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_fieldSettingMap class_func_mapWithMapToOverride (const class GGS_fieldSettingMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_fieldSettingMap add_operation (const GGS_fieldSettingMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaskForKey (class GGS_uint constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mMaskForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mValueForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fieldSettingMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_fieldSettingMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_fieldSettingMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_fieldSettingMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_fieldSettingMap ;
 
} ; // End of GGS_fieldSettingMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_fieldSettingMap : public cGenericAbstractEnumerator {
  public: cEnumerator_fieldSettingMap (const GGS_fieldSettingMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mValue (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMask (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fieldSettingMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@configFieldMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_configFieldMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_luint mProperty_mMaskValue ;
  public: GGS_lstring mProperty_mDescription ;
  public: GGS_fieldSettingMap mProperty_mFieldSettingMap ;

//--- Constructors
  public: cMapElement_configFieldMap (const GGS_configFieldMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_configFieldMap (const GGS_lstring & inKey,
                                      const GGS_lstring & in_mRegisterName,
                                      const GGS_luint & in_mMaskValue,
                                      const GGS_lstring & in_mDescription,
                                      const GGS_fieldSettingMap & in_mFieldSettingMap
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
//
// Phase 1: @configFieldMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_configFieldMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mRegisterName ;
  public: inline GGS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GGS_luint mProperty_mMaskValue ;
  public: inline GGS_luint readProperty_mMaskValue (void) const {
    return mProperty_mMaskValue ;
  }

  public: GGS_lstring mProperty_mDescription ;
  public: inline GGS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

  public: GGS_fieldSettingMap mProperty_mFieldSettingMap ;
  public: inline GGS_fieldSettingMap readProperty_mFieldSettingMap (void) const {
    return mProperty_mFieldSettingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configFieldMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterName = inValue ;
  }

  public: inline void setter_setMMaskValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaskValue = inValue ;
  }

  public: inline void setter_setMDescription (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

  public: inline void setter_setMFieldSettingMap (const GGS_fieldSettingMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldSettingMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_configFieldMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configFieldMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lstring & in_mRegisterName,
                                         const GGS_luint & in_mMaskValue,
                                         const GGS_lstring & in_mDescription,
                                         const GGS_fieldSettingMap & in_mFieldSettingMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configFieldMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_luint & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         const class GGS_fieldSettingMap & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configFieldMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configFieldMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_luint & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
                                                                     const class GGS_fieldSettingMap & inOperand4,
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
 
} ; // End of GGS_configFieldMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: configFieldMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_configFieldMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_configFieldMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_configFieldMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_configFieldMap_2E_element_3F_ (const GGS_configFieldMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_configFieldMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_configFieldMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_configFieldMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_configFieldMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@fieldSettingMap' map
//
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
//
// Phase 1: @fieldSettingMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fieldSettingMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fieldSettingMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mValue,
                                          const GGS_uint & in_mMask) ;

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
 
} ; // End of GGS_fieldSettingMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fieldSettingMap.element? optional
//
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
 
} ; // End of GGS_fieldSettingMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ;

