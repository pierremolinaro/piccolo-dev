#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @blockInstructionBlockMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInstructionBlockMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInstructionBlockMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockInstructionBlockMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inSource) ;
  public : GALGAS_blockInstructionBlockMap & operator = (const GALGAS_blockInstructionBlockMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInstructionBlockMap extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInstructionBlockMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_blockInstructionBlockMap constructor_mapWithMapToOverride (const class GALGAS_blockInstructionBlockMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                      const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                   class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                   class GALGAS_location constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionForKey (class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                       class GALGAS_string constinArgument1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfBlockForKey (class GALGAS_location constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                   class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlockForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInstructionBlockMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_pic_31__38_InstructionList & outOperand1,
                                                     class GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                     class GALGAS_location & outOperand3) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockInstructionBlockMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockInstructionBlockMap ;
 
} ; // End of GALGAS_blockInstructionBlockMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockInstructionBlockMap : public cGenericAbstractEnumerator {
  public : cEnumerator_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockInstructionBlockMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@blockInstructionBlockMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInstructionBlockMap : public cMapElement {
//--- Map attributes
  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public : GALGAS_location mProperty_mEndOfBlock ;

//--- Constructor
  public : cMapElement_blockInstructionBlockMap (const GALGAS_lstring & inKey,
                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                 const GALGAS_location & in_mEndOfBlock
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
//
// Phase 1: @blockInstructionBlockMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInstructionBlockMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

  public : GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;

  public : GALGAS_location mProperty_mEndOfBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_blockInstructionBlockMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_blockInstructionBlockMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                       const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                       const GALGAS_location & in_mEndOfBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInstructionBlockMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInstructionBlockMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                    const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                    const class GALGAS_location & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlock (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockInstructionBlockMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @blockInitialBankSelectionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInitialBankSelectionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInitialBankSelectionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockInitialBankSelectionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inSource) ;
  public : GALGAS_blockInitialBankSelectionMap & operator = (const GALGAS_blockInitialBankSelectionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInitialBankSelectionMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInitialBankSelectionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_blockInitialBankSelectionMap constructor_mapWithMapToOverride (const class GALGAS_blockInitialBankSelectionMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_string constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInitialBankSelectionForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSourceBlockForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialBankSelectionForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceBlockForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInitialBankSelectionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1,
                                                     class GALGAS_string & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockInitialBankSelectionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockInitialBankSelectionMap ;
 
} ; // End of GALGAS_blockInitialBankSelectionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockInitialBankSelectionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSourceBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockInitialBankSelectionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@blockInitialBankSelectionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInitialBankSelectionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mInitialBankSelection ;
  public : GALGAS_string mProperty_mSourceBlock ;

//--- Constructor
  public : cMapElement_blockInitialBankSelectionMap (const GALGAS_lstring & inKey,
                                                     const GALGAS_uint & in_mInitialBankSelection,
                                                     const GALGAS_string & in_mSourceBlock
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
//
// Phase 1: @blockInitialBankSelectionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInitialBankSelectionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mInitialBankSelection ;

  public : GALGAS_string mProperty_mSourceBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_blockInitialBankSelectionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_blockInitialBankSelectionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_blockInitialBankSelectionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_uint & in_mInitialBankSelection,
                                                           const GALGAS_string & in_mSourceBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInitialBankSelectionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInitialBankSelectionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_uint & inOperand1,
                                                                                        const class GALGAS_string & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialBankSelection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceBlock (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockInitialBankSelectionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                       class GALGAS_stringset & ioArgument0,
                                                                                                       const class GALGAS_blockInstructionBlockMap constinArgument1,
                                                                                                       const class GALGAS_string constinArgument2,
                                                                                                       const class GALGAS_uint constinArgument3,
                                                                                                       class GALGAS_blockInitialBankSelectionMap & ioArgument4,
                                                                                                       class GALGAS_bool & ioArgument5,
                                                                                                       class GALGAS_bool & ioArgument6,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addVisitedBlocks (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           GALGAS_stringset & io_ioVisitedBlockSet,
                                           const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                           const GALGAS_string constin_inCurrentBlockName,
                                           const GALGAS_uint constin_inInitialBlockSetting,
                                           GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           GALGAS_bool & io_ioContinuesInSequence,
                                           GALGAS_bool & io_ioContinueAccessibilityExploration,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                    const class GALGAS_uint constinArgument0,
                                                                                                    const class GALGAS_uint constinArgument1,
                                                                                                    const class GALGAS_registerTable constinArgument2,
                                                                                                    const class GALGAS_constantMap constinArgument3,
                                                                                                    class GALGAS_uint & ioArgument4,
                                                                                                    class GALGAS_ipic_31__38_BlockList & ioArgument5,
                                                                                                    class GALGAS_stringset & ioArgument6,
                                                                                                    const class GALGAS_string constinArgument7,
                                                                                                    class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument8,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateBlock (const int32_t inClassIndex,
                                         extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const GALGAS_uint constin_inAccessBankSplitOffset,
                                        const GALGAS_uint constin_inCurrentBank,
                                        const GALGAS_registerTable constin_inRegisterTable,
                                        const GALGAS_constantMap constin_inConstantMap,
                                        GALGAS_uint & io_ioLocalLabelIndex,
                                        GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        GALGAS_stringset & io_ioUsedRegisters,
                                        const GALGAS_string constin_inLabelForBlock,
                                        GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition) (const class cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                          const class GALGAS_uint constinArgument0,
                                                                                          const class GALGAS_uint constinArgument1,
                                                                                          const class GALGAS_registerTable constinArgument2,
                                                                                          const class GALGAS_constantMap constinArgument3,
                                                                                          class GALGAS_uint & ioArgument4,
                                                                                          class GALGAS_ipic_31__38_BlockList & ioArgument5,
                                                                                          const class GALGAS_lstring constinArgument6,
                                                                                          const class GALGAS_lstring constinArgument7,
                                                                                          class GALGAS_stringset & ioArgument8,
                                                                                          class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument9,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeCondition (const int32_t inClassIndex,
                                            extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (const class cPtr_pic_31__38_ConditionExpression * inObject,
                                           const GALGAS_uint constin_inAccessBankSplitOffset,
                                           const GALGAS_uint constin_inCurrentBank,
                                           const GALGAS_registerTable constin_inRegisterTable,
                                           const GALGAS_constantMap constin_inConstantMap,
                                           GALGAS_uint & io_ioLocalLabelIndex,
                                           GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const GALGAS_lstring constin_inConditionTrueLabel,
                                           const GALGAS_lstring constin_inConditionFalseLabel,
                                           GALGAS_stringset & io_ioUsedRegisters,
                                           GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                 const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                 const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                 const class GALGAS_string constinArgument3,
                                                                                                 class GALGAS_bool & ioArgument4,
                                                                                                 class GALGAS_string & ioArgument5,
                                                                                                 class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument6,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeTerminator (const int32_t inClassIndex,
                                              extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const GALGAS_string constin_inBlockLabel,
                                             GALGAS_bool & io_ioOptimizationDone,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optimizeFlagStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optimizeFlagStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_bool mProperty_mRemoveEmptyRoutine ;

  public : GALGAS_bool mProperty_mJSRtoRETLWreplacedByMOVLW ;

  public : GALGAS_bool mProperty_mJSRfollowedByRETreplacedByJUMP ;

  public : GALGAS_bool mProperty_mMOVLWfollowedByRETreplacedByRETLW ;

  public : GALGAS_bool mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;

  public : GALGAS_bool mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;

  public : GALGAS_bool mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optimizeFlagStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_optimizeFlagStruct (void) ;

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
  public : static class GALGAS_optimizeFlagStruct constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_bool & inOperand3,
                                                                   const class GALGAS_bool & inOperand4,
                                                                   const class GALGAS_bool & inOperand5,
                                                                   const class GALGAS_bool & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRfollowedByRETreplacedByJUMP (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoOneInstructionRoutineReplacedByInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoRETLWreplacedByMOVLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMOVLWfollowedByRETreplacedByRETLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mRemoveEmptyRoutine (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optimizeFlagStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                                                                          const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                          const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                          const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                          const class GALGAS_string constinArgument3,
                                                                                                          class GALGAS_bool & ioArgument4,
                                                                                                          class GALGAS_string & ioArgument5,
                                                                                                          class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument6,
                                                                                                          class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument7,
                                                                                                          class GALGAS_bool & outArgument8,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getOptimizedTerminators (const int32_t inClassIndex,
                                                   extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                  const GALGAS_string constin_inBlockLabel,
                                                  GALGAS_bool & io_ioOptimizationDone,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  GALGAS_bool & out_outIdenticalTerminators,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_JumpTerminator class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_ipic_31__38_JumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_jumpInstructionKind & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_JumpTerminator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18JumpTerminator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_JumpTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_lstring mProperty_mLabel ;
  public : GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mLabel,
                                            const GALGAS_jumpInstructionKind & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_jumpInstructionKind inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                              const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                              const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                                                                              class GALGAS_stringset & ioArgument2,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterTerminatorReferencedLabels (const int32_t inClassIndex,
                                                           extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                          GALGAS_stringset & io_ioReferencedBlockSet,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                             const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                                                                             class GALGAS_stringset & ioArgument2,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInstructionReferencedLabels (const int32_t inClassIndex,
                                                            extensionMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                           GALGAS_stringset & io_ioReferencedBlockSet,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeInstruction (const int32_t inClassIndex,
                                               extensionMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const class GALGAS_ipic_31__38_SequentialInstructionList inObject,
                                                       const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                       const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                       class GALGAS_stringset & io_ioReferencedBlockSet,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@bool flagValue' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_flagValue (const class GALGAS_bool & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @blockInvocationGraph graph
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInvocationGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_blockInvocationGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInvocationGraph extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInvocationGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_string inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_stringlist & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_stringlist & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_stringlist & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_stringlist & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_stringlist & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_stringlist & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_stringlist & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                 const class GALGAS_stringset & constinOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInvocationGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInvocationGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                        const class GALGAS_stringset & constinOperand1,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockInvocationGraph class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInvocationGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                            const class GALGAS_lstring constinArgument0,
                                                                                                            class GALGAS_string & ioArgument1,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildInstructionInvocationGraph (const int32_t inClassIndex,
                                                           extensionMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const GALGAS_lstring constin_inBlockLabel,
                                                          GALGAS_string & io_ioGraphVizString,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                                             class GALGAS_string & ioArgument1,
                                                                                                             const class GALGAS_bool constinArgument2,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildTerminatorInvocationGraph (const int32_t inClassIndex,
                                                          extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GALGAS_lstring constin_inBlockLabel,
                                                         GALGAS_string & io_ioGraphVizString,
                                                         const GALGAS_bool constin_inDottedArrow,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                   const class GALGAS_string constinArgument0,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_needToInsertJumpInstruction (const int32_t inClassIndex,
                                                       enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_needToInsertJumpInstruction (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                   const GALGAS_string constin_inNextBlockLabel,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                          const class GALGAS_lstring constinArgument0,
                                                                                                          class GALGAS_blockInvocationGraph & ioArgument1,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildTerminatorOrderedGraph (const int32_t inClassIndex,
                                                       extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const GALGAS_lstring constin_inBlockLabel,
                                                      GALGAS_blockInvocationGraph & io_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @clusterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_clusterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_clusterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_clusterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_clusterList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_clusterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_clusterList constructor_listWithValue (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_clusterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_clusterList add_operation (const GALGAS_clusterList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_clusterList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockListAtIndex (class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_mBlockListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_clusterList ;
 
} ; // End of GALGAS_clusterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_clusterList : public cGenericAbstractEnumerator {
  public : cEnumerator_clusterList (const GALGAS_clusterList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_clusterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @clusterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_clusterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_ipic_31__38_BlockList mProperty_mBlockList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_clusterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_clusterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_clusterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_clusterList_2D_element (const GALGAS_ipic_31__38_BlockList & in_mBlockList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_clusterList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_clusterList_2D_element constructor_new (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_clusterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_mBlockList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_clusterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @neededConversionForClusterOrder map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_neededConversionForClusterOrder ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_neededConversionForClusterOrder_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_neededConversionForClusterOrder : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_neededConversionForClusterOrder (void) ;

//--------------------------------- Handle copy
  public : GALGAS_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inSource) ;
  public : GALGAS_neededConversionForClusterOrder & operator = (const GALGAS_neededConversionForClusterOrder & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_neededConversionForClusterOrder extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_neededConversionForClusterOrder constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_neededConversionForClusterOrder constructor_mapWithMapToOverride (const class GALGAS_neededConversionForClusterOrder & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConversionsForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mConversionsForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_neededConversionForClusterOrder getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_neededConversionForClusterOrder * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_neededConversionForClusterOrder ;
 
} ; // End of GALGAS_neededConversionForClusterOrder class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_neededConversionForClusterOrder : public cGenericAbstractEnumerator {
  public : cEnumerator_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mConversions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_neededConversionForClusterOrder_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@neededConversionForClusterOrder' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_neededConversionForClusterOrder : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mConversions ;

//--- Constructor
  public : cMapElement_neededConversionForClusterOrder (const GALGAS_lstring & inKey,
                                                        const GALGAS_uint & in_mConversions
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
//
// Phase 1: @neededConversionForClusterOrder_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_neededConversionForClusterOrder_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mConversions ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_neededConversionForClusterOrder_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_neededConversionForClusterOrder_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_neededConversionForClusterOrder_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & in_lkey,
                                                              const GALGAS_uint & in_mConversions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_neededConversionForClusterOrder_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_neededConversionForClusterOrder_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mConversions (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_neededConversionForClusterOrder_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @generatedCodeMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_generatedCodeMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_generatedCodeMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generatedCodeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_generatedCodeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_generatedCodeMap (const GALGAS_generatedCodeMap & inSource) ;
  public : GALGAS_generatedCodeMap & operator = (const GALGAS_generatedCodeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generatedCodeMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_generatedCodeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_generatedCodeMap constructor_mapWithMapToOverride (const class GALGAS_generatedCodeMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_codeList & inOperand1,
                                                      const class GALGAS_ipic_31__38_SequentialInstruction & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_codeList constinArgument1,
                                                   class GALGAS_ipic_31__38_SequentialInstruction constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCodeForKey (class GALGAS_codeList constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionForKey (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_codeList & outArgument1,
                                                   class GALGAS_ipic_31__38_SequentialInstruction & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_mCodeForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstructionForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_generatedCodeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_codeList & outOperand1,
                                                     class GALGAS_ipic_31__38_SequentialInstruction & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_generatedCodeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_generatedCodeMap ;
 
} ; // End of GALGAS_generatedCodeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_generatedCodeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_generatedCodeMap (const GALGAS_generatedCodeMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_codeList current_mCode (LOCATION_ARGS) const ;
  public : class GALGAS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_generatedCodeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@generatedCodeMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_generatedCodeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_codeList mProperty_mCode ;
  public : GALGAS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;

//--- Constructor
  public : cMapElement_generatedCodeMap (const GALGAS_lstring & inKey,
                                         const GALGAS_codeList & in_mCode,
                                         const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction
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
//
// Phase 1: @generatedCodeMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generatedCodeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_codeList mProperty_mCode ;

  public : GALGAS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_generatedCodeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_generatedCodeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_codeList & in_mCode,
                                               const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generatedCodeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_generatedCodeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_codeList & inOperand1,
                                                                            const class GALGAS_ipic_31__38_SequentialInstruction & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_mCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generatedCodeMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_x_34_string (const class GALGAS_uint & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x6string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_x_36_string (const class GALGAS_uint & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @blockMapForStackComputation map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockMapForStackComputation ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockMapForStackComputation_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockMapForStackComputation : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockMapForStackComputation (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inSource) ;
  public : GALGAS_blockMapForStackComputation & operator = (const GALGAS_blockMapForStackComputation & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockMapForStackComputation extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockMapForStackComputation constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_blockMapForStackComputation constructor_mapWithMapToOverride (const class GALGAS_blockMapForStackComputation & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_ipic_31__38_Block & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_ipic_31__38_Block constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockForKey (class GALGAS_ipic_31__38_Block constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_ipic_31__38_Block & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlockForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockMapForStackComputation getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_ipic_31__38_Block & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockMapForStackComputation * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockMapForStackComputation ;
 
} ; // End of GALGAS_blockMapForStackComputation class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockMapForStackComputation : public cGenericAbstractEnumerator {
  public : cEnumerator_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockMapForStackComputation_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@blockMapForStackComputation' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockMapForStackComputation : public cMapElement {
//--- Map attributes
  public : GALGAS_ipic_31__38_Block mProperty_mBlock ;

//--- Constructor
  public : cMapElement_blockMapForStackComputation (const GALGAS_lstring & inKey,
                                                    const GALGAS_ipic_31__38_Block & in_mBlock
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
//
// Phase 1: @blockMapForStackComputation_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockMapForStackComputation_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_ipic_31__38_Block mProperty_mBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_blockMapForStackComputation_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_blockMapForStackComputation_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_ipic_31__38_Block & in_mBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockMapForStackComputation_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockMapForStackComputation_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_ipic_31__38_Block & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlock (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockMapForStackComputation_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineCallMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineCallMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineCallMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineCallMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineCallMap (const GALGAS_routineCallMap & inSource) ;
  public : GALGAS_routineCallMap & operator = (const GALGAS_routineCallMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineCallMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineCallMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_routineCallMap constructor_mapWithMapToOverride (const class GALGAS_routineCallMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_stringset & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_stringset constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCalledRoutineSetForKey (class GALGAS_stringset constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminatorStackNeedsForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mCalledRoutineSetForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorStackNeedsForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineCallMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_stringset & outOperand1,
                                                     class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineCallMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineCallMap ;
 
} ; // End of GALGAS_routineCallMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineCallMap : public cGenericAbstractEnumerator {
  public : cEnumerator_routineCallMap (const GALGAS_routineCallMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineCallMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineCallMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineCallMap : public cMapElement {
//--- Map attributes
  public : GALGAS_stringset mProperty_mCalledRoutineSet ;
  public : GALGAS_uint mProperty_mTerminatorStackNeeds ;

//--- Constructor
  public : cMapElement_routineCallMap (const GALGAS_lstring & inKey,
                                       const GALGAS_stringset & in_mCalledRoutineSet,
                                       const GALGAS_uint & in_mTerminatorStackNeeds
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
//
// Phase 1: @routineCallMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineCallMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_stringset mProperty_mCalledRoutineSet ;

  public : GALGAS_uint mProperty_mTerminatorStackNeeds ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineCallMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineCallMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_routineCallMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineCallMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_stringset & in_mCalledRoutineSet,
                                             const GALGAS_uint & in_mTerminatorStackNeeds) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineCallMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineCallMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_stringset & inOperand1,
                                                                          const class GALGAS_uint & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mCalledRoutineSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorStackNeeds (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineCallMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineStackRequirementMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineStackRequirementMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineStackRequirementMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineStackRequirementMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineStackRequirementMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inSource) ;
  public : GALGAS_routineStackRequirementMap & operator = (const GALGAS_routineStackRequirementMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineStackRequirementMap extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineStackRequirementMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_routineStackRequirementMap constructor_mapWithMapToOverride (const class GALGAS_routineStackRequirementMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLevelsForKey (class GALGAS_uint constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLevelsForKey (const class GALGAS_string & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineStackRequirementMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineStackRequirementMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineStackRequirementMap ;
 
} ; // End of GALGAS_routineStackRequirementMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineStackRequirementMap : public cGenericAbstractEnumerator {
  public : cEnumerator_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLevels (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineStackRequirementMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineStackRequirementMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineStackRequirementMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mLevels ;

//--- Constructor
  public : cMapElement_routineStackRequirementMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & in_mLevels
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
//
// Phase 1: @routineStackRequirementMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineStackRequirementMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mLevels ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineStackRequirementMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineStackRequirementMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_routineStackRequirementMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_uint & in_mLevels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineStackRequirementMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineStackRequirementMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_uint & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLevels (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineStackRequirementMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                          class GALGAS_stringset & ioArgument0,
                                                                                                                          class GALGAS_stringset & ioArgument1,
                                                                                                                          class GALGAS_uint & outArgument2,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_exploreAccessibleBlocksForStackComputations (const int32_t inClassIndex,
                                                                       extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_exploreAccessibleBlocksForStackComputations (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                      GALGAS_stringset & io_ioBlockToExploreSet,
                                                                      GALGAS_stringset & io_ioExploredBlockSet,
                                                                      GALGAS_uint & out_outStackNeeds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                      class GALGAS_stringset & ioArgument0,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildCalledRoutineSetForStackComputations (const int32_t inClassIndex,
                                                                     extensionMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildCalledRoutineSetForStackComputations (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    GALGAS_stringset & io_ioRoutineCalledSet,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @blockDurationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockDurationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockDurationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockDurationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockDurationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockDurationMap (const GALGAS_blockDurationMap & inSource) ;
  public : GALGAS_blockDurationMap & operator = (const GALGAS_blockDurationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockDurationMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockDurationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_blockDurationMap constructor_mapWithMapToOverride (const class GALGAS_blockDurationMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMaxDurationForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMinDurationForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxDurationForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinDurationForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockDurationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1,
                                                     class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockDurationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockDurationMap ;
 
} ; // End of GALGAS_blockDurationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockDurationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_blockDurationMap (const GALGAS_blockDurationMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMaxDuration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockDurationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@blockDurationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockDurationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mMinDuration ;
  public : GALGAS_uint mProperty_mMaxDuration ;

//--- Constructor
  public : cMapElement_blockDurationMap (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & in_mMinDuration,
                                         const GALGAS_uint & in_mMaxDuration
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
//
// Phase 1: @blockDurationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockDurationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mMinDuration ;

  public : GALGAS_uint mProperty_mMaxDuration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_blockDurationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_blockDurationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_blockDurationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_uint & in_mMinDuration,
                                               const GALGAS_uint & in_mMaxDuration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockDurationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockDurationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_uint & inOperand1,
                                                                            const class GALGAS_uint & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxDuration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinDuration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockDurationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                       const class GALGAS_blockDurationMap constinArgument0,
                                                                                                       const class GALGAS_string constinArgument1,
                                                                                                       class GALGAS_uint & outArgument2,
                                                                                                       class GALGAS_uint & outArgument3,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_terminatorMinMaxDuration (const int32_t inClassIndex,
                                                    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                                   const GALGAS_string constin_inNextLabel,
                                                   GALGAS_uint & out_outMin,
                                                   GALGAS_uint & out_outMax,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_SingleInstructionTerminator_duration) (const class cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                                                                           const class GALGAS_blockDurationMap constinArgument0,
                                                                                           const class GALGAS_string constinArgument1,
                                                                                           class GALGAS_uint & outArgument2,
                                                                                           class GALGAS_uint & outArgument3,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_duration (const int32_t inClassIndex,
                                    extensionMethodSignature_ipic_31__38_SingleInstructionTerminator_duration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (const class cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                   const GALGAS_string constin_inNextLabel,
                                   GALGAS_uint & out_outMin,
                                   GALGAS_uint & out_outMax,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                           class GALGAS_blockDurationMap inArgument0,
                                                                                           class GALGAS_uint & outArgument1,
                                                                                           class GALGAS_uint & outArgument2,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_minMaxDuration (const int32_t inClassIndex,
                                          extensionMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         GALGAS_blockDurationMap in_inExploredBlockMap,
                                         GALGAS_uint & out_outMin,
                                         GALGAS_uint & out_outMax,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationInRam handleDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_declarationInRam_handleDeclaration) (const class cPtr_declarationInRam * inObject,
                                                                             const class GALGAS_constantMap constinArgument0,
                                                                             class GALGAS_stringset & ioArgument1,
                                                                             class GALGAS_ramBankTable & ioArgument2,
                                                                             class GALGAS_registerTable & ioArgument3,
                                                                             const class GALGAS_lstring constinArgument4,
                                                                             class GALGAS_declaredByteMap & ioArgument5,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_handleDeclaration (const int32_t inClassIndex,
                                             extensionMethodSignature_declarationInRam_handleDeclaration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_handleDeclaration (const class cPtr_declarationInRam * inObject,
                                            const GALGAS_constantMap constin_inConstantMap,
                                            GALGAS_stringset & io_ioUsedRegisters,
                                            GALGAS_ramBankTable & io_ioRamBank,
                                            GALGAS_registerTable & io_ioRegisterTable,
                                            const GALGAS_lstring constin_inCurrentRamBank,
                                            GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declaredByteMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredByteMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_declaredByteMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredByteMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_declaredByteMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_declaredByteMap (const GALGAS_declaredByteMap & inSource) ;
  public : GALGAS_declaredByteMap & operator = (const GALGAS_declaredByteMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredByteMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declaredByteMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_declaredByteMap constructor_mapWithMapToOverride (const class GALGAS_declaredByteMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_declaredByteMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_declaredByteMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredByteMap ;
 
} ; // End of GALGAS_declaredByteMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declaredByteMap : public cGenericAbstractEnumerator {
  public : cEnumerator_declaredByteMap (const GALGAS_declaredByteMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declaredByteMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@declaredByteMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredByteMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_declaredByteMap (const GALGAS_lstring & inKey
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
//
//LEXIQUE piccoloDevice_5F_lexique
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

class cTokenFor_piccoloDevice_5F_lexique : public cToken {
  public : utf32 mLexicalAttribute_charValue ;
  public : C_String mLexicalAttribute_identifierString ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_piccoloDevice_5F_lexique (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S                                                
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_piccoloDevice_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_piccoloDevice_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_integer,
   kToken_string,
   kToken_comment,
   kToken_controller,
   kToken_processor,
   kToken_romsize,
   kToken_eepromsize,
   kToken_bank,
   kToken_unusedregister,
   kToken_mirrorat,
   kToken_ram,
   kToken_register,
   kToken_at,
   kToken_to,
   kToken_configuration,
   kToken_width,
   kToken_description,
   kToken_mask,
   kToken_illegal,
   kToken_message,
   kToken_setting,
   kToken__3C_,
   kToken__3E_,
   kToken__2C_,
   kToken__2D_,
   kToken__2F_,
   kToken__3B_,
   kToken__3A_,
   kToken__5B_,
   kToken__5D_,
   kToken__7B_,
   kToken__7D_} ;

//--- Key words table 'controlKeyWordList'
  public : static int16_t search_into_controlKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public : utf32 attributeValue_charValue (void) const ;
  public : C_String attributeValue_identifierString (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Unicode test functions

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 33 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declaredByteMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredByteMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_declaredByteMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_declaredByteMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_declaredByteMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredByteMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declaredByteMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declaredByteMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerTable_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uintlist mProperty_mRegisterAddressList ;

  public : GALGAS_uint mProperty_mSize ;

  public : GALGAS_bitSliceTable mProperty_mBitSliceTable ;

  public : GALGAS_string mProperty_mBitDefinitionString ;

  public : GALGAS_registerProtection mProperty_mProtection ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_registerTable_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_uintlist & in_mRegisterAddressList,
                                            const GALGAS_uint & in_mSize,
                                            const GALGAS_bitSliceTable & in_mBitSliceTable,
                                            const GALGAS_string & in_mBitDefinitionString,
                                            const GALGAS_registerProtection & in_mProtection) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_uintlist & inOperand1,
                                                                         const class GALGAS_uint & inOperand2,
                                                                         const class GALGAS_bitSliceTable & inOperand3,
                                                                         const class GALGAS_string & inOperand4,
                                                                         const class GALGAS_registerProtection & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerProtection getter_mProtection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mRegisterAddressList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerTable_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerTable checkPrivateAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkPrivateAccess (const class GALGAS_registerTable inObject,
                                         const class GALGAS_lstring constin_inKey,
                                         const class GALGAS_bool constin_inWriteAccess,
                                         const class GALGAS_registerProtection constin_inRegisterProtection,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ramBankTable_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ramBankTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mFirstAddress ;

  public : GALGAS_uint mProperty_mFirstFreeAddress ;

  public : GALGAS_uint mProperty_mLastAddressPlusOne ;

  public : GALGAS_uintlist mProperty_mMirrorOffsetList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ramBankTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ramBankTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_ramBankTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ramBankTable_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_uint & in_mFirstAddress,
                                           const GALGAS_uint & in_mFirstFreeAddress,
                                           const GALGAS_uint & in_mLastAddressPlusOne,
                                           const GALGAS_uintlist & in_mMirrorOffsetList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ramBankTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ramBankTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_uint & inOperand1,
                                                                        const class GALGAS_uint & inOperand2,
                                                                        const class GALGAS_uint & inOperand3,
                                                                        const class GALGAS_uintlist & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstFreeAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLastAddressPlusOne (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mMirrorOffsetList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ramBankTable_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @illegalMaskList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_illegalMaskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_illegalMaskList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_illegalMaskList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_luint & in_mIllegalValue,
                                                  const class GALGAS_luint & in_mIllegalMask,
                                                  const class GALGAS_lstring & in_mDescription
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_illegalMaskList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_illegalMaskList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_illegalMaskList constructor_listWithValue (const class GALGAS_luint & inOperand0,
                                                                          const class GALGAS_luint & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_illegalMaskList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_luint & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_illegalMaskList add_operation (const GALGAS_illegalMaskList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_illegalMaskList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_luint constinArgument0,
                                                       class GALGAS_luint constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_luint & outArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_luint & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_luint & outArgument0,
                                                       class GALGAS_luint & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDescriptionAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIllegalMaskAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIllegalValueAtIndex (class GALGAS_luint constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_luint & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_luint & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescriptionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalMaskAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_illegalMaskList ;
 
} ; // End of GALGAS_illegalMaskList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_illegalMaskList : public cGenericAbstractEnumerator {
  public : cEnumerator_illegalMaskList (const GALGAS_illegalMaskList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_illegalMaskList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @illegalMaskList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_illegalMaskList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_luint mProperty_mIllegalValue ;

  public : GALGAS_luint mProperty_mIllegalMask ;

  public : GALGAS_lstring mProperty_mDescription ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_illegalMaskList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_illegalMaskList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_illegalMaskList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_illegalMaskList_2D_element (const GALGAS_luint & in_mIllegalValue,
                                              const GALGAS_luint & in_mIllegalMask,
                                              const GALGAS_lstring & in_mDescription) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_illegalMaskList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_illegalMaskList_2D_element constructor_new (const class GALGAS_luint & inOperand0,
                                                                           const class GALGAS_luint & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalMask (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_illegalMaskList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configRegisterMaskMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMaskMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configRegisterMaskMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMaskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_configRegisterMaskMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inSource) ;
  public : GALGAS_configRegisterMaskMap & operator = (const GALGAS_configRegisterMaskMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMaskMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_configRegisterMaskMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_configRegisterMaskMap constructor_mapWithMapToOverride (const class GALGAS_configRegisterMaskMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_fieldSettingMap & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   class GALGAS_fieldSettingMap constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDescriptionForKey (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFieldSettingMapForKey (class GALGAS_fieldSettingMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMaskValueForKey (class GALGAS_luint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_fieldSettingMap & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescriptionForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fieldSettingMap getter_mFieldSettingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMaskValueForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_luint & outOperand1,
                                                     class GALGAS_lstring & outOperand2,
                                                     class GALGAS_fieldSettingMap & outOperand3) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_configRegisterMaskMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMaskMap ;
 
} ; // End of GALGAS_configRegisterMaskMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMaskMap : public cGenericAbstractEnumerator {
  public : cEnumerator_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
  public : class GALGAS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_configRegisterMaskMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@configRegisterMaskMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMaskMap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mProperty_mMaskValue ;
  public : GALGAS_lstring mProperty_mDescription ;
  public : GALGAS_fieldSettingMap mProperty_mFieldSettingMap ;

//--- Constructor
  public : cMapElement_configRegisterMaskMap (const GALGAS_lstring & inKey,
                                              const GALGAS_luint & in_mMaskValue,
                                              const GALGAS_lstring & in_mDescription,
                                              const GALGAS_fieldSettingMap & in_mFieldSettingMap
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
//
// Phase 1: @configRegisterMaskMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMaskMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_luint mProperty_mMaskValue ;

  public : GALGAS_lstring mProperty_mDescription ;

  public : GALGAS_fieldSettingMap mProperty_mFieldSettingMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_configRegisterMaskMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_configRegisterMaskMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_configRegisterMaskMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_luint & in_mMaskValue,
                                                    const GALGAS_lstring & in_mDescription,
                                                    const GALGAS_fieldSettingMap & in_mFieldSettingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMaskMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_configRegisterMaskMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_luint & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_fieldSettingMap & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fieldSettingMap getter_mFieldSettingMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMaskValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configRegisterMaskMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@configRegisterMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mProperty_mRegisterAddress ;
  public : GALGAS_luint mProperty_mRegisterWidth ;
  public : GALGAS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;
  public : GALGAS_illegalMaskList mProperty_mIllegalMaskList ;

//--- Constructor
  public : cMapElement_configRegisterMap (const GALGAS_lstring & inKey,
                                          const GALGAS_luint & in_mRegisterAddress,
                                          const GALGAS_luint & in_mRegisterWidth,
                                          const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                          const GALGAS_illegalMaskList & in_mIllegalMaskList
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
//
// Phase 1: @configRegisterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_luint mProperty_mRegisterAddress ;

  public : GALGAS_luint mProperty_mRegisterWidth ;

  public : GALGAS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;

  public : GALGAS_illegalMaskList mProperty_mIllegalMaskList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_configRegisterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_luint & in_mRegisterAddress,
                                                const GALGAS_luint & in_mRegisterWidth,
                                                const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                const GALGAS_illegalMaskList & in_mIllegalMaskList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_configRegisterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_luint & inOperand1,
                                                                             const class GALGAS_luint & inOperand2,
                                                                             const class GALGAS_configRegisterMaskMap & inOperand3,
                                                                             const class GALGAS_illegalMaskList & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_mConfigRegisterMaskMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_mIllegalMaskList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterWidth (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configRegisterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'piccoloDevice_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_piccoloDevice_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_piccoloDevice_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_start_5F_symbol_ (class GALGAS_piccoloDeviceModel & outArgument0,
                                                class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GALGAS_piccoloDeviceModel & outArgument0,
                                                                     C_Lexique_piccoloDevice_5F_lexique * inLexique) ;

  protected : void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccoloDevice_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchOverflowMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchOverflowMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_key ;

  public : GALGAS_stringlist mProperty_mList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_branchOverflowMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_branchOverflowMap_2D_element (void) ;

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
  public : static class GALGAS_branchOverflowMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_stringlist & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchOverflowMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_LABEL class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_LABEL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mProperty_mLabel ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLabel (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsRegular (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_bool mProperty_mIsRegular ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                        const GALGAS_bool & in_mIsRegular
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRegular (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsRegular (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_uint & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPage (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_uint mProperty_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_uint & in_mPage
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPage (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

