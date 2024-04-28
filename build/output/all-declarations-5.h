#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_start_symbol' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_start_5F_symbol {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_start_5F_symbol (void) { }

//--- Non terminal declarations
  protected: virtual void nt_body_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GGS_lstringlist & ioArgument3,
                                    class GGS_lstringlist & ioArgument4,
                                    class GGS_ramDefinitionList & ioArgument5,
                                    class GGS_lstringlist & ioArgument6,
                                    class GGS_configDefinitionList & ioArgument7,
                                    class GGS_constantDefinitionList & ioArgument8,
                                    class GGS_checkpicList & ioArgument9,
                                    class GGS_dataList & ioArgument10,
                                    class GGS_bool & ioArgument11,
                                    class GGS_bool & ioArgument12,
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                                        GGS_string & outArgument1,
                                                                                                        GGS_uint & outArgument2,
                                                                                                        GGS_ramBankTable & outArgument3,
                                                                                                        GGS_registerTable & outArgument4,
                                                                                                        GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                                        GGS_routineDeclarationList & outArgument6,
                                                                                                        GGS_routineDeclarationList & outArgument7,
                                                                                                        GGS_luint & outArgument8,
                                                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ramBankTable map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_ramBankTable ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ramBankTable_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_ramBankTable (void) ;

