#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

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

/*  protected: void rule_baseline_5F_program_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

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
// Phase 1: @baseline_5F_model struct
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

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_model (const GGS_baseline_5F_model & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_model & operator = (const GGS_baseline_5F_model & inSource) ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

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

  protected: virtual void nt_parse_5F_bootloader_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_ (class GGS_routineDeclarationList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

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

/*  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

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

/*  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GGS_routineDeclarationList & ioArgument0,
                                                                                       Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

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

extern BoolCommandLineOption gOption_piccoloOptions_doNotReorderCluster ;

extern BoolCommandLineOption gOption_piccoloOptions_doNotWarnRecursive ;

extern BoolCommandLineOption gOption_piccoloOptions_generateGraphvizFiles ;

extern BoolCommandLineOption gOption_piccoloOptions_generateAssembly ;

extern BoolCommandLineOption gOption_piccoloOptions_output_5F_C_5F_Array ;

extern BoolCommandLineOption gOption_piccoloOptions_ouputListingFile ;

extern BoolCommandLineOption gOption_piccoloOptions_performOptimizations ;

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

extern StringCommandLineOption gOption_piccoloOptions_optimizationFlags ;

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

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@branchOverflowMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_branchOverflowMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_string constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const class GGS_uint constin_inAddress,
                                                            const class GGS_string constin_inBlockLabel,
                                                            const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            class GGS_branchOverflowMap & io_ioOverflowMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const class GGS_uint constin_inAddress,
                                                           const class GGS_string constin_inBlockLabel,
                                                           const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const class GGS_string constin_inNextBlockLabel,
                                                           class GGS_branchOverflowMap & io_ioOverflowMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const class GGS_uint constin_inAddress,
                                                                    const class GGS_string constin_inBlockLabel,
                                                                    const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const class GGS_string constin_inNextBlockLabel,
                                                                    class GGS_uint & io_ioConversionCount,
                                                                    class GGS_string & io_ioListFileContents,
                                                                    class GGS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SequentialInstruction generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const class GGS_uint constin_inAddress,
                                       const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const class GGS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       class GGS_codeList & out_outCode,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateTerminatorCode (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const class GGS_uint constin_inAddress,
                                                 const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GGS_string constin_inNextBlockLabel,
                                                 class GGS_codeList & out_outCode,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isEqualToTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const class GGS_ipic_31__38_AbstractBlockTerminator constin_inTerminator,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionUsesGOTOorCALL (class cPtr_midrange_5F_instruction * inObject,
                                                    class GGS_bool & io_ioUsesGOTOorCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (class cPtr_midrange_5F_instruction * inObject,
                                                                       const class GGS_routineMap constin_inRoutineMap,
                                                                       const class GGS_registerTable constin_inRegisterTable,
                                                                       const class GGS_constantMap constin_inConstantMap,
                                                                       class GGS_uint & io_ioLocalLabelIndex,
                                                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                       class GGS_string & io_ioListFileContents,
                                                                       const class GGS_uint constin_inTotalBankCount,
                                                                       class GGS_uint & io_ioCurrentBank,
                                                                       const class GGS_bool constin_inShouldPreserveBank,
                                                                       class GGS_bool & io_ioContinuesInSequence,
                                                                       const class GGS_routineKind constin_inRoutineKind,
                                                                       class GGS_stringset & io_ioUsedRegisters,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildIPICinstructionForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                           const class GGS_uint constin_inTotalBankCount,
                                                           const class GGS_uint constin_inCurrentBank,
                                                           const class GGS_registerTable constin_inRegisterTable,
                                                           const class GGS_constantMap constin_inConstantMap,
                                                           class GGS_uint & io_ioLocalLabelIndex,
                                                           const class GGS_bool constin_inComplementaryBranch,
                                                           const class GGS_location constin_inInstructionLocation,
                                                           const class GGS_string constin_inTargetLabel,
                                                           class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                           class GGS_string & io_ioListFileContents,
                                                           class GGS_stringset & io_ioUsedRegisters,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const class GGS_lstring constin_inBlockLabel,
                                                          class GGS_string & io_ioGraphVizString,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const class GGS_lstring constin_inBlockLabel,
                                                         class GGS_string & io_ioGraphVizString,
                                                         const class GGS_bool constin_inDottedArrow,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_needToInsertJumpInstruction (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                const class GGS_string constin_inNextBlockLabel,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const class GGS_lstring constin_inBlockLabel,
                                                      class GGS_blockInvocationGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR baseline_include_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_baseline_5F_include_5F_grammar : public cParser_baseline_5F_syntax,
                                                public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_expression_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_factor_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_term_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                          Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_instruction_5F_list_ (GGS_baseline_5F_instructionList & outArgument0,
                                                            GGS_labelMap & ioArgument1,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_routine_5F_definition_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_ (GGS_baseline_5F_instruction & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                                        GGS_baseline_5F_instruction & outArgument1,
                                                                        GGS_labelMap & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_baseline_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_ (GGS_baseline_5F_instruction & outArgument0,
                                                                  GGS_labelMap & ioArgument1,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
 /*  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GGS_configDefinitionList & ioArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GGS_constantDefinitionList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
 /*  public: virtual void nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GGS_declarationInRam & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                           Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GGS_immediatExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
 /*  public: virtual void nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GGS_immediatExpression & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GGS_immediatExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
 /*  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GGS_bool & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GGS_ramDefinitionList & ioArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
 /*  public: virtual void nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GGS_registerExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_section_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_section_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_section_5F_list_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                            GGS_lstringlist & ioArgument1,
                                            GGS_ramDefinitionList & ioArgument2,
                                            GGS_lstringlist & ioArgument3,
                                            GGS_configDefinitionList & ioArgument4,
                                            GGS_constantDefinitionList & ioArgument5,
                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                  GGS_lstringlist & ioArgument1,
                                                  GGS_ramDefinitionList & ioArgument2,
                                                  GGS_lstringlist & ioArgument3,
                                                  GGS_configDefinitionList & ioArgument4,
                                                  GGS_constantDefinitionList & ioArgument5
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                    GGS_lstringlist & ioArgument1,
                                                    GGS_ramDefinitionList & ioArgument2,
                                                    GGS_lstringlist & ioArgument3,
                                                    GGS_configDefinitionList & ioArgument4,
                                                    GGS_constantDefinitionList & ioArgument5
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

  public: virtual int32_t select_baseline_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
