//---------------------------------------------------------------------------*
//                                                                           *
//                     File 'baseline_optimizations.h'                       *
//                        Generated by version 2.4.3                         *
//                      april 21th, 2013, at 13h59'12"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef baseline_optimizations_ENTITIES_DEFINED
#define baseline_optimizations_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "baseline_intermediate_classes.h"
#include "baseline_instruction_groups.h"
#include "baseline_intermediate_instruction_length.h"

//---------------------------------------------------------------------------*

class GALGAS_baselineSymbolTableForOptimizations ;
class GALGAS_baselineSymbolTableForOptimizations_2E_element ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 @baselineSymbolTableForOptimizations map                  *
//                                                                           *
//---------------------------------------------------------------------------*

class cMapElement_baselineSymbolTableForOptimizations ;

//---------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey ;

//---------------------------------------------------------------------------*

class GALGAS_baselineSymbolTableForOptimizations : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_baselineSymbolTableForOptimizations (void) ;

//--------------------------------- Handle copy
  public : GALGAS_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inSource) ;
  public : GALGAS_baselineSymbolTableForOptimizations & operator = (const GALGAS_baselineSymbolTableForOptimizations & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baselineSymbolTableForOptimizations extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler,
                                                                            const GALGAS_location & inErrorLocation
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baselineSymbolTableForOptimizations constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_baselineSymbolTableForOptimizations constructor_mapWithMapToOverride (const GALGAS_baselineSymbolTableForOptimizations & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Modifiers
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (GALGAS_lstring constinArgument0,
                                                     GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeKey (GALGAS_lstring constinArgument0,
                                                     GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDefinitionLineIndexForKey (GALGAS_uint constinArgument0,
                                                                         GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (GALGAS_lstring constinArgument0,
                                                   GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Readers
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mDefinitionLineIndexForKey (const GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG GALGAS_baselineSymbolTableForOptimizations reader_overriddenMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- 'with' accessors
  public : VIRTUAL_IN_DEBUG cMapElement_baselineSymbolTableForOptimizations * readWriteAccessForWithInstruction_hasKey (C_Compiler * inCompiler,
                                                                                                                        const GALGAS_string & inKey
                                                                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG cMapElement_baselineSymbolTableForOptimizations * readWriteAccessForWithInstruction_searchKey (C_Compiler * inCompiler,
                                                                                                                           const GALGAS_lstring & inKey
                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baselineSymbolTableForOptimizations ;
 
} ; // End of GALGAS_baselineSymbolTableForOptimizations class

//---------------------------------------------------------------------------*
//   Enumerator declaration                                                  *
//---------------------------------------------------------------------------*

class cEnumerator_baselineSymbolTableForOptimizations : public cGenericAbstractEnumerator {
  public : cEnumerator_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : GALGAS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : GALGAS_baselineSymbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;

//--------------------------------- 'with' accessors
cCollectionElement * readWriteAccessForWithInstruction_hasKey (C_Compiler * inCompiler,
                                                               GALGAS_baselineSymbolTableForOptimizations & ioMap,
                                                               GALGAS_string & inKey
                                                               COMMA_LOCATION_ARGS) ;

cCollectionElement * readWriteAccessForWithInstruction_searchKey (C_Compiler * inCompiler,
                                                                  GALGAS_baselineSymbolTableForOptimizations & ioMap,
                                                                  GALGAS_lstring & inKey
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 Routine 'perform_baseline_optimizations'                  *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_perform_5F_baseline_5F_optimizations (GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                   GALGAS_string & ioArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//  Category method '@baseline_intermediate_instruction setCurrentAddress'   *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                   GALGAS_uint & ioArgument0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_setCurrentAddress (const PMSInt32 inClassIndex,
                                            categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_uint & io_ioCurrentWordAdress,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//       Category reader '@baseline_intermediate_instruction isLABEL'        *
//                                                                           *
//---------------------------------------------------------------------------*

typedef GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryReader_isLABEL (const PMSInt32 inClassIndex,
                                  categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL inReader) ;

//---------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//        Category reader '@baseline_intermediate_instruction isNULL'        *
//                                                                           *
//---------------------------------------------------------------------------*

typedef GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryReader_isNULL (const PMSInt32 inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL inReader) ;

//---------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Category reader '@baseline_intermediate_instruction isSkippingInstruction' *
//                                                                           *
//---------------------------------------------------------------------------*

typedef GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryReader_isSkippingInstruction (const PMSInt32 inClassIndex,
                                                categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction inReader) ;

//---------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Category reader '@baseline_intermediate_instruction nextInstructionIsReachable'*
//                                                                           *
//---------------------------------------------------------------------------*

typedef GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryReader_nextInstructionIsReachable (const PMSInt32 inClassIndex,
                                                     categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable inReader) ;

//---------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
// Category method '@baseline_intermediate_instruction enterReferencedLabel' *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                      GALGAS_stringset & ioArgument0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_enterReferencedLabel (const PMSInt32 inClassIndex,
                                               categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_stringset & io_ioReferencedLabelSet,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//     Category method '@baseline_intermediate_instruction defineLabel'      *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel) (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_baselineSymbolTableForOptimizations & ioArgument0,
                                                                                             const GALGAS_uint constinArgument1,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_defineLabel (const PMSInt32 inClassIndex,
                                      categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//        Category method '@baseline_intermediate_GOTO optimizeGOTO'         *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) (const cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                                                                       const GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                       const GALGAS_uint constinArgument1,
                                                                                       GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       GALGAS_string & ioArgument3,
                                                                                       GALGAS_bool & ioArgument4,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_optimizeGOTO (const PMSInt32 inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_optimizeGOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//        Category method '@baseline_intermediate_CALL optimizeCALL'         *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL) (const cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                                       const GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                       const GALGAS_uint constinArgument1,
                                                                                       GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       GALGAS_string & ioArgument3,
                                                                                       GALGAS_bool & ioArgument4,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_optimizeCALL (const PMSInt32 inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_optimizeCALL (const cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Category method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'*
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                                                                                         const GALGAS_uint constinArgument0,
                                                                                                                         GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                         GALGAS_string & ioArgument2,
                                                                                                                         GALGAS_bool & ioArgument3,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_optimizeBEGIN_5F_ROUTINE (const PMSInt32 inClassIndex,
                                                   categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_optimizeBEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                  const GALGAS_uint constin_inLineIndex,
                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_bool & io_ioOptimizationsDone,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Category method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'*
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                                  const GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                                                  const GALGAS_uint constinArgument1,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                                                  GALGAS_string & ioArgument3,
                                                                                                                  GALGAS_bool & ioArgument4,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTestDecInc (const PMSInt32 inClassIndex,
                                             categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_optimizeTestDecInc (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                            const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                            const GALGAS_uint constin_inLineIndex,
                                            GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_bool & io_ioOptimizationsDone,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//          @baselineSymbolTableForOptimizations_2E_element struct           *
//                                                                           *
//---------------------------------------------------------------------------*

class GALGAS_baselineSymbolTableForOptimizations_2E_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mDefinitionLineIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_baselineSymbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baselineSymbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baselineSymbolTableForOptimizations_2E_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_uint & in_mDefinitionLineIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baselineSymbolTableForOptimizations_2E_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler,
                                                                                       const GALGAS_location & inErrorLocation
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baselineSymbolTableForOptimizations_2E_element constructor_new (const GALGAS_lstring & inOperand0,
                                                                                         const GALGAS_uint & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const PMSInt32 inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2E_element & inOperand) const ;

//--------------------------------- Modifiers

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Readers
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mDefinitionLineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baselineSymbolTableForOptimizations_2E_element class


//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ;

//---------------------------------------------------------------------------*
//                                                                           *
//      Class for element of '@baselineSymbolTableForOptimizations' map      *
//                                                                           *
//---------------------------------------------------------------------------*

class cMapElement_baselineSymbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mDefinitionLineIndex ;

//--- Constructor
  public : cMapElement_baselineSymbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mDefinitionLineIndex
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const PMSInt32 inIndentation) const ;
} ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif