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
  protected: virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
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
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                        GALGAS_string & outArgument1,
                                                                                                        GALGAS_uint & outArgument2,
                                                                                                        GALGAS_ramBankTable & outArgument3,
                                                                                                        GALGAS_registerTable & outArgument4,
                                                                                                        GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                        GALGAS_routineDeclarationList & outArgument6,
                                                                                                        GALGAS_routineDeclarationList & outArgument7,
                                                                                                        GALGAS_luint & outArgument8,
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

class GALGAS_ramBankTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_ramBankTable (void) ;

//--------------------------------- Handle copy
  public: GALGAS_ramBankTable (const GALGAS_ramBankTable & inSource) ;
  public: GALGAS_ramBankTable & operator = (const GALGAS_ramBankTable & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ramBankTable extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ramBankTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_ramBankTable class_func_mapWithMapToOverride (const class GALGAS_ramBankTable & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_uintlist & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ramBankTable add_operation (const GALGAS_ramBankTable & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_uintlist constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstAddressForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstFreeAddressForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLastAddressPlusOneForKey (class GALGAS_uint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMirrorOffsetListForKey (class GALGAS_uintlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_uintlist & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstAddressForKey (const class GALGAS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstFreeAddressForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLastAddressPlusOneForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mMirrorOffsetListForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ramBankTable getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_uintlist & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_ramBankTable * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_ramBankTable ;
 
} ; // End of GALGAS_ramBankTable class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ramBankTable : public cGenericAbstractEnumerator {
  public: cEnumerator_ramBankTable (const GALGAS_ramBankTable & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public: class GALGAS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ramBankTable_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mFirstAddress ;
  public: GALGAS_uint mProperty_mFirstFreeAddress ;
  public: GALGAS_uint mProperty_mLastAddressPlusOne ;
  public: GALGAS_uintlist mProperty_mMirrorOffsetList ;

//--- Constructor
  public: cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                    const GALGAS_uint & in_mFirstAddress,
                                    const GALGAS_uint & in_mFirstFreeAddress,
                                    const GALGAS_uint & in_mLastAddressPlusOne,
                                    const GALGAS_uintlist & in_mMirrorOffsetList
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

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

void routine_pic_31__38__5F_analyze_3F__3F_ (const class GALGAS_pic_31__38_AST constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AST struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mProgramName ;
  public: inline GALGAS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GALGAS_programKind mProperty_mProgramKind ;
  public: inline GALGAS_programKind readProperty_mProgramKind (void) const {
    return mProperty_mProgramKind ;
  }

  public: GALGAS_lstring mProperty_mDeviceNameOrBootLoaderReference ;
  public: inline GALGAS_lstring readProperty_mDeviceNameOrBootLoaderReference (void) const {
    return mProperty_mDeviceNameOrBootLoaderReference ;
  }

  public: GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GALGAS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GALGAS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GALGAS_checkpicList mProperty_mCheckpicList ;
  public: inline GALGAS_checkpicList readProperty_mCheckpicList (void) const {
    return mProperty_mCheckpicList ;
  }

  public: GALGAS_dataList mProperty_mDataList ;
  public: inline GALGAS_dataList readProperty_mDataList (void) const {
    return mProperty_mDataList ;
  }

  public: GALGAS_pic_31__38_InterruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GALGAS_pic_31__38_InterruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GALGAS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GALGAS_pic_31__38_RoutineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GALGAS_pic_31__38_RoutineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GALGAS_pic_31__38_MacroDefinitionList mProperty_mMacroDefinitionList ;
  public: inline GALGAS_pic_31__38_MacroDefinitionList readProperty_mMacroDefinitionList (void) const {
    return mProperty_mMacroDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GALGAS_lstringlist mProperty_mInlinedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mInlinedRoutineList (void) const {
    return mProperty_mInlinedRoutineList ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GALGAS_location mProperty_mEndOfProgram ;
  public: inline GALGAS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMProgramKind (const GALGAS_programKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramKind = inValue ;
  }

  public: inline void setter_setMDeviceNameOrBootLoaderReference (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceNameOrBootLoaderReference = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GALGAS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GALGAS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMCheckpicList (const GALGAS_checkpicList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCheckpicList = inValue ;
  }

  public: inline void setter_setMDataList (const GALGAS_dataList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GALGAS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMMacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMInlinedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInlinedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_AST (const GALGAS_lstring & in_mProgramName,
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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_AST init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
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
                                                                                                                 const class GALGAS_location & inOperand16,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AST extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_AST class_func_new (const class GALGAS_lstring & inOperand0,
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
                                                             const class GALGAS_location & inOperand16,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_AST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

//--------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @processorType enum                                            *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_processorType (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_pic_31__38__5F__36__30_,
    kEnum_pic_31__38__5F__38__30_,
    kEnum_midrange,
    kEnum_baseline
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_processorType extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_processorType class_func_baseline (LOCATION_ARGS) ;

  public: static class GALGAS_processorType class_func_midrange (LOCATION_ARGS) ;

  public: static class GALGAS_processorType class_func_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public: static class GALGAS_processorType class_func_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_processorType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseline (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMidrange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_baseline () const ;

  public: VIRTUAL_IN_DEBUG bool optional_midrange () const ;

  public: VIRTUAL_IN_DEBUG bool optional_pic_31__38__5F__36__30_ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_pic_31__38__5F__38__30_ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_processorType class


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

class GALGAS_configRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_configRegisterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_configRegisterMap (const GALGAS_configRegisterMap & inSource) ;
  public: GALGAS_configRegisterMap & operator = (const GALGAS_configRegisterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configRegisterMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_configRegisterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_configRegisterMap class_func_mapWithMapToOverride (const class GALGAS_configRegisterMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_configRegisterMaskMap & inOperand3,
                                                     const class GALGAS_illegalMaskList & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_configRegisterMap add_operation (const GALGAS_configRegisterMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint constinArgument1,
                                                  class GALGAS_luint constinArgument2,
                                                  class GALGAS_configRegisterMaskMap constinArgument3,
                                                  class GALGAS_illegalMaskList constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfigRegisterMaskMapForKey (class GALGAS_configRegisterMaskMap constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalMaskListForKey (class GALGAS_illegalMaskList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GALGAS_luint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterWidthForKey (class GALGAS_luint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  class GALGAS_configRegisterMaskMap & outArgument3,
                                                  class GALGAS_illegalMaskList & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_mConfigRegisterMaskMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_mIllegalMaskListForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterAddressForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterWidthForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_luint & outOperand1,
                                                    class GALGAS_luint & outOperand2,
                                                    class GALGAS_configRegisterMaskMap & outOperand3,
                                                    class GALGAS_illegalMaskList & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_configRegisterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMap ;
 
} ; // End of GALGAS_configRegisterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_configRegisterMap (const GALGAS_configRegisterMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public: class GALGAS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public: class GALGAS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_configRegisterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @piccoloDeviceModel struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_piccoloDeviceModel : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDeviceName ;
  public: inline GALGAS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GALGAS_processorType mProperty_mProcessorType ;
  public: inline GALGAS_processorType readProperty_mProcessorType (void) const {
    return mProperty_mProcessorType ;
  }

  public: GALGAS_luint mProperty_mRomSize ;
  public: inline GALGAS_luint readProperty_mRomSize (void) const {
    return mProperty_mRomSize ;
  }

  public: GALGAS_luint mProperty_mBankCount ;
  public: inline GALGAS_luint readProperty_mBankCount (void) const {
    return mProperty_mBankCount ;
  }

  public: GALGAS_registerTable mProperty_mRegisterTable ;
  public: inline GALGAS_registerTable readProperty_mRegisterTable (void) const {
    return mProperty_mRegisterTable ;
  }

  public: GALGAS_ramBankTable mProperty_mRamBankTable ;
  public: inline GALGAS_ramBankTable readProperty_mRamBankTable (void) const {
    return mProperty_mRamBankTable ;
  }

  public: GALGAS_uint mProperty_mEepromSize ;
  public: inline GALGAS_uint readProperty_mEepromSize (void) const {
    return mProperty_mEepromSize ;
  }

  public: GALGAS_uint mProperty_mEepromAddress ;
  public: inline GALGAS_uint readProperty_mEepromAddress (void) const {
    return mProperty_mEepromAddress ;
  }

  public: GALGAS_configRegisterMap mProperty_mConfigRegisterMap ;
  public: inline GALGAS_configRegisterMap readProperty_mConfigRegisterMap (void) const {
    return mProperty_mConfigRegisterMap ;
  }

  public: GALGAS_string mProperty_mSharedBankName ;
  public: inline GALGAS_string readProperty_mSharedBankName (void) const {
    return mProperty_mSharedBankName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeviceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMProcessorType (const GALGAS_processorType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcessorType = inValue ;
  }

  public: inline void setter_setMRomSize (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRomSize = inValue ;
  }

  public: inline void setter_setMBankCount (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankCount = inValue ;
  }

  public: inline void setter_setMRegisterTable (const GALGAS_registerTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterTable = inValue ;
  }

  public: inline void setter_setMRamBankTable (const GALGAS_ramBankTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamBankTable = inValue ;
  }

  public: inline void setter_setMEepromSize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromSize = inValue ;
  }

  public: inline void setter_setMEepromAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromAddress = inValue ;
  }

  public: inline void setter_setMConfigRegisterMap (const GALGAS_configRegisterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMap = inValue ;
  }

  public: inline void setter_setMSharedBankName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSharedBankName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_piccoloDeviceModel (const GALGAS_lstring & in_mDeviceName,
                                     const GALGAS_processorType & in_mProcessorType,
                                     const GALGAS_luint & in_mRomSize,
                                     const GALGAS_luint & in_mBankCount,
                                     const GALGAS_registerTable & in_mRegisterTable,
                                     const GALGAS_ramBankTable & in_mRamBankTable,
                                     const GALGAS_uint & in_mEepromSize,
                                     const GALGAS_uint & in_mEepromAddress,
                                     const GALGAS_configRegisterMap & in_mConfigRegisterMap,
                                     const GALGAS_string & in_mSharedBankName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_piccoloDeviceModel init_21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_processorType & inOperand1,
                                                                                         const class GALGAS_luint & inOperand2,
                                                                                         const class GALGAS_luint & inOperand3,
                                                                                         const class GALGAS_registerTable & inOperand4,
                                                                                         const class GALGAS_ramBankTable & inOperand5,
                                                                                         const class GALGAS_uint & inOperand6,
                                                                                         const class GALGAS_uint & inOperand7,
                                                                                         const class GALGAS_configRegisterMap & inOperand8,
                                                                                         const class GALGAS_string & inOperand9,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_piccoloDeviceModel extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_piccoloDeviceModel class_func_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_processorType & inOperand1,
                                                                 const class GALGAS_luint & inOperand2,
                                                                 const class GALGAS_luint & inOperand3,
                                                                 const class GALGAS_registerTable & inOperand4,
                                                                 const class GALGAS_ramBankTable & inOperand5,
                                                                 const class GALGAS_uint & inOperand6,
                                                                 const class GALGAS_uint & inOperand7,
                                                                 const class GALGAS_configRegisterMap & inOperand8,
                                                                 const class GALGAS_string & inOperand9,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_piccoloDeviceModel class


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
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GALGAS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_ (class GALGAS_midrange_5F_instructionList & outArgument0,
                                                               class GALGAS_bool & ioArgument1,
                                                               class GALGAS_bool & ioArgument2,
                                                               class GALGAS_labelMap & ioArgument3,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_ (class GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                   class GALGAS_bool & ioArgument1,
                                                                   class GALGAS_bool & ioArgument2,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_ (class GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                 class GALGAS_bool & ioArgument1,
                                                                 class GALGAS_bool & ioArgument2,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_midrange_5F_instruction & outArgument1,
                                                                           class GALGAS_bool & ioArgument2,
                                                                           class GALGAS_bool & ioArgument3,
                                                                           class GALGAS_labelMap & ioArgument4,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                     class GALGAS_bool & ioArgument1,
                                                                     class GALGAS_bool & ioArgument2,
                                                                     class GALGAS_labelMap & ioArgument3,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                            GALGAS_string & outArgument1,
                                                                                            GALGAS_uint & outArgument2,
                                                                                            GALGAS_ramBankTable & outArgument3,
                                                                                            GALGAS_registerTable & outArgument4,
                                                                                            GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                            GALGAS_routineDeclarationList & outArgument6,
                                                                                            GALGAS_routineDeclarationList & outArgument7,
                                                                                            GALGAS_luint & outArgument8,
                                                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                                               GALGAS_bool & ioArgument1,
                                                                               GALGAS_bool & ioArgument2,
                                                                               GALGAS_labelMap & ioArgument3,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                   GALGAS_bool & ioArgument1,
                                                                                   GALGAS_bool & ioArgument2,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                 GALGAS_bool & ioArgument1,
                                                                                 GALGAS_bool & ioArgument2,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                     GALGAS_bool & ioArgument1,
                                                                                     GALGAS_bool & ioArgument2,
                                                                                     GALGAS_labelMap & ioArgument3,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_midrange_5F_instruction & outArgument1,
                                                                                           GALGAS_bool & ioArgument2,
                                                                                           GALGAS_bool & ioArgument3,
                                                                                           GALGAS_labelMap & ioArgument4,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
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

void routine_midrange_5F_analyze_3F__3F_ (const class GALGAS_midrange_5F_model constinArgument0,
                                          const class GALGAS_string constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_model struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mProgramName ;
  public: inline GALGAS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GALGAS_lstring mProperty_mDeviceName ;
  public: inline GALGAS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GALGAS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GALGAS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GALGAS_midrange_5F_interruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GALGAS_midrange_5F_interruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GALGAS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GALGAS_midrange_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GALGAS_midrange_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GALGAS_location mProperty_mEndOfProgram ;
  public: inline GALGAS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GALGAS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GALGAS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GALGAS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_midrange_5F_model (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_midrange_5F_model (const GALGAS_lstring & in_mProgramName,
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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_midrange_5F_model init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
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
                                                                                                const class GALGAS_location & inOperand11,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_model extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_midrange_5F_model class_func_new (const class GALGAS_lstring & inOperand0,
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
                                                                const class GALGAS_location & inOperand11,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_midrange_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_midrange_5F_model class


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
  protected: virtual void nt_baseline_5F_condition_5F_expression_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_ (class GALGAS_baseline_5F_instructionList & outArgument0,
                                                               class GALGAS_labelMap & ioArgument1,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_baseline_5F_instruction & outArgument1,
                                                                           class GALGAS_labelMap & ioArgument2,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                     class GALGAS_labelMap & ioArgument1,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GALGAS_lstringlist & ioArgument1,
                                               class GALGAS_ramDefinitionList & ioArgument2,
                                               class GALGAS_lstringlist & ioArgument3,
                                               class GALGAS_configDefinitionList & ioArgument4,
                                               class GALGAS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_syntax_section_5F_list_i0_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               GALGAS_lstringlist & ioArgument1,
                                                               GALGAS_ramDefinitionList & ioArgument2,
                                                               GALGAS_lstringlist & ioArgument3,
                                                               GALGAS_configDefinitionList & ioArgument4,
                                                               GALGAS_constantDefinitionList & ioArgument5,
                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                                               GALGAS_labelMap & ioArgument1,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                     GALGAS_labelMap & ioArgument1,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_baseline_5F_instruction & outArgument1,
                                                                                           GALGAS_labelMap & ioArgument2,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
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
  protected: virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GALGAS_lstringlist & ioArgument1,
                                               class GALGAS_ramDefinitionList & ioArgument2,
                                               class GALGAS_lstringlist & ioArgument3,
                                               class GALGAS_configDefinitionList & ioArgument4,
                                               class GALGAS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_program_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                             GALGAS_string & outArgument1,
                                                                                             GALGAS_uint & outArgument2,
                                                                                             GALGAS_ramBankTable & outArgument3,
                                                                                             GALGAS_registerTable & outArgument4,
                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                             GALGAS_routineDeclarationList & outArgument7,
                                                                                             GALGAS_luint & outArgument8,
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

void routine_baseline_5F_analysis_3F__3F_ (const class GALGAS_baseline_5F_model constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_model struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mProgramName ;
  public: inline GALGAS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GALGAS_lstring mProperty_mDeviceName ;
  public: inline GALGAS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GALGAS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GALGAS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GALGAS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GALGAS_baseline_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GALGAS_baseline_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GALGAS_location mProperty_mEndOfProgram ;
  public: inline GALGAS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GALGAS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GALGAS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GALGAS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_baseline_5F_model (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_model (const GALGAS_lstring & in_mProgramName,
                                    const GALGAS_lstring & in_mDeviceName,
                                    const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                    const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                    const GALGAS_lstringlist & in_mUnusedRegisterList,
                                    const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                    const GALGAS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                    const GALGAS_lstringlist & in_mUnusedRoutineList,
                                    const GALGAS_location & in_mEndOfProgram) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_baseline_5F_model init_21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_configDefinitionList & inOperand2,
                                                                                    const class GALGAS_ramDefinitionList & inOperand3,
                                                                                    const class GALGAS_lstringlist & inOperand4,
                                                                                    const class GALGAS_constantDefinitionList & inOperand5,
                                                                                    const class GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                                                    const class GALGAS_lstringlist & inOperand7,
                                                                                    const class GALGAS_location & inOperand8,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_model extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_baseline_5F_model class_func_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_configDefinitionList & inOperand2,
                                                                const class GALGAS_ramDefinitionList & inOperand3,
                                                                const class GALGAS_lstringlist & inOperand4,
                                                                const class GALGAS_constantDefinitionList & inOperand5,
                                                                const class GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                                const class GALGAS_lstringlist & inOperand7,
                                                                const class GALGAS_location & inOperand8,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_baseline_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_baseline_5F_model class


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
  protected: virtual void nt_parse_5F_bootloader_ (class GALGAS_lstring & outArgument0,
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
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_ (class GALGAS_routineDeclarationList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GALGAS_lstring & outArgument0,
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
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                             GALGAS_string & outArgument1,
                                                                                                             GALGAS_uint & outArgument2,
                                                                                                             GALGAS_ramBankTable & outArgument3,
                                                                                                             GALGAS_registerTable & outArgument4,
                                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                                             GALGAS_routineDeclarationList & outArgument7,
                                                                                                             GALGAS_luint & outArgument8,
                                                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GALGAS_routineDeclarationList & ioArgument0,
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

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const class GALGAS_string constinArgument0,
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
                                                                                                             class Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

