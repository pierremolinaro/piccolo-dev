#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Parser class 'baseline_program' declaration                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'baseline_analysis'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_baseline_5F_analysis (const class GALGAS_baseline_5F_model constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @baseline_5F_model struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mProgramName ;

  public : GALGAS_lstring mProperty_mDeviceName ;

  public : GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;

  public : GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;

  public : GALGAS_lstringlist mProperty_mUnusedRegisterList ;

  public : GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;

  public : GALGAS_baseline_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;

  public : GALGAS_lstringlist mProperty_mUnusedRoutineList ;

  public : GALGAS_location mProperty_mEndOfProgram ;

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
  public : static class GALGAS_baseline_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
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


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Parser class 'pic18_bootloader_syntax' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'pic18BootloaderSpecificationAnalysis'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bitNumberLabelValue class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bitNumberLabelValue : public GALGAS_bitNumberExpression {
//--- Constructor
  public : GALGAS_bitNumberLabelValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bitNumberLabelValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_bitNumberLabelValue * ptr (void) const { return (const cPtr_bitNumberLabelValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bitNumberLabelValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bitNumberLabelValue constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_luint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bitNumberLabelValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBitNumberIndexValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBitNumberLabelValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitNumberLabelValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @bitNumberLabelValue class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_bitNumberLabelValue : public cPtr_bitNumberExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mBitNumberLabelValue ;
  public : GALGAS_luint mProperty_mBitNumberIndexValue ;

//--- Constructor
  public : cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                     const GALGAS_luint & in_mBitNumberIndexValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mBitNumberLabelValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mBitNumberIndexValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @byteDeclarationInRam class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_byteDeclarationInRam : public GALGAS_declarationInRam {
//--- Constructor
  public : GALGAS_byteDeclarationInRam (void) ;

//---
  public : inline const class cPtr_byteDeclarationInRam * ptr (void) const { return (const cPtr_byteDeclarationInRam *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_byteDeclarationInRam extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_byteDeclarationInRam constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_immediatExpression & inOperand1,
                                                                     const class GALGAS_bitSliceTable & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     const class GALGAS_registerProtection & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_byteDeclarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerProtection getter_mProtection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mSizeExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_byteDeclarationInRam class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @byteDeclarationInRam class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_byteDeclarationInRam : public cPtr_declarationInRam {
//--- Attributes
  public : GALGAS_lstring mProperty_mName ;
  public : GALGAS_immediatExpression mProperty_mSizeExpression ;
  public : GALGAS_bitSliceTable mProperty_mBitSliceTable ;
  public : GALGAS_string mProperty_mBitDefinitionString ;
  public : GALGAS_registerProtection mProperty_mProtection ;

//--- Constructor
  public : cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                      const GALGAS_immediatExpression & in_mSizeExpression,
                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                      const GALGAS_string & in_mBitDefinitionString,
                                      const GALGAS_registerProtection & in_mProtection
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitSliceTable getter_mBitSliceTable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mBitDefinitionString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerProtection getter_mProtection (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @immediatInteger class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatInteger : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatInteger (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_immediatInteger constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_immediatInteger * ptr (void) const { return (const cPtr_immediatInteger *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatInteger extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_immediatInteger constructor_new (const class GALGAS_luint & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatInteger & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatInteger class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @immediatInteger class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatInteger : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;

//--- Constructor
  public : cPtr_immediatInteger (const GALGAS_luint & in_mValue
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @immediatRegister class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatRegister : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatRegister (void) ;

//---
  public : inline const class cPtr_immediatRegister * ptr (void) const { return (const cPtr_immediatRegister *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatRegister extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_immediatRegister constructor_new (const class GALGAS_registerExpression & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatRegister & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatRegister class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @immediatRegister class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatRegister : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_registerExpression mProperty_mRegister ;

//--- Constructor
  public : cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @immediatSlice class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatSlice : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatSlice (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_immediatSlice constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_immediatSlice * ptr (void) const { return (const cPtr_immediatSlice *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatSlice extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_immediatSlice constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_immediatSliceExpressionList & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatSliceExpressionList getter_mSliceExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatSlice class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @immediatSlice class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatSlice : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mRegisterName ;
  public : GALGAS_immediatSliceExpressionList mProperty_mSliceExpressionList ;

//--- Constructor
  public : cPtr_immediatSlice (const GALGAS_lstring & in_mRegisterName,
                               const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatSliceExpressionList getter_mSliceExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