//--------------------------------- Handle copy
  public: GGS_ramBankTable (const GGS_ramBankTable & inSource) ;
  public: GGS_ramBankTable & operator = (const GGS_ramBankTable & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramBankTable init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramBankTable extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramBankTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_ramBankTable class_func_mapWithMapToOverride (const class GGS_ramBankTable & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_uint & inOperand3,
                                                     const class GGS_uintlist & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ramBankTable add_operation (const GGS_ramBankTable & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_uint constinArgument3,
                                                  class GGS_uintlist constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstAddressForKey (class GGS_uint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstFreeAddressForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLastAddressPlusOneForKey (class GGS_uint constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMirrorOffsetListForKey (class GGS_uintlist constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  class GGS_uintlist & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mFirstAddressForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mFirstFreeAddressForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLastAddressPlusOneForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mMirrorOffsetListForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramBankTable getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_ramBankTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_ramBankTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GGS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_ramBankTable_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ramBankTable ;
 
} ; // End of GGS_ramBankTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ramBankTable : public cGenericAbstractEnumerator {
  public: cEnumerator_ramBankTable (const GGS_ramBankTable & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ramBankTable_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@ramBankTable' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_ramBankTable : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mFirstAddress ;
  public: GGS_uint mProperty_mFirstFreeAddress ;
  public: GGS_uint mProperty_mLastAddressPlusOne ;
  public: GGS_uintlist mProperty_mMirrorOffsetList ;

//--- Constructors
  public: cMapElement_ramBankTable (const GGS_ramBankTable_2E_element & inValue
                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_ramBankTable (const GGS_lstring & inKey,
                                    const GGS_uint & in_mFirstAddress,
                                    const GGS_uint & in_mFirstFreeAddress,
                                    const GGS_uint & in_mLastAddressPlusOne,
                                    const GGS_uintlist & in_mMirrorOffsetList
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
//Routine 'pic18_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_3F__3F_ (const class GGS_pic_31__38_AST constinArgument0,
                                             const class GGS_string constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AST struct
//
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProgramName ;
  public: inline GGS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GGS_programKind mProperty_mProgramKind ;
  public: inline GGS_programKind readProperty_mProgramKind (void) const {
    return mProperty_mProgramKind ;
  }

  public: GGS_lstring mProperty_mDeviceNameOrBootLoaderReference ;
  public: inline GGS_lstring readProperty_mDeviceNameOrBootLoaderReference (void) const {
    return mProperty_mDeviceNameOrBootLoaderReference ;
  }

  public: GGS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GGS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GGS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GGS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GGS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GGS_checkpicList mProperty_mCheckpicList ;
  public: inline GGS_checkpicList readProperty_mCheckpicList (void) const {
    return mProperty_mCheckpicList ;
  }

  public: GGS_dataList mProperty_mDataList ;
  public: inline GGS_dataList readProperty_mDataList (void) const {
    return mProperty_mDataList ;
  }

  public: GGS_pic_31__38_InterruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GGS_pic_31__38_InterruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GGS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GGS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GGS_pic_31__38_RoutineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GGS_pic_31__38_RoutineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GGS_pic_31__38_MacroDefinitionList mProperty_mMacroDefinitionList ;
  public: inline GGS_pic_31__38_MacroDefinitionList readProperty_mMacroDefinitionList (void) const {
    return mProperty_mMacroDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GGS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GGS_lstringlist mProperty_mInlinedRoutineList ;
  public: inline GGS_lstringlist readProperty_mInlinedRoutineList (void) const {
    return mProperty_mInlinedRoutineList ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GGS_location mProperty_mEndOfProgram ;
  public: inline GGS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_AST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMProgramKind (const GGS_programKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramKind = inValue ;
  }

  public: inline void setter_setMDeviceNameOrBootLoaderReference (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceNameOrBootLoaderReference = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GGS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GGS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMCheckpicList (const GGS_checkpicList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCheckpicList = inValue ;
  }

  public: inline void setter_setMDataList (const GGS_dataList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GGS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMMacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMInlinedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInlinedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_pic_31__38_AST (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_AST (const GGS_lstring & in_mProgramName,
                              const GGS_programKind & in_mProgramKind,
                              const GGS_lstring & in_mDeviceNameOrBootLoaderReference,
                              const GGS_configDefinitionList & in_mConfigDefinitionList,
                              const GGS_ramDefinitionList & in_mRamDefinitionList,
                              const GGS_lstringlist & in_mUnusedRegisterList,
                              const GGS_checkpicList & in_mCheckpicList,
                              const GGS_dataList & in_mDataList,
                              const GGS_pic_31__38_InterruptDefinitionList & in_mInterruptDefinitionList,
                              const GGS_constantDefinitionList & in_mConstantDefinitionList,
                              const GGS_pic_31__38_RoutineDefinitionList & in_mRoutineDefinitionList,
                              const GGS_pic_31__38_MacroDefinitionList & in_mMacroDefinitionList,
                              const GGS_lstringlist & in_mUnusedRoutineList,
                              const GGS_lstringlist & in_mInlinedRoutineList,
                              const GGS_bool & in_mNeedsComputedGoto_32_,
                              const GGS_bool & in_mNeedsComputedGoto_34_,
                              const GGS_location & in_mEndOfProgram) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AST init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                              const class GGS_programKind & inOperand1,
                                                                                                              const class GGS_lstring & inOperand2,
                                                                                                              const class GGS_configDefinitionList & inOperand3,
                                                                                                              const class GGS_ramDefinitionList & inOperand4,
                                                                                                              const class GGS_lstringlist & inOperand5,
                                                                                                              const class GGS_checkpicList & inOperand6,
                                                                                                              const class GGS_dataList & inOperand7,
                                                                                                              const class GGS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                                                                              const class GGS_constantDefinitionList & inOperand9,
                                                                                                              const class GGS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                                                                              const class GGS_pic_31__38_MacroDefinitionList & inOperand11,
                                                                                                              const class GGS_lstringlist & inOperand12,
                                                                                                              const class GGS_lstringlist & inOperand13,
                                                                                                              const class GGS_bool & inOperand14,
                                                                                                              const class GGS_bool & inOperand15,
                                                                                                              const class GGS_location & inOperand16,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AST extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AST class_func_new (const class GGS_lstring & inOperand0,
                                                          const class GGS_programKind & inOperand1,
                                                          const class GGS_lstring & inOperand2,
                                                          const class GGS_configDefinitionList & inOperand3,
                                                          const class GGS_ramDefinitionList & inOperand4,
                                                          const class GGS_lstringlist & inOperand5,
                                                          const class GGS_checkpicList & inOperand6,
                                                          const class GGS_dataList & inOperand7,
                                                          const class GGS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                          const class GGS_constantDefinitionList & inOperand9,
                                                          const class GGS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                          const class GGS_pic_31__38_MacroDefinitionList & inOperand11,
                                                          const class GGS_lstringlist & inOperand12,
                                                          const class GGS_lstringlist & inOperand13,
                                                          const class GGS_bool & inOperand14,
                                                          const class GGS_bool & inOperand15,
                                                          const class GGS_location & inOperand16,
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
 
} ; // End of GGS_pic_31__38_AST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

//--------------------------------------------------------------------------------------------------
//   enum processorType
//--------------------------------------------------------------------------------------------------

class GGS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_processorType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_pic_31__38__5F__36__30_,
    enum_pic_31__38__5F__38__30_,
    enum_midrange,
    enum_baseline
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
  public: static GGS_processorType extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_processorType class_func_baseline (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_midrange (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBaseline (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMidrange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_processorType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_processorType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configRegisterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configRegisterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_configRegisterMap (void) ;

//--------------------------------- Handle copy
  public: GGS_configRegisterMap (const GGS_configRegisterMap & inSource) ;
  public: GGS_configRegisterMap & operator = (const GGS_configRegisterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_configRegisterMap class_func_mapWithMapToOverride (const class GGS_configRegisterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_luint & inOperand1,
                                                     const class GGS_luint & inOperand2,
                                                     const class GGS_configRegisterMaskMap & inOperand3,
                                                     const class GGS_illegalMaskList & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_configRegisterMap add_operation (const GGS_configRegisterMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint constinArgument1,
                                                  class GGS_luint constinArgument2,
                                                  class GGS_configRegisterMaskMap constinArgument3,
                                                  class GGS_illegalMaskList constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfigRegisterMaskMapForKey (class GGS_configRegisterMaskMap constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalMaskListForKey (class GGS_illegalMaskList constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GGS_luint constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterWidthForKey (class GGS_luint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint & outArgument1,
                                                  class GGS_luint & outArgument2,
                                                  class GGS_configRegisterMaskMap & outArgument3,
                                                  class GGS_illegalMaskList & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMaskMap getter_mConfigRegisterMaskMapForKey (const class GGS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_illegalMaskList getter_mIllegalMaskListForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRegisterAddressForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRegisterWidthForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_configRegisterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_configRegisterMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_configRegisterMap ;
 
} ; // End of GGS_configRegisterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_configRegisterMap (const GGS_configRegisterMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public: class GGS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configRegisterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @piccoloDeviceModel struct
//
//--------------------------------------------------------------------------------------------------

class GGS_piccoloDeviceModel : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDeviceName ;
  public: inline GGS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GGS_processorType mProperty_mProcessorType ;
  public: inline GGS_processorType readProperty_mProcessorType (void) const {
    return mProperty_mProcessorType ;
  }

  public: GGS_luint mProperty_mRomSize ;
  public: inline GGS_luint readProperty_mRomSize (void) const {
    return mProperty_mRomSize ;
  }

  public: GGS_luint mProperty_mBankCount ;
  public: inline GGS_luint readProperty_mBankCount (void) const {
    return mProperty_mBankCount ;
  }

  public: GGS_registerTable mProperty_mRegisterTable ;
  public: inline GGS_registerTable readProperty_mRegisterTable (void) const {
    return mProperty_mRegisterTable ;
  }

  public: GGS_ramBankTable mProperty_mRamBankTable ;
  public: inline GGS_ramBankTable readProperty_mRamBankTable (void) const {
    return mProperty_mRamBankTable ;
  }

  public: GGS_uint mProperty_mEepromSize ;
  public: inline GGS_uint readProperty_mEepromSize (void) const {
    return mProperty_mEepromSize ;
  }

  public: GGS_uint mProperty_mEepromAddress ;
  public: inline GGS_uint readProperty_mEepromAddress (void) const {
    return mProperty_mEepromAddress ;
  }

  public: GGS_configRegisterMap mProperty_mConfigRegisterMap ;
  public: inline GGS_configRegisterMap readProperty_mConfigRegisterMap (void) const {
    return mProperty_mConfigRegisterMap ;
  }

  public: GGS_string mProperty_mSharedBankName ;
  public: inline GGS_string readProperty_mSharedBankName (void) const {
    return mProperty_mSharedBankName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_piccoloDeviceModel (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeviceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMProcessorType (const GGS_processorType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcessorType = inValue ;
  }

  public: inline void setter_setMRomSize (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRomSize = inValue ;
  }

  public: inline void setter_setMBankCount (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankCount = inValue ;
  }

  public: inline void setter_setMRegisterTable (const GGS_registerTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterTable = inValue ;
  }

  public: inline void setter_setMRamBankTable (const GGS_ramBankTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamBankTable = inValue ;
  }

  public: inline void setter_setMEepromSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromSize = inValue ;
  }

  public: inline void setter_setMEepromAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromAddress = inValue ;
  }

  public: inline void setter_setMConfigRegisterMap (const GGS_configRegisterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMap = inValue ;
  }

  public: inline void setter_setMSharedBankName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSharedBankName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_piccoloDeviceModel (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_piccoloDeviceModel (const GGS_lstring & in_mDeviceName,
                                  const GGS_processorType & in_mProcessorType,
                                  const GGS_luint & in_mRomSize,
                                  const GGS_luint & in_mBankCount,
                                  const GGS_registerTable & in_mRegisterTable,
                                  const GGS_ramBankTable & in_mRamBankTable,
                                  const GGS_uint & in_mEepromSize,
                                  const GGS_uint & in_mEepromAddress,
                                  const GGS_configRegisterMap & in_mConfigRegisterMap,
                                  const GGS_string & in_mSharedBankName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_piccoloDeviceModel init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_processorType & inOperand1,
                                                                                      const class GGS_luint & inOperand2,
                                                                                      const class GGS_luint & inOperand3,
                                                                                      const class GGS_registerTable & inOperand4,
                                                                                      const class GGS_ramBankTable & inOperand5,
                                                                                      const class GGS_uint & inOperand6,
                                                                                      const class GGS_uint & inOperand7,
                                                                                      const class GGS_configRegisterMap & inOperand8,
                                                                                      const class GGS_string & inOperand9,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_piccoloDeviceModel extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_piccoloDeviceModel class_func_new (const class GGS_lstring & inOperand0,
                                                              const class GGS_processorType & inOperand1,
                                                              const class GGS_luint & inOperand2,
                                                              const class GGS_luint & inOperand3,
                                                              const class GGS_registerTable & inOperand4,
                                                              const class GGS_ramBankTable & inOperand5,
                                                              const class GGS_uint & inOperand6,
                                                              const class GGS_uint & inOperand7,
                                                              const class GGS_configRegisterMap & inOperand8,
                                                              const class GGS_string & inOperand9,
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
 
} ; // End of GGS_piccoloDeviceModel class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'midrange_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_midrange_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_midrange_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_ (class GGS_midrange_5F_instructionList & outArgument0,
                                                               class GGS_bool & ioArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_labelMap & ioArgument3,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_ (class GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                   class GGS_bool & ioArgument1,
                                                                   class GGS_bool & ioArgument2,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_ (class GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                 class GGS_bool & ioArgument1,
                                                                 class GGS_bool & ioArgument2,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_ (class GGS_midrange_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                                           class GGS_midrange_5F_instruction & outArgument1,
                                                                           class GGS_bool & ioArgument2,
                                                                           class GGS_bool & ioArgument3,
                                                                           class GGS_labelMap & ioArgument4,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_ (class GGS_midrange_5F_instruction & outArgument0,
                                                                     class GGS_bool & ioArgument1,
                                                                     class GGS_bool & ioArgument2,
                                                                     class GGS_labelMap & ioArgument3,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                            GGS_string & outArgument1,
                                                                                            GGS_uint & outArgument2,
                                                                                            GGS_ramBankTable & outArgument3,
                                                                                            GGS_registerTable & outArgument4,
                                                                                            GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                            GGS_routineDeclarationList & outArgument6,
                                                                                            GGS_routineDeclarationList & outArgument7,
                                                                                            GGS_luint & outArgument8,
                                                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GGS_midrange_5F_instructionList & outArgument0,
                                                                               GGS_bool & ioArgument1,
                                                                               GGS_bool & ioArgument2,
                                                                               GGS_labelMap & ioArgument3,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                   GGS_bool & ioArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                 GGS_bool & ioArgument1,
                                                                                 GGS_bool & ioArgument2,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GGS_midrange_5F_instruction & outArgument0,
                                                                                     GGS_bool & ioArgument1,
                                                                                     GGS_bool & ioArgument2,
                                                                                     GGS_labelMap & ioArgument3,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GGS_lstring constinArgument0,
                                                                                           GGS_midrange_5F_instruction & outArgument1,
                                                                                           GGS_bool & ioArgument2,
                                                                                           GGS_bool & ioArgument3,
                                                                                           GGS_labelMap & ioArgument4,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GGS_midrange_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_midrange_5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_33 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_34 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_35 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_36 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_37 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze_3F__3F_ (const class GGS_midrange_5F_model constinArgument0,
                                          const class GGS_string constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_model struct
//
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProgramName ;
  public: inline GGS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GGS_lstring mProperty_mDeviceName ;
  public: inline GGS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GGS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GGS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GGS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GGS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GGS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GGS_midrange_5F_interruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GGS_midrange_5F_interruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GGS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GGS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GGS_midrange_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GGS_midrange_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GGS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GGS_location mProperty_mEndOfProgram ;
  public: inline GGS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GGS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GGS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GGS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GGS_midrange_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_midrange_5F_model (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_model (const GGS_lstring & in_mProgramName,
                                 const GGS_lstring & in_mDeviceName,
                                 const GGS_configDefinitionList & in_mConfigDefinitionList,
                                 const GGS_ramDefinitionList & in_mRamDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRegisterList,
                                 const GGS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                 const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                 const GGS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRoutineList,
                                 const GGS_bool & in_mNeedsComputedGoto_32_,
                                 const GGS_bool & in_mNeedsComputedGoto_34_,
                                 const GGS_location & in_mEndOfProgram) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_model init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_configDefinitionList & inOperand2,
                                                                                             const class GGS_ramDefinitionList & inOperand3,
                                                                                             const class GGS_lstringlist & inOperand4,
                                                                                             const class GGS_midrange_5F_interruptDefinitionList & inOperand5,
                                                                                             const class GGS_constantDefinitionList & inOperand6,
                                                                                             const class GGS_midrange_5F_routineDefinitionList & inOperand7,
                                                                                             const class GGS_lstringlist & inOperand8,
                                                                                             const class GGS_bool & inOperand9,
                                                                                             const class GGS_bool & inOperand10,
                                                                                             const class GGS_location & inOperand11,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_model extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_model class_func_new (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_configDefinitionList & inOperand2,
                                                             const class GGS_ramDefinitionList & inOperand3,
                                                             const class GGS_lstringlist & inOperand4,
                                                             const class GGS_midrange_5F_interruptDefinitionList & inOperand5,
                                                             const class GGS_constantDefinitionList & inOperand6,
                                                             const class GGS_midrange_5F_routineDefinitionList & inOperand7,
                                                             const class GGS_lstringlist & inOperand8,
                                                             const class GGS_bool & inOperand9,
                                                             const class GGS_bool & inOperand10,
                                                             const class GGS_location & inOperand11,
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
 
} ; // End of GGS_midrange_5F_model class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_model ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_baseline_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_baseline_5F_condition_5F_expression_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_ (class GGS_baseline_5F_instructionList & outArgument0,
                                                               class GGS_labelMap & ioArgument1,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_ (class GGS_baseline_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                                           class GGS_baseline_5F_instruction & outArgument1,
                                                                           class GGS_labelMap & ioArgument2,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_ (class GGS_baseline_5F_instruction & outArgument0,
                                                                     class GGS_labelMap & ioArgument1,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class GGS_ramDefinitionList & ioArgument2,
                                               class GGS_lstringlist & ioArgument3,
                                               class GGS_configDefinitionList & ioArgument4,
                                               class GGS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_syntax_section_5F_list_i0_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               GGS_lstringlist & ioArgument1,
                                                               GGS_ramDefinitionList & ioArgument2,
                                                               GGS_lstringlist & ioArgument3,
                                                               GGS_configDefinitionList & ioArgument4,
                                                               GGS_constantDefinitionList & ioArgument5,
                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GGS_baseline_5F_instructionList & outArgument0,
                                                                               GGS_labelMap & ioArgument1,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GGS_baseline_5F_instruction & outArgument0,
                                                                                     GGS_labelMap & ioArgument1,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GGS_lstring constinArgument0,
                                                                                           GGS_baseline_5F_instruction & outArgument1,
                                                                                           GGS_labelMap & ioArgument2,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GGS_baseline_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_baseline_5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_program' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_baseline_5F_program {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_program (void) { }

//--- Non terminal declarations
  protected: virtual void nt_section_5F_list_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class GGS_ramDefinitionList & ioArgument2,
                                               class GGS_lstringlist & ioArgument3,
                                               class GGS_configDefinitionList & ioArgument4,
                                               class GGS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_program_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                             GGS_string & outArgument1,
                                                                                             GGS_uint & outArgument2,
                                                                                             GGS_ramBankTable & outArgument3,
                                                                                             GGS_registerTable & outArgument4,
                                                                                             GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                             GGS_routineDeclarationList & outArgument6,
                                                                                             GGS_routineDeclarationList & outArgument7,
                                                                                             GGS_luint & outArgument8,
                                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods

} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis??'
//
//--------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis_3F__3F_ (const class GGS_baseline_5F_model constinArgument0,
                                           const class GGS_string constinArgument1,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_model struct
//
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProgramName ;
  public: inline GGS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GGS_lstring mProperty_mDeviceName ;
  public: inline GGS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GGS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GGS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GGS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GGS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GGS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GGS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GGS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GGS_baseline_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GGS_baseline_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GGS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GGS_location mProperty_mEndOfProgram ;
  public: inline GGS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GGS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GGS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GGS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GGS_baseline_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_baseline_5F_model (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_model (const GGS_lstring & in_mProgramName,
                                 const GGS_lstring & in_mDeviceName,
                                 const GGS_configDefinitionList & in_mConfigDefinitionList,
                                 const GGS_ramDefinitionList & in_mRamDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRegisterList,
                                 const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                 const GGS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRoutineList,
                                 const GGS_location & in_mEndOfProgram) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_model init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_configDefinitionList & inOperand2,
                                                                                 const class GGS_ramDefinitionList & inOperand3,
                                                                                 const class GGS_lstringlist & inOperand4,
                                                                                 const class GGS_constantDefinitionList & inOperand5,
                                                                                 const class GGS_baseline_5F_routineDefinitionList & inOperand6,
                                                                                 const class GGS_lstringlist & inOperand7,
                                                                                 const class GGS_location & inOperand8,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_model extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_model class_func_new (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_configDefinitionList & inOperand2,
                                                             const class GGS_ramDefinitionList & inOperand3,
                                                             const class GGS_lstringlist & inOperand4,
                                                             const class GGS_constantDefinitionList & inOperand5,
                                                             const class GGS_baseline_5F_routineDefinitionList & inOperand6,
                                                             const class GGS_lstringlist & inOperand7,
                                                             const class GGS_location & inOperand8,
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
 
} ; // End of GGS_baseline_5F_model class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_bootloader_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_bootloader_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_bootloader_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_parse_5F_bootloader_ (class GGS_lstring & outArgument0,
                                                   class GGS_lstring & outArgument1,
                                                   class GGS_routineDeclarationList & outArgument2,
                                                   class GGS_bootloaderReservedRAMmap & outArgument3,
                                                   class GGS_luint & outArgument4,
                                                   class GGS_routineDeclarationList & outArgument5,
                                                   class GGS_ramDefinitionList & outArgument6,
                                                   class GGS_string & outArgument7,
                                                   class GGS_piccoloDeviceModel & outArgument8,
                                                   class GGS_uint & outArgument9,
                                                   class GGS_ramBankTable & outArgument10,
                                                   class GGS_registerTable & outArgument11,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_ (class GGS_routineDeclarationList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GGS_lstring & outArgument0,
                                                                                    GGS_lstring & outArgument1,
                                                                                    GGS_routineDeclarationList & outArgument2,
                                                                                    GGS_bootloaderReservedRAMmap & outArgument3,
                                                                                    GGS_luint & outArgument4,
                                                                                    GGS_routineDeclarationList & outArgument5,
                                                                                    GGS_ramDefinitionList & outArgument6,
                                                                                    GGS_string & outArgument7,
                                                                                    GGS_piccoloDeviceModel & outArgument8,
                                                                                    GGS_uint & outArgument9,
                                                                                    GGS_ramBankTable & outArgument10,
                                                                                    GGS_registerTable & outArgument11,
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                                             GGS_string & outArgument1,
                                                                                                             GGS_uint & outArgument2,
                                                                                                             GGS_ramBankTable & outArgument3,
                                                                                                             GGS_registerTable & outArgument4,
                                                                                                             GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                                             GGS_routineDeclarationList & outArgument6,
                                                                                                             GGS_routineDeclarationList & outArgument7,
                                                                                                             GGS_luint & outArgument8,
                                                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GGS_routineDeclarationList & ioArgument0,
                                                                                       Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ;

extern BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ;

extern BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ;

extern BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ;

extern BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ;

extern BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ;

extern BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const class GGS_string constinArgument0,
                                                                                                             const class GGS_lstring constinArgument1,
                                                                                                             const class GGS_lstring constinArgument2,
                                                                                                             const class GGS_routineDeclarationList constinArgument3,
                                                                                                             const class GGS_bootloaderReservedRAMmap constinArgument4,
                                                                                                             const class GGS_luint constinArgument5,
                                                                                                             const class GGS_routineDeclarationList constinArgument6,
                                                                                                             const class GGS_ramDefinitionList constinArgument7,
                                                                                                             class GGS_string & outArgument8,
                                                                                                             class GGS_piccoloDeviceModel & outArgument9,
                                                                                                             class GGS_uint & outArgument10,
                                                                                                             class GGS_ramBankTable & outArgument11,
                                                                                                             class GGS_registerTable & outArgument12,
                                                                                                             class Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

