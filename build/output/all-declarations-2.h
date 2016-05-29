#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Parser class 'pic18_start_symbol' declaration                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_start_5F_symbol {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_start_5F_symbol (void) {}

//--- Non terminal declarations
  protected : virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                     class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                     class GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                     class GALGAS_lstringlist & ioArgument3,
                                     class GALGAS_lstringlist & ioArgument4,
                                     class GALGAS_ramDefinitionList & ioArgument5,
                                     class GALGAS_lstringlist & ioArgument6,
                                     class GALGAS_configDefinitionList & ioArgument7,
                                     class GALGAS_constantDefinitionList & ioArgument8,
                                     class GALGAS_checkpicList & ioArgument9,
                                     class GALGAS_dataList & ioArgument10,
                                     class GALGAS_bool & ioArgument11,
                                     class GALGAS_bool & ioArgument12,
                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_body_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_body_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                         GALGAS_string & outArgument1,
                                                                                                         GALGAS_uint & outArgument2,
                                                                                                         GALGAS_ramBankTable & outArgument3,
                                                                                                         GALGAS_registerTable & outArgument4,
                                                                                                         GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                         GALGAS_routineDeclarationList & outArgument6,
                                                                                                         GALGAS_routineDeclarationList & outArgument7,
                                                                                                         GALGAS_luint & outArgument8,
                                                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @ramBankTable map                                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ramBankTable ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ramBankTable_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ramBankTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_ramBankTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_ramBankTable (const GALGAS_ramBankTable & inSource) ;
  public : GALGAS_ramBankTable & operator = (const GALGAS_ramBankTable & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ramBankTable extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ramBankTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_ramBankTable constructor_mapWithMapToOverride (const class GALGAS_ramBankTable & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_uintlist & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   class GALGAS_uint constinArgument3,
                                                   class GALGAS_uintlist constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFirstAddressForKey (class GALGAS_uint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFirstFreeAddressForKey (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLastAddressPlusOneForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMirrorOffsetListForKey (class GALGAS_uintlist constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_uintlist & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstAddressForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstFreeAddressForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLastAddressPlusOneForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mMirrorOffsetListForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramBankTable getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_ramBankTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_ramBankTable ;
 
} ; // End of GALGAS_ramBankTable class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ramBankTable : public cGenericAbstractEnumerator {
  public : cEnumerator_ramBankTable (const GALGAS_ramBankTable & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ramBankTable_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Class for element of '@ramBankTable' map                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ramBankTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mFirstAddress ;
  public : GALGAS_uint mAttribute_mFirstFreeAddress ;
  public : GALGAS_uint mAttribute_mLastAddressPlusOne ;
  public : GALGAS_uintlist mAttribute_mMirrorOffsetList ;

//--- Constructor
  public : cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                     const GALGAS_uint & in_mFirstAddress,
                                     const GALGAS_uint & in_mFirstFreeAddress,
                                     const GALGAS_uint & in_mLastAddressPlusOne,
                                     const GALGAS_uintlist & in_mMirrorOffsetList
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @registerTable map                                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_registerTable ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_registerTable_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_registerTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_registerTable (const GALGAS_registerTable & inSource) ;
  public : GALGAS_registerTable & operator = (const GALGAS_registerTable & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerTable extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_registerTable constructor_mapWithMapToOverride (const class GALGAS_registerTable & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uintlist & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_bitSliceTable & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   class GALGAS_bitSliceTable constinArgument3,
                                                   class GALGAS_string constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitDefinitionStringForKey (class GALGAS_string constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitSliceTableForKey (class GALGAS_bitSliceTable constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterAddressListForKey (class GALGAS_uintlist constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSizeForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_bitSliceTable & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionStringForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTableForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mRegisterAddressListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSizeForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerTable getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_registerTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_registerTable ;
 
} ; // End of GALGAS_registerTable class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_registerTable : public cGenericAbstractEnumerator {
  public : cEnumerator_registerTable (const GALGAS_registerTable & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mRegisterAddressList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mSize (LOCATION_ARGS) const ;
  public : class GALGAS_bitSliceTable current_mBitSliceTable (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBitDefinitionString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_registerTable_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Class for element of '@registerTable' map                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_registerTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uintlist mAttribute_mRegisterAddressList ;
  public : GALGAS_uint mAttribute_mSize ;
  public : GALGAS_bitSliceTable mAttribute_mBitSliceTable ;
  public : GALGAS_string mAttribute_mBitDefinitionString ;

//--- Constructor
  public : cMapElement_registerTable (const GALGAS_lstring & inKey,
                                      const GALGAS_uintlist & in_mRegisterAddressList,
                                      const GALGAS_uint & in_mSize,
                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                      const GALGAS_string & in_mBitDefinitionString
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               Routine 'pic18_analyze'                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze (const class GALGAS_pic_31__38_AST constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @pic_31__38_AST struct                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_programKind mAttribute_mProgramKind ;
  public : GALGAS_lstring mAttribute_mDeviceNameOrBootLoaderReference ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_checkpicList mAttribute_mCheckpicList ;
  public : GALGAS_dataList mAttribute_mDataList ;
  public : GALGAS_pic_31__38_InterruptDefinitionList mAttribute_mInterruptDefinitionList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_pic_31__38_RoutineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_pic_31__38_MacroDefinitionList mAttribute_mMacroDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_lstringlist mAttribute_mInlinedRoutineList ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_32_ ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_34_ ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_AST (const GALGAS_lstring & in_mProgramName,
                                  const GALGAS_programKind & in_mProgramKind,
                                  const GALGAS_lstring & in_mDeviceNameOrBootLoaderReference,
                                  const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                  const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                  const GALGAS_lstringlist & in_mUnusedRegisterList,
                                  const GALGAS_checkpicList & in_mCheckpicList,
                                  const GALGAS_dataList & in_mDataList,
                                  const GALGAS_pic_31__38_InterruptDefinitionList & in_mInterruptDefinitionList,
                                  const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                  const GALGAS_pic_31__38_RoutineDefinitionList & in_mRoutineDefinitionList,
                                  const GALGAS_pic_31__38_MacroDefinitionList & in_mMacroDefinitionList,
                                  const GALGAS_lstringlist & in_mUnusedRoutineList,
                                  const GALGAS_lstringlist & in_mInlinedRoutineList,
                                  const GALGAS_bool & in_mNeedsComputedGoto_32_,
                                  const GALGAS_bool & in_mNeedsComputedGoto_34_,
                                  const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_AST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_AST constructor_new (const class GALGAS_lstring & inOperand0,
                                                         const class GALGAS_programKind & inOperand1,
                                                         const class GALGAS_lstring & inOperand2,
                                                         const class GALGAS_configDefinitionList & inOperand3,
                                                         const class GALGAS_ramDefinitionList & inOperand4,
                                                         const class GALGAS_lstringlist & inOperand5,
                                                         const class GALGAS_checkpicList & inOperand6,
                                                         const class GALGAS_dataList & inOperand7,
                                                         const class GALGAS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                         const class GALGAS_constantDefinitionList & inOperand9,
                                                         const class GALGAS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                         const class GALGAS_pic_31__38_MacroDefinitionList & inOperand11,
                                                         const class GALGAS_lstringlist & inOperand12,
                                                         const class GALGAS_lstringlist & inOperand13,
                                                         const class GALGAS_bool & inOperand14,
                                                         const class GALGAS_bool & inOperand15,
                                                         const class GALGAS_location & inOperand16
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_mCheckpicList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataList getter_mDataList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDeviceNameOrBootLoaderReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mInlinedRoutineList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_mInterruptDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_mMacroDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsComputedGoto_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsComputedGoto_34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programKind getter_mProgramKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @processorType enum                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_processorType (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_pic_31__38__5F__36__30_,
    kEnum_pic_31__38__5F__38__30_,
    kEnum_midrange,
    kEnum_baseline
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
  public : static GALGAS_processorType extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_processorType constructor_baseline (LOCATION_ARGS) ;

  public : static GALGAS_processorType constructor_midrange (LOCATION_ARGS) ;

  public : static GALGAS_processorType constructor_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public : static GALGAS_processorType constructor_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_processorType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseline (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMidrange (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_processorType class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_processorType ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @configRegisterMap map                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configRegisterMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_configRegisterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_configRegisterMap (const GALGAS_configRegisterMap & inSource) ;
  public : GALGAS_configRegisterMap & operator = (const GALGAS_configRegisterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_configRegisterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_configRegisterMap constructor_mapWithMapToOverride (const class GALGAS_configRegisterMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_configRegisterMaskMap & inOperand3,
                                                      const class GALGAS_illegalMaskList & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint constinArgument1,
                                                   class GALGAS_luint constinArgument2,
                                                   class GALGAS_configRegisterMaskMap constinArgument3,
                                                   class GALGAS_illegalMaskList constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConfigRegisterMaskMapForKey (class GALGAS_configRegisterMaskMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIllegalMaskListForKey (class GALGAS_illegalMaskList constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GALGAS_luint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterWidthForKey (class GALGAS_luint constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   class GALGAS_configRegisterMaskMap & outArgument3,
                                                   class GALGAS_illegalMaskList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_mConfigRegisterMaskMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_mIllegalMaskListForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterAddressForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterWidthForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_configRegisterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMap ;
 
} ; // End of GALGAS_configRegisterMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_configRegisterMap (const GALGAS_configRegisterMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public : class GALGAS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public : class GALGAS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_configRegisterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @piccoloDeviceModel struct                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_piccoloDeviceModel : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mDeviceName ;
  public : GALGAS_processorType mAttribute_mProcessorType ;
  public : GALGAS_luint mAttribute_mRomSize ;
  public : GALGAS_luint mAttribute_mBankCount ;
  public : GALGAS_registerTable mAttribute_mRegisterTable ;
  public : GALGAS_ramBankTable mAttribute_mRamBankTable ;
  public : GALGAS_uint mAttribute_mEepromSize ;
  public : GALGAS_uint mAttribute_mEepromAddress ;
  public : GALGAS_configRegisterMap mAttribute_mConfigRegisterMap ;
  public : GALGAS_string mAttribute_mSharedBankName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Native constructor
  public : GALGAS_piccoloDeviceModel (const GALGAS_lstring & in_mDeviceName,
                                      const GALGAS_processorType & in_mProcessorType,
                                      const GALGAS_luint & in_mRomSize,
                                      const GALGAS_luint & in_mBankCount,
                                      const GALGAS_registerTable & in_mRegisterTable,
                                      const GALGAS_ramBankTable & in_mRamBankTable,
                                      const GALGAS_uint & in_mEepromSize,
                                      const GALGAS_uint & in_mEepromAddress,
                                      const GALGAS_configRegisterMap & in_mConfigRegisterMap,
                                      const GALGAS_string & in_mSharedBankName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_piccoloDeviceModel extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_piccoloDeviceModel constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_processorType & inOperand1,
                                                             const class GALGAS_luint & inOperand2,
                                                             const class GALGAS_luint & inOperand3,
                                                             const class GALGAS_registerTable & inOperand4,
                                                             const class GALGAS_ramBankTable & inOperand5,
                                                             const class GALGAS_uint & inOperand6,
                                                             const class GALGAS_uint & inOperand7,
                                                             const class GALGAS_configRegisterMap & inOperand8,
                                                             const class GALGAS_string & inOperand9
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBankCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMap getter_mConfigRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mEepromAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mEepromSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_processorType getter_mProcessorType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramBankTable getter_mRamBankTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerTable getter_mRegisterTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRomSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSharedBankName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_piccoloDeviceModel class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Parser class 'midrange_syntax' declaration                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cParser_midrange_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_midrange_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                         class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_in_5F_ram_ (class GALGAS_declarationInRam & outArgument0,
                                                         class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_in_5F_ram_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_in_5F_ram_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_expression_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_factor_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_term_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                              class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_instruction_5F_list_ (class GALGAS_midrange_5F_instructionList & outArgument0,
                                                                class GALGAS_bool & ioArgument1,
                                                                class GALGAS_bool & ioArgument2,
                                                                class GALGAS_labelMap & ioArgument3,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_interrupt_5F_definition_ (class GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                    class GALGAS_bool & ioArgument1,
                                                                    class GALGAS_bool & ioArgument2,
                                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_interrupt_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_routine_5F_definition_ (class GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                  class GALGAS_bool & ioArgument1,
                                                                  class GALGAS_bool & ioArgument2,
                                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_simple_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                            class GALGAS_midrange_5F_instruction & outArgument1,
                                                                            class GALGAS_bool & ioArgument2,
                                                                            class GALGAS_bool & ioArgument3,
                                                                            class GALGAS_labelMap & ioArgument4,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                      class GALGAS_bool & ioArgument1,
                                                                      class GALGAS_bool & ioArgument2,
                                                                      class GALGAS_labelMap & ioArgument3,
                                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                             GALGAS_string & outArgument1,
                                                                                             GALGAS_uint & outArgument2,
                                                                                             GALGAS_ramBankTable & outArgument3,
                                                                                             GALGAS_registerTable & outArgument4,
                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                             GALGAS_routineDeclarationList & outArgument7,
                                                                                             GALGAS_luint & outArgument8,
                                                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                                                GALGAS_bool & ioArgument1,
                                                                                GALGAS_bool & ioArgument2,
                                                                                GALGAS_labelMap & ioArgument3,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                    GALGAS_bool & ioArgument1,
                                                                                    GALGAS_bool & ioArgument2,
                                                                                    C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                  GALGAS_bool & ioArgument1,
                                                                                  GALGAS_bool & ioArgument2,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                      GALGAS_bool & ioArgument1,
                                                                                      GALGAS_bool & ioArgument2,
                                                                                      GALGAS_labelMap & ioArgument3,
                                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GALGAS_lstring constinArgument0,
                                                                                            GALGAS_midrange_5F_instruction & outArgument1,
                                                                                            GALGAS_bool & ioArgument2,
                                                                                            GALGAS_bool & ioArgument3,
                                                                                            GALGAS_labelMap & ioArgument4,
                                                                                            C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_midrange_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrangeInstruction_5F_checkbank class                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrangeInstruction_5F_checkbank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrangeInstruction_5F_checkbank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrangeInstruction_5F_checkbank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrangeInstruction_5F_checkbank * ptr (void) const { return (const cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrangeInstruction_5F_checkbank (const cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrangeInstruction_5F_checkbank extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrangeInstruction_5F_checkbank constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrangeInstruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBankIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrangeInstruction_5F_checkbank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Pointer class for @midrangeInstruction_checkbank class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrangeInstruction_5F_checkbank : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_uint mAttribute_mBankIndex ;

//--- Constructor
  public : cPtr_midrangeInstruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_uint & in_mBankIndex
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBankIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @midrangeInstruction_5F_checknobank class                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrangeInstruction_5F_checknobank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrangeInstruction_5F_checknobank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrangeInstruction_5F_checknobank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrangeInstruction_5F_checknobank * ptr (void) const { return (const cPtr_midrangeInstruction_5F_checknobank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrangeInstruction_5F_checknobank (const cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrangeInstruction_5F_checknobank extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrangeInstruction_5F_checknobank constructor_new (const class GALGAS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrangeInstruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrangeInstruction_5F_checknobank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Pointer class for @midrangeInstruction_checknobank class                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrangeInstruction_5F_checknobank : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrangeInstruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @midrange_5F_andCondition class                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_andCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_andCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_andCondition * ptr (void) const { return (const cPtr_midrange_5F_andCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_andCondition extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_andCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                   const class GALGAS_midrange_5F_conditionExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_andCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Pointer class for @midrange_andCondition class                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_andCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mLeftExpression ;
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_midrange_5F_andCondition (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                          const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//---
  public : inline const class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * ptr (void) const { return (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                                     const class GALGAS_bitNumberExpression & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Pointer class for @midrange_bitTest_in_structured_if_condition class                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    @midrange_5F_incDecRegisterInCondition class                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_incDecRegisterInCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_incDecRegisterInCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_incDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_incDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Pointer class for @midrange_incDecRegisterInCondition class                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_incDecRegisterInCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_bool & in_mIncrement,
                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                       const GALGAS_bool & in_mBranchIfZero
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_CALL class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_CALL : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_CALL * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_CALL class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CALL : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_CLRW class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_CLRW : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_CLRW constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_CLRW * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_CLRW *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_CLRW (const cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_CLRW extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_CLRW constructor_new (const class GALGAS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CLRW class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_CLRW class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CLRW : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @midrange_5F_instruction_5F_CLRWDT class                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_CLRWDT : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_CLRWDT constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_CLRWDT * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_CLRWDT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_CLRWDT extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_CLRWDT constructor_new (const class GALGAS_location & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CLRWDT class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Pointer class for @midrange_instruction_CLRWDT class                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @midrange_5F_instruction_5F_F class                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_F : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_F * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                       const class GALGAS_registerExpression & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_F class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Pointer class for @midrange_instruction_F class                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_F : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code mAttribute_mFAinstruction ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                              const GALGAS_registerExpression & in_mRegisterExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_FB class                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FB : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                        const class GALGAS_registerExpression & inOperand2,
                                                                        const class GALGAS_bitNumberExpression & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FB class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_FB class                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FB : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_bit_5F_oriented_5F_op mAttribute_mBitOrientedOp ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bitNumberExpression & in_mBitNumber
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_FD class                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FD : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                        const class GALGAS_registerExpression & inOperand2,
                                                                        const class GALGAS_bool & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FD class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_FD class                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FD : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @midrange_5F_instruction_5F_FOREVER class                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FOREVER : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FOREVER * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                             const class GALGAS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FOREVER class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Pointer class for @midrange_instruction_FOREVER class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FOREVER : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_GOTO class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_GOTO : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_GOTO * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_GOTO class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_GOTO : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Pointer class for @midrange_instruction_IF_SEMI_COLON class                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction mAttribute_mInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   @midrange_5F_instruction_5F_IF_5F_BitTest class                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_registerExpression & inOperand3,
                                                                                   const class GALGAS_bitNumberExpression & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Pointer class for @midrange_instruction_IF_BitTest class                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                          const GALGAS_bool & in_mSkipIfSet,
                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                          const GALGAS_bitNumberExpression & in_mBitNumber
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   @midrange_5F_instruction_5F_IF_5F_IncDec class                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_registerExpression & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_IF_IncDec class                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                         const GALGAS_bool & in_mIncrement,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_JSR class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_JSR : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_JSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_JSR * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_JSR class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JSR : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_JUMP class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_JUMP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_JUMP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_JUMP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_JUMP class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JUMP : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_MNOP class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_MNOP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_luint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_MNOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_MNOP class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_MNOP : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_NOP class                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_NOP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_NOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_NOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_NOP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_NOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_NOP (const cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_NOP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_NOP constructor_new (const class GALGAS_location & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_NOP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_NOP class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_NOP : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_SLEEP class                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_SLEEP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_SLEEP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_SLEEP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_SLEEP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_SLEEP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_SLEEP constructor_new (const class GALGAS_location & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_SLEEP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_SLEEP class                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_STATIC_5F_REPEAT class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_immediatExpression & inOperand2,
                                                                                      const class GALGAS_immediatExpression & inOperand3,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand4,
                                                                                      const class GALGAS_location & inOperand5
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mLowerBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mUpperBoundExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Pointer class for @midrange_instruction_STATIC_REPEAT class                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mConstantName ;
  public : GALGAS_immediatExpression mAttribute_mLowerBoundExpression ;
  public : GALGAS_immediatExpression mAttribute_mUpperBoundExpression ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_lstring & in_mConstantName,
                                                             const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                             const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                             const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstruction
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mLowerBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mUpperBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @midrange_5F_instruction_5F_banksel class                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_banksel : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_banksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_banksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_banksel * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_banksel (const cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_banksel extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_banksel constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_luint & inOperand1,
                                                                             const class GALGAS_bool & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_banksel class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Pointer class for @midrange_instruction_banksel class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mBankIndex ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_luint & in_mBankIndex,
                                                    const GALGAS_bool & in_mWarningOnUselessBanksel
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                @midrange_5F_instruction_5F_banksel_5F_register class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_banksel_5F_register : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_banksel_5F_register * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_banksel_5F_register extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_banksel_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_registerExpression & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_banksel_5F_register class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Pointer class for @midrange_instruction_banksel_register class                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel_5F_register : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_registerExpression & in_mRegister,
                                                                const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    @midrange_5F_instruction_5F_do_5F_while class                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_do_5F_while : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_do_5F_while (const cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                 const class GALGAS_location & inOperand2,
                                                                                 const class GALGAS_midrange_5F_partList & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_do_5F_while class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_do_while class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_do_5F_while : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instructionList mAttribute_mRepeatedInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRepeatedInstructionList ;
  public : GALGAS_midrange_5F_partList mAttribute_mWhilePartList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                        const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_literalOperation class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_literalOperation : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                      const class GALGAS_immediatExpression & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mImmediatExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_literalOperation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Pointer class for @midrange_instruction_literalOperation class                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                             const GALGAS_immediatExpression & in_mImmediatExpression
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     @midrange_5F_instruction_5F_nobanksel class                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_nobanksel : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_nobanksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_nobanksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_nobanksel * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_nobanksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_nobanksel (const cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_nobanksel extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_nobanksel constructor_new (const class GALGAS_location & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_nobanksel class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_nobanksel class                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_nobanksel : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     @midrange_5F_instruction_5F_savebank class                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_savebank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_savebank (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_savebank * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_registerExpression & inOperand1,
                                                                              const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                              const class GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_savebank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_savebank class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_savebank : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfSaveBankInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_registerExpression & in_mRegister,
                                                     const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                     const GALGAS_location & in_mEndOfSaveBankInstruction
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_structured_5F_if class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_structured_5F_if : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_structured_5F_if * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_midrange_5F_conditionExpression & inOperand1,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand3,
                                                                                      const class GALGAS_location & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_structured_5F_if class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Pointer class for @midrange_instruction_structured_if class                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_structured_5F_if : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mIfCondition ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mThenInstructionList ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                             const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                             const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                             const GALGAS_location & in_mEndOfElsePartLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @midrange_5F_negateCondition class                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_negateCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_negateCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_negateCondition * ptr (void) const { return (const cPtr_midrange_5F_negateCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_negateCondition extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_negateCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_negateCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Pointer class for @midrange_negateCondition class                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_negateCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mCondition ;

//--- Constructor
  public : cPtr_midrange_5F_negateCondition (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Routine 'midrange_analyze'                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze (const class GALGAS_midrange_5F_model constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @midrange_5F_model struct                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_model : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_lstring mAttribute_mDeviceName ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_midrange_5F_interruptDefinitionList mAttribute_mInterruptDefinitionList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_midrange_5F_routineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_32_ ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_34_ ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_model constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_model (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_model (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_model (const GALGAS_lstring & in_mProgramName,
                                     const GALGAS_lstring & in_mDeviceName,
                                     const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                     const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                     const GALGAS_lstringlist & in_mUnusedRegisterList,
                                     const GALGAS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                     const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                     const GALGAS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                     const GALGAS_lstringlist & in_mUnusedRoutineList,
                                     const GALGAS_bool & in_mNeedsComputedGoto_32_,
                                     const GALGAS_bool & in_mNeedsComputedGoto_34_,
                                     const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_model extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_configDefinitionList & inOperand2,
                                                            const class GALGAS_ramDefinitionList & inOperand3,
                                                            const class GALGAS_lstringlist & inOperand4,
                                                            const class GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                            const class GALGAS_constantDefinitionList & inOperand6,
                                                            const class GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                            const class GALGAS_lstringlist & inOperand8,
                                                            const class GALGAS_bool & inOperand9,
                                                            const class GALGAS_bool & inOperand10,
                                                            const class GALGAS_location & inOperand11
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList getter_mInterruptDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsComputedGoto_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsComputedGoto_34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList getter_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_model class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_model ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Parser class 'baseline_program' declaration                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cParser_baseline_5F_program {
//--- Virtual destructor
  public : virtual ~ cParser_baseline_5F_program (void) {}

//--- Non terminal declarations
  protected : virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                class GALGAS_lstringlist & ioArgument1,
                                                class GALGAS_ramDefinitionList & ioArgument2,
                                                class GALGAS_lstringlist & ioArgument3,
                                                class GALGAS_configDefinitionList & ioArgument4,
                                                class GALGAS_constantDefinitionList & ioArgument5,
                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_baseline_5F_program_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                              GALGAS_string & outArgument1,
                                                                                              GALGAS_uint & outArgument2,
                                                                                              GALGAS_ramBankTable & outArgument3,
                                                                                              GALGAS_registerTable & outArgument4,
                                                                                              GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                              GALGAS_routineDeclarationList & outArgument6,
                                                                                              GALGAS_routineDeclarationList & outArgument7,
                                                                                              GALGAS_luint & outArgument8,
                                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_program_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_program_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Routine 'baseline_analysis'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis (const class GALGAS_baseline_5F_model constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @baseline_5F_model struct                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_lstring mAttribute_mDeviceName ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_baseline_5F_routineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_model constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_model (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_model (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_model (const GALGAS_lstring & in_mProgramName,
                                     const GALGAS_lstring & in_mDeviceName,
                                     const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                     const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                     const GALGAS_lstringlist & in_mUnusedRegisterList,
                                     const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                     const GALGAS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                     const GALGAS_lstringlist & in_mUnusedRoutineList,
                                     const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_model extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_configDefinitionList & inOperand2,
                                                            const class GALGAS_ramDefinitionList & inOperand3,
                                                            const class GALGAS_lstringlist & inOperand4,
                                                            const class GALGAS_constantDefinitionList & inOperand5,
                                                            const class GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                            const class GALGAS_lstringlist & inOperand7,
                                                            const class GALGAS_location & inOperand8
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_model class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Parser class 'pic18_bootloader_syntax' declaration                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_bootloader_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_bootloader_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_parse_5F_bootloader_ (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_routineDeclarationList & outArgument2,
                                                    class GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                    class GALGAS_luint & outArgument4,
                                                    class GALGAS_routineDeclarationList & outArgument5,
                                                    class GALGAS_ramDefinitionList & outArgument6,
                                                    class GALGAS_string & outArgument7,
                                                    class GALGAS_piccoloDeviceModel & outArgument8,
                                                    class GALGAS_uint & outArgument9,
                                                    class GALGAS_ramBankTable & outArgument10,
                                                    class GALGAS_registerTable & outArgument11,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_parse_5F_bootloader_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_parse_5F_bootloader_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_ (class GALGAS_routineDeclarationList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GALGAS_lstring & outArgument0,
                                                                                     GALGAS_lstring & outArgument1,
                                                                                     GALGAS_routineDeclarationList & outArgument2,
                                                                                     GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                                                     GALGAS_luint & outArgument4,
                                                                                     GALGAS_routineDeclarationList & outArgument5,
                                                                                     GALGAS_ramDefinitionList & outArgument6,
                                                                                     GALGAS_string & outArgument7,
                                                                                     GALGAS_piccoloDeviceModel & outArgument8,
                                                                                     GALGAS_uint & outArgument9,
                                                                                     GALGAS_ramBankTable & outArgument10,
                                                                                     GALGAS_registerTable & outArgument11,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                              GALGAS_string & outArgument1,
                                                                                                              GALGAS_uint & outArgument2,
                                                                                                              GALGAS_ramBankTable & outArgument3,
                                                                                                              GALGAS_registerTable & outArgument4,
                                                                                                              GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                              GALGAS_routineDeclarationList & outArgument6,
                                                                                                              GALGAS_routineDeclarationList & outArgument7,
                                                                                                              GALGAS_luint & outArgument8,
                                                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GALGAS_routineDeclarationList & ioArgument0,
                                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Routine 'pic18BootloaderSpecificationAnalysis'                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis (const class GALGAS_string constinArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         const class GALGAS_lstring constinArgument2,
                                                         const class GALGAS_routineDeclarationList constinArgument3,
                                                         const class GALGAS_bootloaderReservedRAMmap constinArgument4,
                                                         const class GALGAS_luint constinArgument5,
                                                         const class GALGAS_routineDeclarationList constinArgument6,
                                                         const class GALGAS_ramDefinitionList constinArgument7,
                                                         class GALGAS_string & outArgument8,
                                                         class GALGAS_piccoloDeviceModel & outArgument9,
                                                         class GALGAS_uint & outArgument10,
                                                         class GALGAS_ramBankTable & outArgument11,
                                                         class GALGAS_registerTable & outArgument12,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

#endif
