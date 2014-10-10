#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @branchOverflowMap list map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchOverflowMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_branchOverflowMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchOverflowMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchOverflowMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_listForKey (const class GALGAS_string & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_branchOverflowMap ;
 
} ; // End of GALGAS_branchOverflowMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_branchOverflowMap : public cGenericAbstractEnumerator {
  public : cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_branchOverflowMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @branchOverflowMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchOverflowMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_stringlist mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_branchOverflowMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_branchOverflowMap_2D_element (const GALGAS_string & in_key,
                                                const GALGAS_stringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchOverflowMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchOverflowMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_stringlist & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchOverflowMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_piccoloDevice_5F_grammar : public cParser_piccoloDevice_5F_syntax {
//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & outArgument0,
                                             C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_piccoloDeviceModel & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_piccoloDeviceModel & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ;

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

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'initCodeGenerator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initCodeGenerator (class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'setEmitAddress'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_setEmitAddress (const class GALGAS_uint constinArgument0,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'currentEmitAddress'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_currentEmitAddress (class GALGAS_uint & outArgument0,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Routine 'emitCode'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitCode (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Routine 'emitByte'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitByte (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'getGeneratedContents'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getGeneratedContents (class GALGAS_string & outArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'get_C_ArrayImplementation'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_get_5F_C_5F_ArrayImplementation (const class GALGAS_string constinArgument0,
                                              class GALGAS_string & outArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'get_C_ArrayHeader'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_get_5F_C_5F_ArrayHeader (const class GALGAS_string constinArgument0,
                                      class GALGAS_string & outArgument1,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkCurrentEmitAddress'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkCurrentEmitAddress (const class GALGAS_uint constinArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'print_constant_definition'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_print_5F_constant_5F_definition (const class GALGAS_constantMap constinArgument0,
                                              class GALGAS_string & ioArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'actualBuildConfig'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_actualBuildConfig (const class GALGAS_configRegisterMap constinArgument0,
                                const class GALGAS_configDefinitionList constinArgument1,
                                class GALGAS_string & ioArgument2,
                                class GALGAS_actualConfigurationMap & outArgument3,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildConfig'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildConfig (const class GALGAS_configRegisterMap constinArgument0,
                          const class GALGAS_configDefinitionList constinArgument1,
                          class GALGAS_string & ioArgument2,
                          class GALGAS_actualConfigurationMap & outArgument3,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'addBaselineUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addBaselineUsedRoutinesFromInstructionList (const class GALGAS_baseline_5F_instructionList constinArgument0,
                                                         class GALGAS_stringset & ioArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@baseline_instruction addUsedRoutines'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_addUsedRoutines) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                 class GALGAS_stringset & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_baseline_5F_instruction_addUsedRoutines inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const class cPtr_baseline_5F_instruction * inObject,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'baseline_computeUsedRoutines'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_baseline_5F_computeUsedRoutines (const class GALGAS_baseline_5F_routineDefinitionList & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_5F_intermediate_5F_pseudo class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @baseline_intermediate_pseudo class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo : public cPtr_baseline_5F_intermediate_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_bool & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsRegular (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_bool mAttribute_mIsRegular ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                        const GALGAS_bool & in_mIsRegular
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsRegular (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_uint mAttribute_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_uint & in_mPage
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mPage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @baseline_5F_intermediate_5F_pseudo_5F_LABEL class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @baseline_intermediate_pseudo_LABEL class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_intermediate_5F_pseudo_5F_PAGE class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE constructor_new (const class GALGAS_uint & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @baseline_intermediate_pseudo_PAGE class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_uint mAttribute_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GALGAS_uint & in_mPage
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mPage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@baseline_intermediate_instruction length'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_length (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_length (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@baseline_assembly_instruction print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_assembly_5F_instruction_print) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                   class GALGAS_string & ioArgument0,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_baseline_5F_assembly_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@baseline_instruction shouldNotContinueInSequence'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                             const class GALGAS_string constinArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_shouldNotContinueInSequence (const int32_t inClassIndex,
                                                      categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_shouldNotContinueInSequence (const class cPtr_baseline_5F_instruction * inObject,
                                                     const GALGAS_string constin_inErrorMessage,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@baseline_instruction shouldTerminateWithMOVLW'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_shouldTerminateWithMOVLW (const int32_t inClassIndex,
                                                   categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_shouldTerminateWithMOVLW (const class cPtr_baseline_5F_instruction * inObject,
                                                  const GALGAS_string constin_inErrorMessage,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@baseline_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_print) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                       class GALGAS_string & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_baseline_5F_intermediate_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@baseline_intermediate_instruction setCurrentAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                   class GALGAS_uint & ioArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_setCurrentAddress (const int32_t inClassIndex,
                                            categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_setCurrentAddress (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_uint & io_ioCurrentWordAdress,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract category method '@immediatExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_immediatExpression_eval) (const class cPtr_immediatExpression * inObject,
                                                                 const class GALGAS_registerTable constinArgument0,
                                                                 const class GALGAS_constantMap constinArgument1,
                                                                 class GALGAS_sint_36__34_ & outArgument2,
                                                                 class GALGAS_stringset & ioArgument3,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_eval (const int32_t inClassIndex,
                               categoryMethodSignature_immediatExpression_eval inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_eval (const class cPtr_immediatExpression * inObject,
                              const GALGAS_registerTable constin_inRegisterTable,
                              const GALGAS_constantMap constin_inConstantMap,
                              GALGAS_sint_36__34_ & out_outResult,
                              GALGAS_stringset & io_ioUsedRegisters,
                              C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@registerExpression resolveBaselineAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_registerExpression_resolveBaselineAccess) (const class cPtr_registerExpression * inObject,
                                                                                  const class GALGAS_registerTable constinArgument0,
                                                                                  class GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument1,
                                                                                  class GALGAS_bitSliceTable & outArgument2,
                                                                                  class GALGAS_stringset & ioArgument3,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_resolveBaselineAccess (const int32_t inClassIndex,
                                                categoryMethodSignature_registerExpression_resolveBaselineAccess inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_resolveBaselineAccess (const class cPtr_registerExpression * inObject,
                                               const GALGAS_registerTable constin_inRegisterTable,
                                               GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                               GALGAS_bitSliceTable & out_outBitSliceTable,
                                               GALGAS_stringset & io_ioUsedRegisters,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'analyze_ram_sections'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyze_5F_ram_5F_sections (const class GALGAS_string constinArgument0,
                                         const class GALGAS_ramDefinitionList constinArgument1,
                                         class GALGAS_ramBankTable & ioArgument2,
                                         const class GALGAS_registerTable constinArgument3,
                                         class GALGAS_string & ioArgument4,
                                         class GALGAS_registerTable & ioArgument5,
                                         class GALGAS_declaredByteMap & outArgument6,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'build_baseline_assembly_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_baseline_5F_assembly_5F_code (const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument0,
                                                    const class GALGAS_actualConfigurationMap constinArgument1,
                                                    const class GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument2,
                                                    const class GALGAS_bitSliceTable constinArgument3,
                                                    class GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument4,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'build_baseline_binary_code'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_baseline_5F_binary_5F_code (const class GALGAS_baseline_5F_assembly_5F_instructionList constinArgument0,
                                                  const class GALGAS_uint constinArgument1,
                                                  class GALGAS_string & ioArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleBaselineInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleBaselineInstructionList (const class GALGAS_uint constinArgument0,
                                            const class GALGAS_baseline_5F_instructionList constinArgument1,
                                            const class GALGAS_baselineRoutineMap constinArgument2,
                                            const class GALGAS_registerTable constinArgument3,
                                            const class GALGAS_constantMap constinArgument4,
                                            class GALGAS_uint & ioArgument5,
                                            class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument6,
                                            class GALGAS_string & ioArgument7,
                                            class GALGAS_bool & outArgument8,
                                            const class GALGAS_routineKind constinArgument9,
                                            const class GALGAS_bool constinArgument10,
                                            class GALGAS_stringset & ioArgument11,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseDeviceDefinition'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseDeviceDefinition (const class GALGAS_lstring constinArgument0,
                                    class GALGAS_piccoloDeviceModel & outArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'perform_baseline_optimizations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_baseline_5F_optimizations (class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                   class GALGAS_string & ioArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @baseline_5F_intermediate_5F_registerExpression struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mAssemblyString ;
  public : GALGAS_uint mAttribute_mRegisterAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                  const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_registerExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract category method '@baseline_instruction build_baseline_intermediate_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                                                      const class GALGAS_uint constinArgument0,
                                                                                                                      const class GALGAS_baselineRoutineMap constinArgument1,
                                                                                                                      const class GALGAS_registerTable constinArgument2,
                                                                                                                      const class GALGAS_constantMap constinArgument3,
                                                                                                                      class GALGAS_uint & ioArgument4,
                                                                                                                      class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument5,
                                                                                                                      class GALGAS_string & ioArgument6,
                                                                                                                      class GALGAS_bool & ioArgument7,
                                                                                                                      const class GALGAS_routineKind constinArgument8,
                                                                                                                      const class GALGAS_bool constinArgument9,
                                                                                                                      class GALGAS_stringset & ioArgument10,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const int32_t inClassIndex,
                                                                               categoryMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const class cPtr_baseline_5F_instruction * inObject,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'acceptableTRISoperand'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findBaselineFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionFromAddress (const class GALGAS_uint constinArgument0,
                                                      const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                      class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_NULL class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_NULL : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_NULL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_NULL * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_NULL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_NULL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_NULL constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_NULL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_NULL class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_NULL : public cPtr_baseline_5F_intermediate_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_5F_intermediate_5F_actualInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_actualInstruction : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_actualInstruction (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_actualInstruction * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_actualInstruction extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_actualInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @baseline_intermediate_actualInstruction class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_actualInstruction : public cPtr_baseline_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Routine 'findBaselineFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionOrLabelFromAddress (const class GALGAS_uint constinArgument0,
                                                             const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                             class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                             class GALGAS_stringset & outArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_CALL class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_CALL : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_CALL * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_CALL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_CALL class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_CALL : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_GOTO class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_GOTO : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_GOTO * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_GOTO class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_GOTO class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_GOTO : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_JSR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_JSR : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_JSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_JSR * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_uint & inOperand2,
                                                                          const class GALGAS_uint & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mCurrentPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mTargetPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_JSR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_uint mAttribute_mCurrentPage ;
  public : GALGAS_uint mAttribute_mTargetPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_uint & in_mCurrentPage,
                                                 const GALGAS_uint & in_mTargetPage
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mCurrentPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mTargetPage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_JUMP class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_JUMP : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_JUMP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_JUMP * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_uint & inOperand2,
                                                                           const class GALGAS_uint & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mCurrentPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mTargetPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_JUMP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_JUMP class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_JUMP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_uint mAttribute_mCurrentPage ;
  public : GALGAS_uint mAttribute_mTargetPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel,
                                                  const GALGAS_uint & in_mCurrentPage,
                                                  const GALGAS_uint & in_mTargetPage
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mCurrentPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mTargetPage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @baseline_5F_intermediate_5F_incDecRegisterInCondition class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
                                                                                                const class GALGAS_bool & inOperand3,
                                                                                                const class GALGAS_bool & inOperand4,
                                                                                                const class GALGAS_bool & inOperand5
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @baseline_intermediate_incDecRegisterInCondition class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_string mAttribute_mTargetLabel ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_string & in_mTargetLabel,
                                                                       const GALGAS_bool & in_mIncrement,
                                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                       const GALGAS_bool & in_mBranchIfZero
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category reader '@baseline_intermediate_instruction isLABEL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isLABEL (const int32_t inClassIndex,
                                  categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category reader '@baseline_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isNULL (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category reader '@baseline_intermediate_instruction isSkippingInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isSkippingInstruction (const int32_t inClassIndex,
                                                categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category reader '@baseline_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_nextInstructionIsReachable (const int32_t inClassIndex,
                                                     categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_CALL optimizeCALL'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL) (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                                       const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       class GALGAS_bool & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeCALL (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeCALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_GOTO optimizeGOTO'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) (const class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                                                                       const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       class GALGAS_bool & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeGOTO (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeGOTO (const class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@baseline_intermediate_JSR optimizeJSR'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR) (const class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                                                                     const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                     const class GALGAS_uint constinArgument1,
                                                                                     class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                     class GALGAS_string & ioArgument3,
                                                                                     class GALGAS_bool & ioArgument4,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeJSR (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeJSR (const class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                     const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                     GALGAS_string & io_ioListFileContents,
                                     GALGAS_bool & io_ioOptimizationsDone,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_JUMP optimizeJUMP'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) (const class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                                                                       const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       class GALGAS_bool & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeJUMP (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeJUMP (const class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                                  const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                                                  const class GALGAS_uint constinArgument1,
                                                                                                                  class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                                                  class GALGAS_string & ioArgument3,
                                                                                                                  class GALGAS_bool & ioArgument4,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                             categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeTestDecInc (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                            const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                            const GALGAS_uint constin_inLineIndex,
                                            GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_bool & io_ioOptimizationsDone,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@baseline_intermediate_instruction defineLabel'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                             class GALGAS_baselineSymbolTableForOptimizations & ioArgument0,
                                                                                             const class GALGAS_uint constinArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabel (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabel (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@baseline_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                      class GALGAS_stringset & ioArgument0,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterReferencedLabel (const int32_t inClassIndex,
                                               categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterReferencedLabel (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_stringset & io_ioReferencedLabelSet,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                                                                                         const class GALGAS_uint constinArgument0,
                                                                                                                         class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                         class GALGAS_string & ioArgument2,
                                                                                                                         class GALGAS_bool & ioArgument3,
                                                                                                                         class C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeBEGIN_5F_ROUTINE (const int32_t inClassIndex,
                                                   categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeBEGIN_5F_ROUTINE (const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                  const GALGAS_uint constin_inLineIndex,
                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_bool & io_ioOptimizationsDone,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@baseline_intermediate_instruction generateAssemblyCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                      const class GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument0,
                                                                                                      const class GALGAS_bitSliceTable constinArgument1,
                                                                                                      class GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument2,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateAssemblyCode (const int32_t inClassIndex,
                                               categoryMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateAssemblyCode (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                              const GALGAS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                              GALGAS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitBaselineCodeAtWordAddress'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitBaselineCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                            class GALGAS_uint & ioArgument1,
                                            const class GALGAS_baseline_5F_assembly_5F_instruction constinArgument2,
                                            class GALGAS_string & ioArgument3,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Reader '@uint x4String'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_x_34_String (const class GALGAS_uint & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'emitNoBaselineCodeAtWordAddress'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitNoBaselineCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                              const class GALGAS_baseline_5F_assembly_5F_instruction constinArgument1,
                                              class GALGAS_string & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@baseline_assembly_instruction enterLabelAtAddress'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                 class GALGAS_baseline_5F_symbolTable & ioArgument0,
                                                                                                 class GALGAS_uint & ioArgument1,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                              categoryMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterLabelAtAddress (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                             GALGAS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                             GALGAS_uint & io_ioWordAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@baseline_assembly_instruction generateBinaryCodeAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                         const class GALGAS_baseline_5F_symbolTable constinArgument0,
                                                                                                         class GALGAS_string & ioArgument1,
                                                                                                         class GALGAS_uint & ioArgument2,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                      categoryMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateBinaryCodeAtAddress (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                     const GALGAS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                     GALGAS_string & io_ioListFileContents,
                                                     GALGAS_uint & io_ioWordAddress,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'addMidRangeUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addMidRangeUsedRoutinesFromInstructionList (const class GALGAS_midrange_5F_instructionList constinArgument0,
                                                         class GALGAS_stringset & ioArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@midrange_instruction addUsedRoutines'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_instruction_addUsedRoutines) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                 class GALGAS_stringset & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_midrange_5F_instruction_addUsedRoutines inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const class cPtr_midrange_5F_instruction * inObject,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'midrange_computeUsedRoutines'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_midrange_5F_computeUsedRoutines (const class GALGAS_midrange_5F_interruptDefinitionList & constinArgument0,
                                                                 const class GALGAS_midrange_5F_routineDefinitionList & constinArgument1,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleMidrangeInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleMidrangeInstructionList (const class GALGAS_midrange_5F_instructionList constinArgument0,
                                            const class GALGAS_routineMap constinArgument1,
                                            const class GALGAS_registerTable constinArgument2,
                                            const class GALGAS_constantMap constinArgument3,
                                            class GALGAS_uint & ioArgument4,
                                            class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument5,
                                            class GALGAS_string & ioArgument6,
                                            const class GALGAS_uint constinArgument7,
                                            class GALGAS_uint & ioArgument8,
                                            const class GALGAS_bool constinArgument9,
                                            class GALGAS_bool & outArgument10,
                                            const class GALGAS_routineKind constinArgument11,
                                            class GALGAS_stringset & ioArgument12,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@midrange_instruction build_midrange_ipic_instructionList'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                                              const class GALGAS_routineMap constinArgument0,
                                                                                                              const class GALGAS_registerTable constinArgument1,
                                                                                                              const class GALGAS_constantMap constinArgument2,
                                                                                                              class GALGAS_uint & ioArgument3,
                                                                                                              class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument4,
                                                                                                              class GALGAS_string & ioArgument5,
                                                                                                              const class GALGAS_uint constinArgument6,
                                                                                                              class GALGAS_uint & ioArgument7,
                                                                                                              const class GALGAS_bool constinArgument8,
                                                                                                              class GALGAS_bool & ioArgument9,
                                                                                                              const class GALGAS_routineKind constinArgument10,
                                                                                                              class GALGAS_stringset & ioArgument11,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (const int32_t inClassIndex,
                                                                       categoryMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (const class cPtr_midrange_5F_instruction * inObject,
                                                                      const GALGAS_routineMap constin_inRoutineMap,
                                                                      const GALGAS_registerTable constin_inRegisterTable,
                                                                      const GALGAS_constantMap constin_inConstantMap,
                                                                      GALGAS_uint & io_ioLocalLabelIndex,
                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                      GALGAS_string & io_ioListFileContents,
                                                                      const GALGAS_uint constin_inTotalBankCount,
                                                                      GALGAS_uint & io_ioCurrentBank,
                                                                      const GALGAS_bool constin_inShouldPreserveBank,
                                                                      GALGAS_bool & io_ioContinuesInSequence,
                                                                      const GALGAS_routineKind constin_inRoutineKind,
                                                                      GALGAS_stringset & io_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'build_midrange_assembly_instruction_list'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (const class GALGAS_uint constinArgument0,
                                                                   const class GALGAS_uint constinArgument1,
                                                                   const class GALGAS_sint constinArgument2,
                                                                   const class GALGAS_string constinArgument3,
                                                                   const class GALGAS_registerTable constinArgument4,
                                                                   const class GALGAS_midrange_5F_model constinArgument5,
                                                                   const class GALGAS_bool constinArgument6,
                                                                   class GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument7,
                                                                   class GALGAS_string & ioArgument8,
                                                                   class GALGAS_stringset & ioArgument9,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @midrange_5F_intermediate_5F_actualInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_actualInstruction : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_actualInstruction (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_actualInstruction * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_actualInstruction (const cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_actualInstruction extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_actualInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @midrange_intermediate_actualInstruction class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_actualInstruction : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @midrange_5F_intermediate_5F_instruction_5F_RETURN class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN constructor_new (const class GALGAS_location & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @midrange_intermediate_instruction_RETURN class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GALGAS_location & in_mInstructionLocation
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_intermediate_5F_pseudo_5F_LABEL class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_bool & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsDeletable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_intermediate_pseudo_LABEL class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_bool mAttribute_mIsDeletable ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                             const GALGAS_bool & in_mIsDeletable
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsDeletable (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @midrange_5F_intermediate_5F_pseudo_5F_ORG class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG constructor_new (const class GALGAS_uint & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mOrigin (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @midrange_intermediate_pseudo_ORG class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_uint mAttribute_mOrigin ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mOrigin (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@midrange_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                       class GALGAS_string & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@midrange_intermediate_instruction setCurrentAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                   class GALGAS_uint & ioArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_setCurrentAddress (const int32_t inClassIndex,
                                            categoryMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_setCurrentAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_uint & io_ioCurrentAddress,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'handleInterruptRoutine'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleInterruptRoutine (const class GALGAS_midrange_5F_model constinArgument0,
                                     const class GALGAS_bool constinArgument1,
                                     const class GALGAS_registerTable constinArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_routineMap constinArgument4,
                                     const class GALGAS_uint constinArgument5,
                                     const class GALGAS_constantMap constinArgument6,
                                     const class GALGAS_uint constinArgument7,
                                     class GALGAS_string & ioArgument8,
                                     class GALGAS_uint & ioArgument9,
                                     class GALGAS_string & ioArgument10,
                                     class GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument11,
                                     class GALGAS_stringset & ioArgument12,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'interruptRoutineShouldSavePCLATH'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_interruptRoutineShouldSavePCLATH (const class GALGAS_midrange_5F_model constinArgument0,
                                               const class GALGAS_uint constinArgument1,
                                               class GALGAS_string & ioArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@midrange_instruction instructionUsesGOTOorCALL'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                           class GALGAS_bool & ioArgument0,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_instructionUsesGOTOorCALL (const int32_t inClassIndex,
                                                    categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_instructionUsesGOTOorCALL (const class cPtr_midrange_5F_instruction * inObject,
                                                   GALGAS_bool & io_ioUsesGOTOorCALL,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_JUMP class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_JUMP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_JUMP (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_JUMP * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__31_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JUMP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_intermediate_JUMP class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_JUMP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mAttribute_mBit_31__31_ ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mAttribute_mBit_31__32_ ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel,
                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__31_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__32_ (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Routine 'generateInterruptRoutineForControllerWithSharedRAM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInterruptRoutineForControllerWithSharedRAM (const class GALGAS_uint constinArgument0,
                                                                 const class GALGAS_registerTable constinArgument1,
                                                                 const class GALGAS_lstring constinArgument2,
                                                                 const class GALGAS_lstring constinArgument3,
                                                                 const class GALGAS_bool constinArgument4,
                                                                 const class GALGAS_midrange_5F_instructionList constinArgument5,
                                                                 const class GALGAS_routineMap constinArgument6,
                                                                 const class GALGAS_constantMap constinArgument7,
                                                                 const class GALGAS_location constinArgument8,
                                                                 class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument9,
                                                                 class GALGAS_uint & ioArgument10,
                                                                 class GALGAS_string & ioArgument11,
                                                                 class GALGAS_stringset & ioArgument12,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'generateInterruptRoutineForControllerWithoutSharedRAM'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInterruptRoutineForControllerWithoutSharedRAM (const class GALGAS_uint constinArgument0,
                                                                    const class GALGAS_registerTable constinArgument1,
                                                                    const class GALGAS_lstring constinArgument2,
                                                                    const class GALGAS_lstring constinArgument3,
                                                                    const class GALGAS_bool constinArgument4,
                                                                    const class GALGAS_midrange_5F_instructionList constinArgument5,
                                                                    const class GALGAS_routineMap constinArgument6,
                                                                    const class GALGAS_constantMap constinArgument7,
                                                                    const class GALGAS_location constinArgument8,
                                                                    class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument9,
                                                                    class GALGAS_uint & ioArgument10,
                                                                    class GALGAS_string & ioArgument11,
                                                                    class GALGAS_stringset & ioArgument12,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_intermediate_5F_instruction_5F_F class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_F : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_F * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                       const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code reader_mFinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_F class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @midrange_5F_intermediate_5F_registerExpression struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mAssemblyString ;
  public : GALGAS_uint mAttribute_mRegisterAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                  const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_registerExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @midrange_intermediate_instruction_F class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_F : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code mAttribute_mFinstruction ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                              const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code reader_mFinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @midrange_5F_intermediate_5F_instruction_5F_FD class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                        const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GALGAS_bool & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code reader_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @midrange_intermediate_instruction_FD class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                               const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code reader_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @midrange_5F_intermediate_5F_instruction_5F_RETFIE class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE constructor_new (const class GALGAS_location & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @midrange_intermediate_instruction_RETFIE class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GALGAS_location & in_mInstructionLocation
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@registerExpression resolveMidrangeAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_registerExpression_resolveMidrangeAccess) (const class cPtr_registerExpression * inObject,
                                                                                  const class GALGAS_uint constinArgument0,
                                                                                  const class GALGAS_uint constinArgument1,
                                                                                  const class GALGAS_registerTable constinArgument2,
                                                                                  class GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument3,
                                                                                  class GALGAS_bitSliceTable & outArgument4,
                                                                                  class GALGAS_stringset & ioArgument5,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                categoryMethodSignature_registerExpression_resolveMidrangeAccess inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_resolveMidrangeAccess (const class cPtr_registerExpression * inObject,
                                               const GALGAS_uint constin_inTotalBankCount,
                                               const GALGAS_uint constin_inCurrentBank,
                                               const GALGAS_registerTable constin_inRegisterTable,
                                               GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                               GALGAS_bitSliceTable & out_outBitSliceTable,
                                               GALGAS_stringset & io_ioUsedRegisters,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findMidRangeFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findMidRangeFirstInstructionFromAddress (const class GALGAS_uint constinArgument0,
                                                      const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                      class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_NULL class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_NULL : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_NULL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_NULL * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_NULL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_NULL (const cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_NULL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_NULL constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_NULL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_intermediate_NULL class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_NULL : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_NULL (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Routine 'findMidRangeFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findMidRangeFirstInstructionOrLabelFromAddress (const class GALGAS_uint constinArgument0,
                                                             const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                             class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                             class GALGAS_stringset & outArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'perform_midrange_optimizations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_midrange_5F_optimizations (class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                   class GALGAS_string & ioArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_GOTO class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_GOTO : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_GOTO * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_GOTO class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_intermediate_GOTO class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_GOTO : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @midrange_5F_intermediate_5F_incDecRegisterInCondition class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
                                                                                                const class GALGAS_bool & inOperand3,
                                                                                                const class GALGAS_bool & inOperand4,
                                                                                                const class GALGAS_bool & inOperand5
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @midrange_intermediate_incDecRegisterInCondition class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_string mAttribute_mTargetLabel ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_string & in_mTargetLabel,
                                                                       const GALGAS_bool & in_mIncrement,
                                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                       const GALGAS_bool & in_mBranchIfZero
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_bool & inOperand1,
                                                                                                 const class GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                 const class GALGAS_uint & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @midrange_intermediate_instruction_BitTestSkip class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bool & in_mSkipIfSet,
                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GALGAS_uint & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         @midrange_5F_intermediate_5F_instruction_5F_literalOperation class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                      const class GALGAS_uint & inOperand2
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @midrange_intermediate_instruction_literalOperation class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_uint mAttribute_mLiteralValue ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                             const GALGAS_uint & in_mLiteralValue
                                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category reader '@midrange_intermediate_instruction isLABELorORG'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isLABELorORG (const int32_t inClassIndex,
                                       categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category reader '@midrange_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isNULL) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isNULL (const int32_t inClassIndex,
                                 categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isNULL inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category reader '@midrange_intermediate_instruction isSkippingInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isSkippingInstruction (const int32_t inClassIndex,
                                                categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category reader '@midrange_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_nextInstructionIsReachable (const int32_t inClassIndex,
                                                     categoryReaderSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@midrange_intermediate_GOTO optimizeGOTO'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) (const class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                                                                       const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       class GALGAS_bool & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeGOTO (const int32_t inClassIndex,
                                       categoryMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeGOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                      const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@midrange_intermediate_JUMP optimizeJUMP'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) (const class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                                                                       const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       class GALGAS_bool & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeJUMP (const int32_t inClassIndex,
                                       categoryMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeJUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                      const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                                  const class GALGAS_symbolTableForOptimizations constinArgument0,
                                                                                                                  const class GALGAS_uint constinArgument1,
                                                                                                                  class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                                                  class GALGAS_string & ioArgument3,
                                                                                                                  class GALGAS_bool & ioArgument4,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                             categoryMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeTestDecInc (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                            const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                            const GALGAS_uint constin_inLineIndex,
                                            GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_bool & io_ioOptimizationsDone,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@midrange_intermediate_instruction defineLabel'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             class GALGAS_symbolTableForOptimizations & ioArgument0,
                                                                                             const class GALGAS_uint constinArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabel (const int32_t inClassIndex,
                                      categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabel (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                     GALGAS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      class GALGAS_stringset & ioArgument0,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterReferencedLabel (const int32_t inClassIndex,
                                               categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterReferencedLabel (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_stringset & io_ioReferencedLabelSet,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip) (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                                                                                                    const class GALGAS_uint constinArgument0,
                                                                                                                    class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                    class GALGAS_string & ioArgument2,
                                                                                                                    class GALGAS_bool & ioArgument3,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeBitTestSkip (const int32_t inClassIndex,
                                              categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeBitTestSkip (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW) (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                                                                                                   const class GALGAS_uint constinArgument0,
                                                                                                                   class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                   class GALGAS_string & ioArgument2,
                                                                                                                   class GALGAS_bool & ioArgument3,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeMOVLW (const int32_t inClassIndex,
                                        categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeMOVLW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'midrange_compute_JSR_JUMP'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_compute_5F_JSR_5F_JUMP (class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                 class GALGAS_string & ioArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@midrange_intermediate_instruction instructionLength'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                class C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionLength (const int32_t inClassIndex,
                                            categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@midrange_intermediate_instruction compute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_compute) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         const class GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument0,
                                                                                         class GALGAS_uint & ioArgument1,
                                                                                         class GALGAS_bool & ioArgument2,
                                                                                         class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument3,
                                                                                         const class GALGAS_uint constinArgument4,
                                                                                         class GALGAS_string & ioArgument5,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_compute (const int32_t inClassIndex,
                                  categoryMethodSignature_midrange_5F_intermediate_5F_instruction_compute inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_compute (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                 const GALGAS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                 GALGAS_uint & io_ioAddress,
                                 GALGAS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                 GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                 const GALGAS_uint constin_inIndex,
                                 GALGAS_string & io_ioListFileContents,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction defineLabelAtAddress'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      class GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument0,
                                                                                                      class GALGAS_uint & ioArgument1,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabelAtAddress (const int32_t inClassIndex,
                                               categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabelAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioAddress,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'midrange_build_assembly_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_build_5F_assembly_5F_code (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_registerTable constinArgument1,
                                                    const class GALGAS_registerTable constinArgument2,
                                                    const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument3,
                                                    const class GALGAS_actualConfigurationMap constinArgument4,
                                                    class GALGAS_string & outArgument5,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@midrange_intermediate_instruction buildAssemblyCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                   class GALGAS_string & ioArgument0,
                                                                                                   class GALGAS_uint & ioArgument1,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildAssemblyCode (const int32_t inClassIndex,
                                            categoryMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildAssemblyCode (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_string & io_ioString,
                                           GALGAS_uint & io_ioLocalLabelIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitMidrangeCodeAtWordAddress'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitMidrangeCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                            class GALGAS_uint & ioArgument1,
                                            const class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument2,
                                            class GALGAS_string & ioArgument3,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'emitMidrangeDirectCodeAtWordAddress'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitMidrangeDirectCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                                  class GALGAS_uint & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  class GALGAS_string & ioArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'emitNoMidrangeCodeAtWordAddress'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitNoMidrangeCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                              const class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument1,
                                              class GALGAS_string & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'emit_midrange_GOTOinstruction_nocheck'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (const class GALGAS_string constinArgument0,
                                                             const class GALGAS_uint constinArgument1,
                                                             class GALGAS_uint & ioArgument2,
                                                             class GALGAS_string & ioArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emit_midrange_GOTOinstruction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_GOTOinstruction (const class GALGAS_location constinArgument0,
                                                  class GALGAS_uint & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_uint constinArgument3,
                                                  class GALGAS_string & ioArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'emit_midrange_CALLinstruction_nocheck'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (const class GALGAS_string constinArgument0,
                                                             const class GALGAS_uint constinArgument1,
                                                             class GALGAS_uint & ioArgument2,
                                                             class GALGAS_string & ioArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emit_midrange_CALLinstruction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_CALLinstruction (const class GALGAS_location constinArgument0,
                                                  class GALGAS_uint & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_uint constinArgument3,
                                                  class GALGAS_string & ioArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'build_midrange_ipic_binary_code'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (const class GALGAS_registerTable constinArgument0,
                                                          const class GALGAS_uint constinArgument1,
                                                          const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument2,
                                                          const class GALGAS_uint constinArgument3,
                                                          const class GALGAS_actualConfigurationMap constinArgument4,
                                                          class GALGAS_string & ioArgument5,
                                                          class GALGAS_uint & outArgument6,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction enterLabelAtAddress'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     class GALGAS_midrange_5F_symbolTable & ioArgument0,
                                                                                                     class GALGAS_uint & ioArgument1,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                              categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterLabelAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                             GALGAS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                             GALGAS_uint & io_ioAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                             const class GALGAS_registerTable constinArgument0,
                                                                                                             const class GALGAS_uint constinArgument1,
                                                                                                             const class GALGAS_midrange_5F_symbolTable constinArgument2,
                                                                                                             class GALGAS_string & ioArgument3,
                                                                                                             class GALGAS_uint & ioArgument4,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                      categoryMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateBinaryCodeAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                     const GALGAS_registerTable constin_inRegisterTable,
                                                     const GALGAS_uint constin_inTotalBankCount,
                                                     const GALGAS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                     GALGAS_string & io_ioListFileContents,
                                                     GALGAS_uint & io_ioAddress,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getComplementaryBcc'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getComplementaryBcc (const class GALGAS_conditional_5F_branch constinArgument0,
                                  class GALGAS_conditional_5F_branch & outArgument1,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_computeUsedRoutines'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const class GALGAS_pic_31__38_InterruptDefinitionList & constinArgument0,
                                                                    const class GALGAS_pic_31__38_RoutineDefinitionList & constinArgument1,
                                                                    const class GALGAS_routineDeclarationList & constinArgument2,
                                                                    const class GALGAS_routineDeclarationList & constinArgument3,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'build_ipic18_block_representation_list'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (const class GALGAS_string constinArgument0,
                                                                       const class GALGAS_sint_36__34_ constinArgument1,
                                                                       const class GALGAS_sint_36__34_ constinArgument2,
                                                                       const class GALGAS_routineDeclarationList constinArgument3,
                                                                       const class GALGAS_routineDeclarationList constinArgument4,
                                                                       const class GALGAS_luint constinArgument5,
                                                                       const class GALGAS_routineDeclarationList constinArgument6,
                                                                       const class GALGAS_routineDeclarationList constinArgument7,
                                                                       const class GALGAS_uint constinArgument8,
                                                                       const class GALGAS_registerTable constinArgument9,
                                                                       const class GALGAS_declaredByteMap constinArgument10,
                                                                       const class GALGAS_pic_31__38_RoutineDefinitionList constinArgument11,
                                                                       const class GALGAS_programKind constinArgument12,
                                                                       const class GALGAS_constantDefinitionList constinArgument13,
                                                                       const class GALGAS_dataList constinArgument14,
                                                                       const class GALGAS_pic_31__38_InterruptDefinitionList constinArgument15,
                                                                       const class GALGAS_lstringlist constinArgument16,
                                                                       const class GALGAS_ramBankTable constinArgument17,
                                                                       const class GALGAS_bool constinArgument18,
                                                                       const class GALGAS_bool constinArgument19,
                                                                       const class GALGAS_string constinArgument20,
                                                                       const class GALGAS_registerTable constinArgument21,
                                                                       const class GALGAS_actualConfigurationMap constinArgument22,
                                                                       const class GALGAS_location constinArgument23,
                                                                       class GALGAS_string & ioArgument24,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'pic18PerformRoutineInline'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_PerformRoutineInline (const class GALGAS_stringset constinArgument0,
                                              const class GALGAS_declaredRoutineMap constinArgument1,
                                              class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument2,
                                              class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument3,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'pic18_checkBCC'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool function_pic_31__38__5F_checkBCC (const class GALGAS_symbolTableForRelativesResolution & constinArgument0,
                                                    const class GALGAS_lstring & constinArgument1,
                                                    const class GALGAS_uint & constinArgument2,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'pic18_checkBRA_RCALL'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const class GALGAS_symbolTableForRelativesResolution & constinArgument0,
                                                             const class GALGAS_lstring & constinArgument1,
                                                             const class GALGAS_uint & constinArgument2,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_BRA_RCALL_displacement'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const class GALGAS_symbolTableForRelativesResolution & constinArgument0,
                                                                        const class GALGAS_lstring & constinArgument1,
                                                                        const class GALGAS_uint & constinArgument2,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_Bcc_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                          const class GALGAS_uint & constinArgument1,
                                                                          const class GALGAS_lstring & constinArgument2,
                                                                          const class GALGAS_conditional_5F_branch & constinArgument3,
                                                                          const class GALGAS_bool & constinArgument4,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_RCALL_instruction_code'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                            const class GALGAS_uint & constinArgument1,
                                                                            const class GALGAS_lstring & constinArgument2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_BRA_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                          const class GALGAS_uint & constinArgument1,
                                                                          const class GALGAS_lstring & constinArgument2,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_CALL_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                           const class GALGAS_lstring & constinArgument1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_GOTO_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                           const class GALGAS_lstring & constinArgument1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'pic18_definition_label'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_codeList function_pic_31__38__5F_definition_5F_label (const class GALGAS_lstring & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'addPic18UsedRoutinesFromInstructionList'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                            class GALGAS_stringset & ioArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@pic18PiccoloInstruction addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       class GALGAS_stringset & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'performInlineFromInstructionList'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performInlineFromInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                               const class GALGAS_stringset constinArgument1,
                                               const class GALGAS_declaredRoutineMap constinArgument2,
                                               const class GALGAS_stringset constinArgument3,
                                               class GALGAS_pic_31__38_InstructionList & outArgument4,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@pic18PiccoloInstruction performInlining'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_PiccoloInstruction_performInlining) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const class GALGAS_stringset constinArgument0,
                                                                                       const class GALGAS_declaredRoutineMap constinArgument1,
                                                                                       const class GALGAS_stringset constinArgument2,
                                                                                       class GALGAS_pic_31__38_InstructionList & ioArgument3,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performInlining (const int32_t inClassIndex,
                                          categoryMethodSignature_pic_31__38_PiccoloInstruction_performInlining inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performInlining (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                         const GALGAS_stringset constin_inInlinedRoutineSet,
                                         const GALGAS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                         const GALGAS_stringset constin_inCurrentlyInlinedRoutineSet,
                                         GALGAS_pic_31__38_InstructionList & io_ioInstructionList,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'displayBlockList'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayBlockList (const class GALGAS_string constinArgument0,
                               class GALGAS_string & ioArgument1,
                               const class GALGAS_ipic_31__38_BlockList constinArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Category method '@ipic18Block display'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_display (const class GALGAS_ipic_31__38_Block inObject,
                             const class GALGAS_string constin_inNextBlockLabel,
                             class GALGAS_string & io_ioListFileContents,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeInstructionList'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                     class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                     const class GALGAS_uint constinArgument2,
                                     const class GALGAS_routineMap constinArgument3,
                                     const class GALGAS_registerTable constinArgument4,
                                     const class GALGAS_pic_31__38__5F_dataMap constinArgument5,
                                     const class GALGAS_constantMap constinArgument6,
                                     class GALGAS_uint & ioArgument7,
                                     class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument8,
                                     class GALGAS_lstring & ioArgument9,
                                     class GALGAS_string & ioArgument10,
                                     class GALGAS_uint & ioArgument11,
                                     const class GALGAS_bool constinArgument12,
                                     const class GALGAS_routineKind constinArgument13,
                                     class GALGAS_stringset & ioArgument14,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@pic18PiccoloInstruction analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const class GALGAS_uint constinArgument0,
                                                                               class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                                               const class GALGAS_routineMap constinArgument2,
                                                                               const class GALGAS_registerTable constinArgument3,
                                                                               const class GALGAS_pic_31__38__5F_dataMap constinArgument4,
                                                                               const class GALGAS_constantMap constinArgument5,
                                                                               class GALGAS_uint & ioArgument6,
                                                                               class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument7,
                                                                               class GALGAS_lstring & ioArgument8,
                                                                               class GALGAS_string & ioArgument9,
                                                                               class GALGAS_uint & ioArgument10,
                                                                               const class GALGAS_bool constinArgument11,
                                                                               const class GALGAS_routineKind constinArgument12,
                                                                               class GALGAS_stringset & ioArgument13,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                 const GALGAS_uint constin_inAccessBankSplitOffset,
                                 GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                 const GALGAS_routineMap constin_inRoutineMap,
                                 const GALGAS_registerTable constin_inRegisterTable,
                                 const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                 const GALGAS_constantMap constin_inConstantMap,
                                 GALGAS_uint & io_ioLocalLabelIndex,
                                 GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                 GALGAS_lstring & io_ioBlockLabel,
                                 GALGAS_string & io_ioListFileContents,
                                 GALGAS_uint & io_ioCurrentBank,
                                 const GALGAS_bool constin_inShouldPreserveBSR,
                                 const GALGAS_routineKind constin_inRoutineKind,
                                 GALGAS_stringset & io_ioUsedRegisters,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'pic18_analyze_data_sections'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38__5F_analyze_5F_data_5F_sections (const class GALGAS_dataList constinArgument0,
                                                         const class GALGAS_registerTable constinArgument1,
                                                         const class GALGAS_constantMap constinArgument2,
                                                         class GALGAS_string & ioArgument3,
                                                         class GALGAS_pic_31__38__5F_dataMap & outArgument4,
                                                         class GALGAS_constantMap & ioArgument5,
                                                         class GALGAS_stringset & ioArgument6,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @ipic18AbstractBlockTerminator class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_AbstractBlockTerminator : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_ipic_31__38_AbstractBlockTerminator (const GALGAS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @ipic_31__38_SingleInstructionTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_SingleInstructionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_SingleInstructionTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_SingleInstructionTerminator * ptr (void) const { return (const cPtr_ipic_31__38_SingleInstructionTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_SingleInstructionTerminator extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_SingleInstructionTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @ipic18SingleInstructionTerminator class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_SingleInstructionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes

//--- Constructor
  public : cPtr_ipic_31__38_SingleInstructionTerminator (const GALGAS_location & in_mInstructionLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @ipic_31__38_JumpTerminator class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_JumpTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_JumpTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_JumpTerminator * ptr (void) const { return (const cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_JumpTerminator (const cPtr_ipic_31__38_JumpTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_JumpTerminator extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_JumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_jumpInstructionKind & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_JumpTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @ipic18JumpTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_JumpTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_jumpInstructionKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mLabel,
                                            const GALGAS_jumpInstructionKind & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @ipic_31__38_RetfieTerminator class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_RetfieTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_RetfieTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_RetfieTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_RetfieTerminator * ptr (void) const { return (const cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_RetfieTerminator (const cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_RetfieTerminator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_RetfieTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_bool & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetfieTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mFastReturn (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_RetfieTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @ipic18RetfieTerminator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_RetfieTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_bool mAttribute_mFastReturn ;

//--- Constructor
  public : cPtr_ipic_31__38_RetfieTerminator (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_bool & in_mFastReturn
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mFastReturn (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @ipic_31__38_ReturnTerminator class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38_ReturnTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ReturnTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ReturnTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ReturnTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ReturnTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ReturnTerminator (const cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ReturnTerminator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38_ReturnTerminator constructor_new (const class GALGAS_location & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ReturnTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ReturnTerminator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @ipic18ReturnTerminator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ReturnTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes

//--- Constructor
  public : cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                             const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                             const class GALGAS_bool & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST reader_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_registerExpression struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mAssemblyString ;
  public : GALGAS_uint mAttribute_mRegisterAddress ;
  public : GALGAS_bool mAttribute_mNeedsBSR ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                      const GALGAS_uint & in_mRegisterAddress,
                                                                      const GALGAS_bool & in_mNeedsBSR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                             const class GALGAS_uint & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsBSR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FDA class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST reader_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_luint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_MOVLB class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mBankIndex ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_luint & in_mBankIndex
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                          const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                          const class GALGAS_uint & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @ipic18_intermediate_instruction_literalOperation class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_uint mAttribute_mLiteralValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                 const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                 const GALGAS_uint & in_mLiteralValue
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@registerExpression analyzeRegisterExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_registerExpression_analyzeRegisterExpression) (const class cPtr_registerExpression * inObject,
                                                                                      const class GALGAS_uint constinArgument0,
                                                                                      const class GALGAS_uint constinArgument1,
                                                                                      const class GALGAS_registerTable constinArgument2,
                                                                                      class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument3,
                                                                                      class GALGAS_bitSliceTable & outArgument4,
                                                                                      class GALGAS_stringset & ioArgument5,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                    categoryMethodSignature_registerExpression_analyzeRegisterExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeRegisterExpression (const class cPtr_registerExpression * inObject,
                                                   const GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const GALGAS_uint constin_inCurrentBank,
                                                   const GALGAS_registerTable constin_inRegisterTable,
                                                   GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                   GALGAS_bitSliceTable & out_outBitSliceTable,
                                                   GALGAS_stringset & io_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'ipic18GenerateCode'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_GenerateCode (const class GALGAS_string constinArgument0,
                                       const class GALGAS_programKind constinArgument1,
                                       const class GALGAS_uint constinArgument2,
                                       const class GALGAS_uint constinArgument3,
                                       const class GALGAS_string constinArgument4,
                                       const class GALGAS_registerTable constinArgument5,
                                       const class GALGAS_registerTable constinArgument6,
                                       const class GALGAS_pic_31__38__5F_dataMap constinArgument7,
                                       const class GALGAS_actualConfigurationMap constinArgument8,
                                       class GALGAS_string & ioArgument9,
                                       const class GALGAS_ipic_31__38_BlockList constinArgument10,
                                       class GALGAS_uint & outArgument11,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'ipic18OptimizeBlockOrdering'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_OptimizeBlockOrdering (const class GALGAS_string constinArgument0,
                                                class GALGAS_string & ioArgument1,
                                                class GALGAS_ipic_31__38_BlockList & ioArgument2,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'ipic18OptimizeBlocks'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_OptimizeBlocks (class GALGAS_string & ioArgument0,
                                         class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'ipic18RelativesResolution'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_RelativesResolution (class GALGAS_string & ioArgument0,
                                              class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'ipic18StackComputations'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_StackComputations (class GALGAS_string & ioArgument0,
                                            const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto2block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_32_block (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                 const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                 class GALGAS_stringset & ioArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@ipic18Block enterReferencedLabels'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterReferencedLabels (const class GALGAS_ipic_31__38_Block inObject,
                                           const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                           const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                           class GALGAS_stringset & io_ioReferencedBlockSet,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto4block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_34_block (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                 const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                 class GALGAS_stringset & ioArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'instructionListOptimization'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_instructionListOptimization (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                          const class GALGAS_optimizeFlagStruct constinArgument1,
                                          const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                          const class GALGAS_ipic_31__38_SequentialInstructionList constinArgument3,
                                          const class GALGAS_lstring constinArgument4,
                                          class GALGAS_bool & outArgument5,
                                          class GALGAS_string & ioArgument6,
                                          class GALGAS_ipic_31__38_SequentialInstructionList & outArgument7,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@ipic18SequentialInstruction optimizeInstruction'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                               const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                               const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                               const class GALGAS_lstring constinArgument3,
                                                                                               class GALGAS_bool & outArgument4,
                                                                                               class GALGAS_string & ioArgument5,
                                                                                               class GALGAS_ipic_31__38_SequentialInstruction & outArgument6,
                                                                                               class GALGAS_bool & outArgument7,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeInstruction (const int32_t inClassIndex,
                                              categoryMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeInstruction (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                             const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const GALGAS_lstring constin_inBlockLabel,
                                             GALGAS_bool & out_outOptimizationDone,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                             GALGAS_bool & out_outNOPsubstitution,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @optimizeFlagStruct struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optimizeFlagStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mRemoveEmptyRoutine ;
  public : GALGAS_bool mAttribute_mJSRtoRETLWreplacedByMOVLW ;
  public : GALGAS_bool mAttribute_mJSRfollowedByRETreplacedByJUMP ;
  public : GALGAS_bool mAttribute_mMOVLWfollowedByRETreplacedByRETLW ;
  public : GALGAS_bool mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  public : GALGAS_bool mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  public : GALGAS_bool mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optimizeFlagStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optimizeFlagStruct (const GALGAS_bool & in_mRemoveEmptyRoutine,
                                      const GALGAS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                      const GALGAS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                      const GALGAS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                      const GALGAS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                      const GALGAS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                      const GALGAS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optimizeFlagStruct extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optimizeFlagStruct constructor_new (const class GALGAS_bool & inOperand0,
                                                             const class GALGAS_bool & inOperand1,
                                                             const class GALGAS_bool & inOperand2,
                                                             const class GALGAS_bool & inOperand3,
                                                             const class GALGAS_bool & inOperand4,
                                                             const class GALGAS_bool & inOperand5,
                                                             const class GALGAS_bool & inOperand6
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mJSRfollowedByRETreplacedByJUMP (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mJSRtoOneInstructionRoutineReplacedByInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mJSRtoRETLWreplacedByMOVLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mMOVLWfollowedByRETreplacedByRETLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mRemoveEmptyRoutine (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optimizeFlagStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Reader '@bool flagValue'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_flagValue (const class GALGAS_bool & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Category method '@ipic18Block optimize'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_optimize (const class GALGAS_ipic_31__38_Block inObject,
                              const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                              const class GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                              const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                              class GALGAS_bool & io_ioOptimizationDone,
                              class GALGAS_string & io_ioListFileContents,
                              class GALGAS_ipic_31__38_Block & out_outOptimizedBlock,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'buildOrderedGraph'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedGraph (class GALGAS_ipic_31__38_BlockList & ioArgument0,
                                const class GALGAS_string constinArgument1,
                                class GALGAS_string & ioArgument2,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'blockDiscontinuityCount'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_blockDiscontinuityCount (class GALGAS_ipic_31__38_BlockList inArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                         const class GALGAS_lstring constinArgument0,
                                                                                                         class GALGAS_blockInvocationGraph & ioArgument1,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTerminatorOrderedGraph (const int32_t inClassIndex,
                                                      categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTerminatorOrderedGraph (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_lstring constin_inBlockLabel,
                                                     GALGAS_blockInvocationGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'perform_cluster_ordering'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_cluster_5F_ordering (const class GALGAS_clusterList constinArgument0,
                                             class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                             class GALGAS_string & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildInvocationGraph'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildInvocationGraph (const class GALGAS_ipic_31__38_BlockList constinArgument0,
                                   class GALGAS_string & outArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                            const class GALGAS_lstring constinArgument0,
                                                                                                            class GALGAS_string & ioArgument1,
                                                                                                            const class GALGAS_bool constinArgument2,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTerminatorInvocationGraph (const int32_t inClassIndex,
                                                         categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTerminatorInvocationGraph (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const GALGAS_lstring constin_inBlockLabel,
                                                        GALGAS_string & io_ioGraphVizString,
                                                        const GALGAS_bool constin_inDottedArrow,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@ipic18SequentialInstruction buildInstructionInvocationGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const class GALGAS_lstring constinArgument0,
                                                                                                           class GALGAS_string & ioArgument1,
                                                                                                           class C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildInstructionInvocationGraph (const int32_t inClassIndex,
                                                          categoryMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildInstructionInvocationGraph (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                         const GALGAS_lstring constin_inBlockLabel,
                                                         GALGAS_string & io_ioGraphVizString,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category reader '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                      const class GALGAS_string & constinArgument0,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_needToInsertJumpInstruction (const int32_t inClassIndex,
                                                      categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_needToInsertJumpInstruction (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                  const GALGAS_string & constin_inNextBlockLabel,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'sortKey'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_sortKey (const class GALGAS_clusterList & constinArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'ipic18RelativeBranchOverflow'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_RelativeBranchOverflow (const class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                 const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                 class GALGAS_branchOverflowMap & outArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'performRelativesResolution'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performRelativesResolution (const class GALGAS_symbolTableForRelativesResolution constinArgument0,
                                         class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                         class GALGAS_uint & ioArgument2,
                                         class GALGAS_string & ioArgument3,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Reader '@ipic18Block blockSize'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint categoryReader_blockSize (const class GALGAS_ipic_31__38_Block & inObject,
                                            const class GALGAS_string & constinArgument0,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@ipic18Block performRelativesResolution'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_performRelativesResolution (const class GALGAS_ipic_31__38_Block inObject,
                                                const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                const class GALGAS_string constin_inNextBlockLabel,
                                                const class GALGAS_uint constin_inBlockStartAddress,
                                                class GALGAS_uint & io_ioConversionCount,
                                                class GALGAS_string & io_ioListFileContents,
                                                class GALGAS_ipic_31__38_Block & out_outModifiedBlock,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'computeLabelAbsoluteAddressMap'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_computeLabelAbsoluteAddressMap (const class GALGAS_ipic_31__38_BlockList constinArgument0,
                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                             class GALGAS_symbolTableForRelativesResolution & outArgument2,
                                             class GALGAS_uint & outArgument3,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@ipic18Block relativeBranchOverflow'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_relativeBranchOverflow (const class GALGAS_ipic_31__38_Block inObject,
                                            const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                            const class GALGAS_string constin_inNextBlockLabel,
                                            const class GALGAS_uint constin_inBlockStartAddress,
                                            class GALGAS_branchOverflowMap & io_ioOverflowMap,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateLineWithCode'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateLineWithCode (const class GALGAS_uint constinArgument0,
                                   const class GALGAS_codeList constinArgument1,
                                   const class GALGAS_stringlist constinArgument2,
                                   class GALGAS_string & ioArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Reader '@uint x4string'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_x_34_string (const class GALGAS_uint & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Reader '@uint x6string'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_x_36_string (const class GALGAS_uint & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category method '@ipic18Block generateCode'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateCode (const class GALGAS_ipic_31__38_Block inObject,
                                  const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                  const class GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                  const class GALGAS_uint constin_inBlockAddress,
                                  const class GALGAS_string constin_inNextBlockLabel,
                                  class GALGAS_string & io_ioListFileContents,
                                  class GALGAS_string & io_ioAssemblyString,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'pic18GenerateAssemblyFile'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_GenerateAssemblyFile (const class GALGAS_string constinArgument0,
                                              const class GALGAS_string constinArgument1,
                                              const class GALGAS_registerTable constinArgument2,
                                              const class GALGAS_registerTable constinArgument3,
                                              const class GALGAS_actualConfigurationMap constinArgument4,
                                              const class GALGAS_string constinArgument5,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@ipic18AbstractBlockTerminator exploreAccessibleBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocks) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     class GALGAS_stringset & ioArgument0,
                                                                                                     class GALGAS_stringset & ioArgument1,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_exploreAccessibleBlocks (const int32_t inClassIndex,
                                                  categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocks inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_exploreAccessibleBlocks (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 GALGAS_stringset & io_ioBlockToExploreSet,
                                                 GALGAS_stringset & io_ioExploredBlockSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@ipic18SequentialInstruction buildCalledRoutineSet'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSet) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 class GALGAS_stringset & ioArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildCalledRoutineSet (const int32_t inClassIndex,
                                                categoryMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSet inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildCalledRoutineSet (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                               GALGAS_stringset & io_ioRoutineCalledSet,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@declarationInRam handleDeclaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_declarationInRam_handleDeclaration) (const class cPtr_declarationInRam * inObject,
                                                                            class GALGAS_ramBankTable & ioArgument0,
                                                                            class GALGAS_registerTable & ioArgument1,
                                                                            const class GALGAS_lstring constinArgument2,
                                                                            class GALGAS_declaredByteMap & ioArgument3,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_handleDeclaration (const int32_t inClassIndex,
                                            categoryMethodSignature_declarationInRam_handleDeclaration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_handleDeclaration (const class cPtr_declarationInRam * inObject,
                                           GALGAS_ramBankTable & io_ioRamBank,
                                           GALGAS_registerTable & io_ioRegisterTable,
                                           const GALGAS_lstring constin_inCurrentRamBank,
                                           GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'embeddedDevices'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_embeddedDevices ;
extern const char * gWrapperFileContent_1_embeddedDevices ;
extern const char * gWrapperFileContent_2_embeddedDevices ;
extern const char * gWrapperFileContent_3_embeddedDevices ;
extern const char * gWrapperFileContent_4_embeddedDevices ;
extern const char * gWrapperFileContent_5_embeddedDevices ;
extern const char * gWrapperFileContent_6_embeddedDevices ;
extern const char * gWrapperFileContent_7_embeddedDevices ;
extern const char * gWrapperFileContent_8_embeddedDevices ;
extern const char * gWrapperFileContent_9_embeddedDevices ;
extern const char * gWrapperFileContent_10_embeddedDevices ;
extern const char * gWrapperFileContent_11_embeddedDevices ;
extern const char * gWrapperFileContent_12_embeddedDevices ;
extern const char * gWrapperFileContent_13_embeddedDevices ;
extern const char * gWrapperFileContent_14_embeddedDevices ;
extern const char * gWrapperFileContent_15_embeddedDevices ;
extern const char * gWrapperFileContent_16_embeddedDevices ;
extern const char * gWrapperFileContent_17_embeddedDevices ;
extern const char * gWrapperFileContent_18_embeddedDevices ;
extern const char * gWrapperFileContent_19_embeddedDevices ;
extern const char * gWrapperFileContent_20_embeddedDevices ;
extern const char * gWrapperFileContent_21_embeddedDevices ;
extern const char * gWrapperFileContent_22_embeddedDevices ;
extern const char * gWrapperFileContent_23_embeddedDevices ;
extern const char * gWrapperFileContent_24_embeddedDevices ;
extern const char * gWrapperFileContent_25_embeddedDevices ;
extern const char * gWrapperFileContent_26_embeddedDevices ;
extern const char * gWrapperFileContent_27_embeddedDevices ;
extern const char * gWrapperFileContent_28_embeddedDevices ;
extern const char * gWrapperFileContent_29_embeddedDevices ;
extern const char * gWrapperFileContent_30_embeddedDevices ;
extern const char * gWrapperFileContent_31_embeddedDevices ;
extern const char * gWrapperFileContent_32_embeddedDevices ;
extern const char * gWrapperFileContent_33_embeddedDevices ;
extern const char * gWrapperFileContent_34_embeddedDevices ;
extern const char * gWrapperFileContent_35_embeddedDevices ;
extern const char * gWrapperFileContent_36_embeddedDevices ;
extern const char * gWrapperFileContent_37_embeddedDevices ;
extern const char * gWrapperFileContent_38_embeddedDevices ;
extern const char * gWrapperFileContent_39_embeddedDevices ;
extern const char * gWrapperFileContent_40_embeddedDevices ;
extern const char * gWrapperFileContent_41_embeddedDevices ;
extern const char * gWrapperFileContent_42_embeddedDevices ;
extern const char * gWrapperFileContent_43_embeddedDevices ;
extern const char * gWrapperFileContent_44_embeddedDevices ;
extern const char * gWrapperFileContent_45_embeddedDevices ;
extern const char * gWrapperFileContent_46_embeddedDevices ;
extern const char * gWrapperFileContent_47_embeddedDevices ;
extern const char * gWrapperFileContent_48_embeddedDevices ;
extern const char * gWrapperFileContent_49_embeddedDevices ;
extern const char * gWrapperFileContent_50_embeddedDevices ;
extern const char * gWrapperFileContent_51_embeddedDevices ;
extern const char * gWrapperFileContent_52_embeddedDevices ;
extern const char * gWrapperFileContent_53_embeddedDevices ;
extern const char * gWrapperFileContent_54_embeddedDevices ;
extern const char * gWrapperFileContent_55_embeddedDevices ;
extern const char * gWrapperFileContent_56_embeddedDevices ;
extern const char * gWrapperFileContent_57_embeddedDevices ;
extern const char * gWrapperFileContent_58_embeddedDevices ;
extern const char * gWrapperFileContent_59_embeddedDevices ;
extern const char * gWrapperFileContent_60_embeddedDevices ;
extern const char * gWrapperFileContent_61_embeddedDevices ;
extern const char * gWrapperFileContent_62_embeddedDevices ;
extern const char * gWrapperFileContent_63_embeddedDevices ;
extern const char * gWrapperFileContent_64_embeddedDevices ;
extern const char * gWrapperFileContent_65_embeddedDevices ;
extern const char * gWrapperFileContent_66_embeddedDevices ;
extern const char * gWrapperFileContent_67_embeddedDevices ;
extern const char * gWrapperFileContent_68_embeddedDevices ;
extern const char * gWrapperFileContent_69_embeddedDevices ;
extern const char * gWrapperFileContent_70_embeddedDevices ;
extern const char * gWrapperFileContent_71_embeddedDevices ;
extern const char * gWrapperFileContent_72_embeddedDevices ;
extern const char * gWrapperFileContent_73_embeddedDevices ;
extern const char * gWrapperFileContent_74_embeddedDevices ;
extern const char * gWrapperFileContent_75_embeddedDevices ;
extern const char * gWrapperFileContent_76_embeddedDevices ;
extern const char * gWrapperFileContent_77_embeddedDevices ;
extern const char * gWrapperFileContent_78_embeddedDevices ;
extern const char * gWrapperFileContent_79_embeddedDevices ;
extern const char * gWrapperFileContent_80_embeddedDevices ;
extern const char * gWrapperFileContent_81_embeddedDevices ;
extern const char * gWrapperFileContent_82_embeddedDevices ;
extern const char * gWrapperFileContent_83_embeddedDevices ;
extern const char * gWrapperFileContent_84_embeddedDevices ;
extern const char * gWrapperFileContent_85_embeddedDevices ;
extern const char * gWrapperFileContent_86_embeddedDevices ;
extern const char * gWrapperFileContent_87_embeddedDevices ;
extern const char * gWrapperFileContent_88_embeddedDevices ;
extern const char * gWrapperFileContent_89_embeddedDevices ;
extern const char * gWrapperFileContent_90_embeddedDevices ;
extern const char * gWrapperFileContent_91_embeddedDevices ;
extern const char * gWrapperFileContent_92_embeddedDevices ;
extern const char * gWrapperFileContent_93_embeddedDevices ;
extern const char * gWrapperFileContent_94_embeddedDevices ;
extern const char * gWrapperFileContent_95_embeddedDevices ;
extern const char * gWrapperFileContent_96_embeddedDevices ;
extern const char * gWrapperFileContent_97_embeddedDevices ;
extern const char * gWrapperFileContent_98_embeddedDevices ;
extern const char * gWrapperFileContent_99_embeddedDevices ;
extern const char * gWrapperFileContent_100_embeddedDevices ;
extern const char * gWrapperFileContent_101_embeddedDevices ;
extern const char * gWrapperFileContent_102_embeddedDevices ;
extern const char * gWrapperFileContent_103_embeddedDevices ;
extern const char * gWrapperFileContent_104_embeddedDevices ;
extern const char * gWrapperFileContent_105_embeddedDevices ;
extern const char * gWrapperFileContent_106_embeddedDevices ;
extern const char * gWrapperFileContent_107_embeddedDevices ;
extern const char * gWrapperFileContent_108_embeddedDevices ;
extern const char * gWrapperFileContent_109_embeddedDevices ;
extern const char * gWrapperFileContent_110_embeddedDevices ;
extern const char * gWrapperFileContent_111_embeddedDevices ;
extern const char * gWrapperFileContent_112_embeddedDevices ;
extern const char * gWrapperFileContent_113_embeddedDevices ;
extern const char * gWrapperFileContent_114_embeddedDevices ;
extern const char * gWrapperFileContent_115_embeddedDevices ;
extern const char * gWrapperFileContent_116_embeddedDevices ;
extern const char * gWrapperFileContent_117_embeddedDevices ;
extern const char * gWrapperFileContent_118_embeddedDevices ;
extern const char * gWrapperFileContent_119_embeddedDevices ;
extern const char * gWrapperFileContent_120_embeddedDevices ;
extern const char * gWrapperFileContent_121_embeddedDevices ;
extern const char * gWrapperFileContent_122_embeddedDevices ;
extern const char * gWrapperFileContent_123_embeddedDevices ;
extern const char * gWrapperFileContent_124_embeddedDevices ;
extern const char * gWrapperFileContent_125_embeddedDevices ;
extern const char * gWrapperFileContent_126_embeddedDevices ;
extern const char * gWrapperFileContent_127_embeddedDevices ;
extern const char * gWrapperFileContent_128_embeddedDevices ;
extern const char * gWrapperFileContent_129_embeddedDevices ;
extern const char * gWrapperFileContent_130_embeddedDevices ;
extern const char * gWrapperFileContent_131_embeddedDevices ;
extern const char * gWrapperFileContent_132_embeddedDevices ;
extern const char * gWrapperFileContent_133_embeddedDevices ;
extern const char * gWrapperFileContent_134_embeddedDevices ;
extern const char * gWrapperFileContent_135_embeddedDevices ;
extern const char * gWrapperFileContent_136_embeddedDevices ;
extern const char * gWrapperFileContent_137_embeddedDevices ;
extern const char * gWrapperFileContent_138_embeddedDevices ;
extern const char * gWrapperFileContent_139_embeddedDevices ;
extern const char * gWrapperFileContent_140_embeddedDevices ;
extern const char * gWrapperFileContent_141_embeddedDevices ;
extern const char * gWrapperFileContent_142_embeddedDevices ;
extern const char * gWrapperFileContent_143_embeddedDevices ;
extern const char * gWrapperFileContent_144_embeddedDevices ;
extern const char * gWrapperFileContent_145_embeddedDevices ;
extern const char * gWrapperFileContent_146_embeddedDevices ;
extern const char * gWrapperFileContent_147_embeddedDevices ;
extern const char * gWrapperFileContent_148_embeddedDevices ;
extern const char * gWrapperFileContent_149_embeddedDevices ;
extern const char * gWrapperFileContent_150_embeddedDevices ;
extern const char * gWrapperFileContent_151_embeddedDevices ;
extern const char * gWrapperFileContent_152_embeddedDevices ;
extern const char * gWrapperFileContent_153_embeddedDevices ;
extern const char * gWrapperFileContent_154_embeddedDevices ;
extern const char * gWrapperFileContent_155_embeddedDevices ;
extern const char * gWrapperFileContent_156_embeddedDevices ;
extern const char * gWrapperFileContent_157_embeddedDevices ;
extern const char * gWrapperFileContent_158_embeddedDevices ;
extern const char * gWrapperFileContent_159_embeddedDevices ;
extern const char * gWrapperFileContent_160_embeddedDevices ;
extern const char * gWrapperFileContent_161_embeddedDevices ;
extern const char * gWrapperFileContent_162_embeddedDevices ;
extern const char * gWrapperFileContent_163_embeddedDevices ;
extern const char * gWrapperFileContent_164_embeddedDevices ;
extern const char * gWrapperFileContent_165_embeddedDevices ;
extern const char * gWrapperFileContent_166_embeddedDevices ;
extern const char * gWrapperFileContent_167_embeddedDevices ;
extern const char * gWrapperFileContent_168_embeddedDevices ;
extern const char * gWrapperFileContent_169_embeddedDevices ;
extern const char * gWrapperFileContent_170_embeddedDevices ;
extern const char * gWrapperFileContent_171_embeddedDevices ;
extern const char * gWrapperFileContent_172_embeddedDevices ;
extern const char * gWrapperFileContent_173_embeddedDevices ;
extern const char * gWrapperFileContent_174_embeddedDevices ;
extern const char * gWrapperFileContent_175_embeddedDevices ;
extern const char * gWrapperFileContent_176_embeddedDevices ;
extern const char * gWrapperFileContent_177_embeddedDevices ;
extern const char * gWrapperFileContent_178_embeddedDevices ;
extern const char * gWrapperFileContent_179_embeddedDevices ;
extern const char * gWrapperFileContent_180_embeddedDevices ;
extern const char * gWrapperFileContent_181_embeddedDevices ;
extern const char * gWrapperFileContent_182_embeddedDevices ;
extern const char * gWrapperFileContent_183_embeddedDevices ;
extern const char * gWrapperFileContent_184_embeddedDevices ;
extern const char * gWrapperFileContent_185_embeddedDevices ;
extern const char * gWrapperFileContent_186_embeddedDevices ;
extern const char * gWrapperFileContent_187_embeddedDevices ;
extern const char * gWrapperFileContent_188_embeddedDevices ;
extern const char * gWrapperFileContent_189_embeddedDevices ;
extern const char * gWrapperFileContent_190_embeddedDevices ;
extern const char * gWrapperFileContent_191_embeddedDevices ;
extern const char * gWrapperFileContent_192_embeddedDevices ;
extern const char * gWrapperFileContent_193_embeddedDevices ;
extern const char * gWrapperFileContent_194_embeddedDevices ;
extern const char * gWrapperFileContent_195_embeddedDevices ;
extern const char * gWrapperFileContent_196_embeddedDevices ;
extern const char * gWrapperFileContent_197_embeddedDevices ;
extern const char * gWrapperFileContent_198_embeddedDevices ;
extern const char * gWrapperFileContent_199_embeddedDevices ;
extern const char * gWrapperFileContent_200_embeddedDevices ;
extern const char * gWrapperFileContent_201_embeddedDevices ;
extern const char * gWrapperFileContent_202_embeddedDevices ;
extern const char * gWrapperFileContent_203_embeddedDevices ;
extern const char * gWrapperFileContent_204_embeddedDevices ;
extern const char * gWrapperFileContent_205_embeddedDevices ;
extern const char * gWrapperFileContent_206_embeddedDevices ;
extern const char * gWrapperFileContent_207_embeddedDevices ;
extern const char * gWrapperFileContent_208_embeddedDevices ;
extern const char * gWrapperFileContent_209_embeddedDevices ;
extern const char * gWrapperFileContent_210_embeddedDevices ;
extern const char * gWrapperFileContent_211_embeddedDevices ;
extern const char * gWrapperFileContent_212_embeddedDevices ;
extern const char * gWrapperFileContent_213_embeddedDevices ;
extern const char * gWrapperFileContent_214_embeddedDevices ;
extern const char * gWrapperFileContent_215_embeddedDevices ;
extern const char * gWrapperFileContent_216_embeddedDevices ;
extern const char * gWrapperFileContent_217_embeddedDevices ;
extern const char * gWrapperFileContent_218_embeddedDevices ;
extern const char * gWrapperFileContent_219_embeddedDevices ;
extern const char * gWrapperFileContent_220_embeddedDevices ;
extern const char * gWrapperFileContent_221_embeddedDevices ;
extern const char * gWrapperFileContent_222_embeddedDevices ;
extern const char * gWrapperFileContent_223_embeddedDevices ;
extern const char * gWrapperFileContent_224_embeddedDevices ;
extern const char * gWrapperFileContent_225_embeddedDevices ;
extern const char * gWrapperFileContent_226_embeddedDevices ;
extern const char * gWrapperFileContent_227_embeddedDevices ;
extern const char * gWrapperFileContent_228_embeddedDevices ;
extern const char * gWrapperFileContent_229_embeddedDevices ;
extern const char * gWrapperFileContent_230_embeddedDevices ;
extern const char * gWrapperFileContent_231_embeddedDevices ;
extern const char * gWrapperFileContent_232_embeddedDevices ;
extern const char * gWrapperFileContent_233_embeddedDevices ;
extern const char * gWrapperFileContent_234_embeddedDevices ;
extern const char * gWrapperFileContent_235_embeddedDevices ;
extern const char * gWrapperFileContent_236_embeddedDevices ;
extern const char * gWrapperFileContent_237_embeddedDevices ;
extern const char * gWrapperFileContent_238_embeddedDevices ;
extern const char * gWrapperFileContent_239_embeddedDevices ;
extern const char * gWrapperFileContent_240_embeddedDevices ;
extern const char * gWrapperFileContent_241_embeddedDevices ;
extern const char * gWrapperFileContent_242_embeddedDevices ;
extern const char * gWrapperFileContent_243_embeddedDevices ;
extern const char * gWrapperFileContent_244_embeddedDevices ;
extern const char * gWrapperFileContent_245_embeddedDevices ;
extern const char * gWrapperFileContent_246_embeddedDevices ;
extern const char * gWrapperFileContent_247_embeddedDevices ;
extern const char * gWrapperFileContent_248_embeddedDevices ;
extern const char * gWrapperFileContent_249_embeddedDevices ;
extern const char * gWrapperFileContent_250_embeddedDevices ;
extern const char * gWrapperFileContent_251_embeddedDevices ;
extern const char * gWrapperFileContent_252_embeddedDevices ;
extern const char * gWrapperFileContent_253_embeddedDevices ;
extern const char * gWrapperFileContent_254_embeddedDevices ;
extern const char * gWrapperFileContent_255_embeddedDevices ;
extern const char * gWrapperFileContent_256_embeddedDevices ;
extern const char * gWrapperFileContent_257_embeddedDevices ;
extern const char * gWrapperFileContent_258_embeddedDevices ;
extern const char * gWrapperFileContent_259_embeddedDevices ;
extern const char * gWrapperFileContent_260_embeddedDevices ;
extern const char * gWrapperFileContent_261_embeddedDevices ;
extern const char * gWrapperFileContent_262_embeddedDevices ;
extern const char * gWrapperFileContent_263_embeddedDevices ;
extern const char * gWrapperFileContent_264_embeddedDevices ;
extern const char * gWrapperFileContent_265_embeddedDevices ;
extern const char * gWrapperFileContent_266_embeddedDevices ;
extern const char * gWrapperFileContent_267_embeddedDevices ;
extern const char * gWrapperFileContent_268_embeddedDevices ;
extern const char * gWrapperFileContent_269_embeddedDevices ;
extern const char * gWrapperFileContent_270_embeddedDevices ;
extern const char * gWrapperFileContent_271_embeddedDevices ;
extern const char * gWrapperFileContent_272_embeddedDevices ;
extern const char * gWrapperFileContent_273_embeddedDevices ;
extern const char * gWrapperFileContent_274_embeddedDevices ;
extern const char * gWrapperFileContent_275_embeddedDevices ;
extern const char * gWrapperFileContent_276_embeddedDevices ;
extern const char * gWrapperFileContent_277_embeddedDevices ;
extern const char * gWrapperFileContent_278_embeddedDevices ;
extern const char * gWrapperFileContent_279_embeddedDevices ;
extern const char * gWrapperFileContent_280_embeddedDevices ;
extern const char * gWrapperFileContent_281_embeddedDevices ;
extern const char * gWrapperFileContent_282_embeddedDevices ;
extern const char * gWrapperFileContent_283_embeddedDevices ;
extern const char * gWrapperFileContent_284_embeddedDevices ;
extern const char * gWrapperFileContent_285_embeddedDevices ;
extern const char * gWrapperFileContent_286_embeddedDevices ;
extern const char * gWrapperFileContent_287_embeddedDevices ;
extern const char * gWrapperFileContent_288_embeddedDevices ;
extern const char * gWrapperFileContent_289_embeddedDevices ;
extern const char * gWrapperFileContent_290_embeddedDevices ;
extern const char * gWrapperFileContent_291_embeddedDevices ;
extern const char * gWrapperFileContent_292_embeddedDevices ;
extern const char * gWrapperFileContent_293_embeddedDevices ;
extern const char * gWrapperFileContent_294_embeddedDevices ;
extern const char * gWrapperFileContent_295_embeddedDevices ;
extern const char * gWrapperFileContent_296_embeddedDevices ;
extern const char * gWrapperFileContent_297_embeddedDevices ;
extern const char * gWrapperFileContent_298_embeddedDevices ;
extern const char * gWrapperFileContent_299_embeddedDevices ;
extern const char * gWrapperFileContent_300_embeddedDevices ;
extern const char * gWrapperFileContent_301_embeddedDevices ;
extern const char * gWrapperFileContent_302_embeddedDevices ;
extern const char * gWrapperFileContent_303_embeddedDevices ;
extern const char * gWrapperFileContent_304_embeddedDevices ;
extern const char * gWrapperFileContent_305_embeddedDevices ;
extern const char * gWrapperFileContent_306_embeddedDevices ;
extern const char * gWrapperFileContent_307_embeddedDevices ;
extern const char * gWrapperFileContent_308_embeddedDevices ;
extern const char * gWrapperFileContent_309_embeddedDevices ;
extern const char * gWrapperFileContent_310_embeddedDevices ;
extern const char * gWrapperFileContent_311_embeddedDevices ;
extern const char * gWrapperFileContent_312_embeddedDevices ;
extern const char * gWrapperFileContent_313_embeddedDevices ;
extern const char * gWrapperFileContent_314_embeddedDevices ;
extern const char * gWrapperFileContent_315_embeddedDevices ;
extern const char * gWrapperFileContent_316_embeddedDevices ;
extern const char * gWrapperFileContent_317_embeddedDevices ;
extern const char * gWrapperFileContent_318_embeddedDevices ;
extern const char * gWrapperFileContent_319_embeddedDevices ;
extern const char * gWrapperFileContent_320_embeddedDevices ;
extern const char * gWrapperFileContent_321_embeddedDevices ;
extern const char * gWrapperFileContent_322_embeddedDevices ;
extern const char * gWrapperFileContent_323_embeddedDevices ;
extern const char * gWrapperFileContent_324_embeddedDevices ;
extern const char * gWrapperFileContent_325_embeddedDevices ;
extern const char * gWrapperFileContent_326_embeddedDevices ;
extern const char * gWrapperFileContent_327_embeddedDevices ;
extern const char * gWrapperFileContent_328_embeddedDevices ;
extern const char * gWrapperFileContent_329_embeddedDevices ;
extern const char * gWrapperFileContent_330_embeddedDevices ;
extern const char * gWrapperFileContent_331_embeddedDevices ;
extern const char * gWrapperFileContent_332_embeddedDevices ;
extern const char * gWrapperFileContent_333_embeddedDevices ;
extern const char * gWrapperFileContent_334_embeddedDevices ;
extern const char * gWrapperFileContent_335_embeddedDevices ;
extern const char * gWrapperFileContent_336_embeddedDevices ;
extern const char * gWrapperFileContent_337_embeddedDevices ;
extern const char * gWrapperFileContent_338_embeddedDevices ;
extern const char * gWrapperFileContent_339_embeddedDevices ;
extern const char * gWrapperFileContent_340_embeddedDevices ;
extern const char * gWrapperFileContent_341_embeddedDevices ;
extern const char * gWrapperFileContent_342_embeddedDevices ;
extern const char * gWrapperFileContent_343_embeddedDevices ;
extern const char * gWrapperFileContent_344_embeddedDevices ;
extern const char * gWrapperFileContent_345_embeddedDevices ;
extern const char * gWrapperFileContent_346_embeddedDevices ;
extern const char * gWrapperFileContent_347_embeddedDevices ;
extern const char * gWrapperFileContent_348_embeddedDevices ;
extern const char * gWrapperFileContent_349_embeddedDevices ;
extern const char * gWrapperFileContent_350_embeddedDevices ;
extern const char * gWrapperFileContent_351_embeddedDevices ;
extern const char * gWrapperFileContent_352_embeddedDevices ;
extern const char * gWrapperFileContent_353_embeddedDevices ;
extern const char * gWrapperFileContent_354_embeddedDevices ;
extern const char * gWrapperFileContent_355_embeddedDevices ;
extern const char * gWrapperFileContent_356_embeddedDevices ;
extern const char * gWrapperFileContent_357_embeddedDevices ;
extern const char * gWrapperFileContent_358_embeddedDevices ;
extern const char * gWrapperFileContent_359_embeddedDevices ;
extern const char * gWrapperFileContent_360_embeddedDevices ;
extern const char * gWrapperFileContent_361_embeddedDevices ;
extern const char * gWrapperFileContent_362_embeddedDevices ;
extern const char * gWrapperFileContent_363_embeddedDevices ;
extern const char * gWrapperFileContent_364_embeddedDevices ;
extern const char * gWrapperFileContent_365_embeddedDevices ;
extern const char * gWrapperFileContent_366_embeddedDevices ;
extern const char * gWrapperFileContent_367_embeddedDevices ;
extern const char * gWrapperFileContent_368_embeddedDevices ;
extern const char * gWrapperFileContent_369_embeddedDevices ;
extern const char * gWrapperFileContent_370_embeddedDevices ;
extern const char * gWrapperFileContent_371_embeddedDevices ;
extern const char * gWrapperFileContent_372_embeddedDevices ;
extern const char * gWrapperFileContent_373_embeddedDevices ;
extern const char * gWrapperFileContent_374_embeddedDevices ;
extern const char * gWrapperFileContent_375_embeddedDevices ;
extern const char * gWrapperFileContent_376_embeddedDevices ;
extern const char * gWrapperFileContent_377_embeddedDevices ;
extern const char * gWrapperFileContent_378_embeddedDevices ;
extern const char * gWrapperFileContent_379_embeddedDevices ;
extern const char * gWrapperFileContent_380_embeddedDevices ;
extern const char * gWrapperFileContent_381_embeddedDevices ;
extern const char * gWrapperFileContent_382_embeddedDevices ;
extern const char * gWrapperFileContent_383_embeddedDevices ;
extern const char * gWrapperFileContent_384_embeddedDevices ;
extern const char * gWrapperFileContent_385_embeddedDevices ;
extern const char * gWrapperFileContent_386_embeddedDevices ;
extern const char * gWrapperFileContent_387_embeddedDevices ;
extern const char * gWrapperFileContent_388_embeddedDevices ;
extern const char * gWrapperFileContent_389_embeddedDevices ;
extern const char * gWrapperFileContent_390_embeddedDevices ;
extern const char * gWrapperFileContent_391_embeddedDevices ;
extern const char * gWrapperFileContent_392_embeddedDevices ;
extern const char * gWrapperFileContent_393_embeddedDevices ;
extern const char * gWrapperFileContent_394_embeddedDevices ;
extern const char * gWrapperFileContent_395_embeddedDevices ;
extern const char * gWrapperFileContent_396_embeddedDevices ;
extern const char * gWrapperFileContent_397_embeddedDevices ;
extern const char * gWrapperFileContent_398_embeddedDevices ;
extern const char * gWrapperFileContent_399_embeddedDevices ;
extern const char * gWrapperFileContent_400_embeddedDevices ;
extern const char * gWrapperFileContent_401_embeddedDevices ;
extern const char * gWrapperFileContent_402_embeddedDevices ;
extern const char * gWrapperFileContent_403_embeddedDevices ;
extern const char * gWrapperFileContent_404_embeddedDevices ;
extern const char * gWrapperFileContent_405_embeddedDevices ;
extern const char * gWrapperFileContent_406_embeddedDevices ;
extern const char * gWrapperFileContent_407_embeddedDevices ;
extern const char * gWrapperFileContent_408_embeddedDevices ;
extern const char * gWrapperFileContent_409_embeddedDevices ;
extern const char * gWrapperFileContent_410_embeddedDevices ;
extern const char * gWrapperFileContent_411_embeddedDevices ;
extern const char * gWrapperFileContent_412_embeddedDevices ;
extern const char * gWrapperFileContent_413_embeddedDevices ;
extern const char * gWrapperFileContent_414_embeddedDevices ;
extern const char * gWrapperFileContent_415_embeddedDevices ;
extern const char * gWrapperFileContent_416_embeddedDevices ;
extern const char * gWrapperFileContent_417_embeddedDevices ;
extern const char * gWrapperFileContent_418_embeddedDevices ;
extern const char * gWrapperFileContent_419_embeddedDevices ;
extern const char * gWrapperFileContent_420_embeddedDevices ;
extern const char * gWrapperFileContent_421_embeddedDevices ;
extern const char * gWrapperFileContent_422_embeddedDevices ;
extern const char * gWrapperFileContent_423_embeddedDevices ;
extern const char * gWrapperFileContent_424_embeddedDevices ;
extern const char * gWrapperFileContent_425_embeddedDevices ;
extern const char * gWrapperFileContent_426_embeddedDevices ;
extern const char * gWrapperFileContent_427_embeddedDevices ;
extern const char * gWrapperFileContent_428_embeddedDevices ;
extern const char * gWrapperFileContent_429_embeddedDevices ;
extern const char * gWrapperFileContent_430_embeddedDevices ;
extern const char * gWrapperFileContent_431_embeddedDevices ;
extern const char * gWrapperFileContent_432_embeddedDevices ;
extern const char * gWrapperFileContent_433_embeddedDevices ;
extern const char * gWrapperFileContent_434_embeddedDevices ;
extern const char * gWrapperFileContent_435_embeddedDevices ;
extern const char * gWrapperFileContent_436_embeddedDevices ;
extern const char * gWrapperFileContent_437_embeddedDevices ;
extern const char * gWrapperFileContent_438_embeddedDevices ;
extern const char * gWrapperFileContent_439_embeddedDevices ;
extern const char * gWrapperFileContent_440_embeddedDevices ;
extern const char * gWrapperFileContent_441_embeddedDevices ;
extern const char * gWrapperFileContent_442_embeddedDevices ;
extern const char * gWrapperFileContent_443_embeddedDevices ;
extern const char * gWrapperFileContent_444_embeddedDevices ;
extern const char * gWrapperFileContent_445_embeddedDevices ;
extern const char * gWrapperFileContent_446_embeddedDevices ;
extern const char * gWrapperFileContent_447_embeddedDevices ;
extern const char * gWrapperFileContent_448_embeddedDevices ;
extern const char * gWrapperFileContent_449_embeddedDevices ;
extern const char * gWrapperFileContent_450_embeddedDevices ;
extern const char * gWrapperFileContent_451_embeddedDevices ;
extern const char * gWrapperFileContent_452_embeddedDevices ;
extern const char * gWrapperFileContent_453_embeddedDevices ;
extern const char * gWrapperFileContent_454_embeddedDevices ;
extern const char * gWrapperFileContent_455_embeddedDevices ;
extern const char * gWrapperFileContent_456_embeddedDevices ;
extern const char * gWrapperFileContent_457_embeddedDevices ;
extern const char * gWrapperFileContent_458_embeddedDevices ;
extern const char * gWrapperFileContent_459_embeddedDevices ;
extern const char * gWrapperFileContent_460_embeddedDevices ;
extern const char * gWrapperFileContent_461_embeddedDevices ;
extern const char * gWrapperFileContent_462_embeddedDevices ;
extern const char * gWrapperFileContent_463_embeddedDevices ;
extern const char * gWrapperFileContent_464_embeddedDevices ;
extern const char * gWrapperFileContent_465_embeddedDevices ;
extern const char * gWrapperFileContent_466_embeddedDevices ;
extern const char * gWrapperFileContent_467_embeddedDevices ;
extern const char * gWrapperFileContent_468_embeddedDevices ;
extern const char * gWrapperFileContent_469_embeddedDevices ;
extern const char * gWrapperFileContent_470_embeddedDevices ;
extern const char * gWrapperFileContent_471_embeddedDevices ;
extern const char * gWrapperFileContent_472_embeddedDevices ;
extern const char * gWrapperFileContent_473_embeddedDevices ;
extern const char * gWrapperFileContent_474_embeddedDevices ;
extern const char * gWrapperFileContent_475_embeddedDevices ;
extern const char * gWrapperFileContent_476_embeddedDevices ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_1_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_2_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_3_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_4_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_5_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_6_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_7_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_8_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_9_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_10_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_11_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_12_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_13_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_14_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_15_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_16_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_17_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_18_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_19_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_20_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_21_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_22_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_23_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_24_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_25_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_26_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_27_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_28_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_29_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_30_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_31_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_32_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_33_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_34_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_35_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_36_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_37_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_38_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_39_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_40_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_41_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_42_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_43_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_44_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_45_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_46_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_47_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_48_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_49_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_50_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_51_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_52_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_53_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_54_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_55_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_56_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_57_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_58_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_59_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_60_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_61_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_62_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_63_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_64_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_65_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_66_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_67_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_68_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_69_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_70_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_71_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_72_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_73_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_74_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_75_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_76_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_77_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_78_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_79_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_80_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_81_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_82_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_83_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_84_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_85_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_86_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_87_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_88_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_89_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_90_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_91_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_92_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_93_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_94_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_95_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_96_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_97_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_98_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_99_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_100_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_101_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_102_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_103_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_104_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_105_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_106_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_107_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_108_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_109_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_110_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_111_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_112_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_113_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_114_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_115_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_116_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_117_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_118_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_119_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_120_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_121_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_122_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_123_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_124_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_125_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_126_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_127_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_128_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_129_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_130_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_131_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_132_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_133_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_134_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_135_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_136_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_137_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_138_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_139_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_140_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_141_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_142_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_143_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_144_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_145_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_146_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_147_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_148_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_149_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_150_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_151_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_152_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_153_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_154_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_155_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_156_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_157_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_158_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_159_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_160_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_161_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_162_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_163_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_164_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_165_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_166_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_167_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_168_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_169_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_170_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_171_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_172_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_173_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_174_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_175_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_176_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_177_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_178_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_179_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_180_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_181_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_182_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_183_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_184_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_185_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_186_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_187_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_188_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_189_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_190_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_191_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_192_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_193_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_194_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_195_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_196_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_197_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_198_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_199_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_200_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_201_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_202_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_203_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_204_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_205_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_206_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_207_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_208_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_209_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_210_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_211_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_212_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_213_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_214_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_215_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_216_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_217_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_218_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_219_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_220_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_221_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_222_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_223_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_224_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_225_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_226_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_227_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_228_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_229_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_230_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_231_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_232_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_233_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_234_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_235_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_236_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_237_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_238_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_239_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_240_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_241_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_242_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_243_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_244_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_245_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_246_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_247_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_248_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_249_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_250_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_251_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_252_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_253_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_254_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_255_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_256_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_257_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_258_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_259_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_260_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_261_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_262_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_263_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_264_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_265_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_266_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_267_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_268_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_269_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_270_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_271_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_272_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_273_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_274_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_275_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_276_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_277_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_278_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_279_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_280_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_281_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_282_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_283_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_284_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_285_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_286_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_287_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_288_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_289_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_290_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_291_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_292_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_293_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_294_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_295_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_296_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_297_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_298_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_299_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_300_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_301_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_302_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_303_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_304_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_305_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_306_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_307_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_308_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_309_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_310_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_311_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_312_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_313_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_314_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_315_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_316_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_317_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_318_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_319_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_320_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_321_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_322_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_323_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_324_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_325_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_326_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_327_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_328_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_329_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_330_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_331_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_332_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_333_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_334_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_335_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_336_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_337_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_338_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_339_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_340_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_341_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_342_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_343_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_344_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_345_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_346_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_347_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_348_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_349_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_350_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_351_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_352_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_353_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_354_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_355_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_356_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_357_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_358_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_359_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_360_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_361_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_362_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_363_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_364_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_365_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_366_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_367_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_368_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_369_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_370_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_371_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_372_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_373_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_374_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_375_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_376_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_377_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_378_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_379_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_380_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_381_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_382_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_383_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_384_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_385_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_386_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_387_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_388_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_389_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_390_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_391_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_392_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_393_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_394_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_395_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_396_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_397_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_398_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_399_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_400_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_401_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_402_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_403_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_404_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_405_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_406_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_407_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_408_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_409_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_410_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_411_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_412_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_413_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_414_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_415_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_416_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_417_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_418_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_419_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_420_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_421_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_422_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_423_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_424_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_425_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_426_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_427_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_428_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_429_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_430_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_431_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_432_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_433_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_434_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_435_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_436_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_437_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_438_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_439_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_440_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_441_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_442_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_443_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_444_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_445_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_446_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_447_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_448_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_449_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_450_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_451_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_452_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_453_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_454_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_455_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_456_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_457_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_458_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_459_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_460_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_461_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_462_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_463_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_464_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_465_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_466_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_467_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_468_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_469_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_470_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_471_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_472_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_473_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_474_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_475_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_476_embeddedDevices ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedDevices ;

#endif
