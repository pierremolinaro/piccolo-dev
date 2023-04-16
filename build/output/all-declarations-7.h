#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                          const class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                          const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FDA_5F_base_5F_code (class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_skip_instruction_FDA class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                           const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                           const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination
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
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForBlockOptimization map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForBlockOptimization : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_symbolTableForBlockOptimization (void) ;

//--------------------------------- Handle copy
  public: GALGAS_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inSource) ;
  public: GALGAS_symbolTableForBlockOptimization & operator = (const GALGAS_symbolTableForBlockOptimization & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForBlockOptimization extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForBlockOptimization constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_symbolTableForBlockOptimization constructor_mapWithMapToOverride (const class GALGAS_symbolTableForBlockOptimization & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionBlockIndexForKey (class GALGAS_uint constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionBlockIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_symbolTableForBlockOptimization getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForBlockOptimization * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForBlockOptimization ;
 
} ; // End of GALGAS_symbolTableForBlockOptimization class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForBlockOptimization : public cGenericAbstractEnumerator {
  public: cEnumerator_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_symbolTableForBlockOptimization_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@symbolTableForBlockOptimization' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mDefinitionBlockIndex ;

//--- Constructor
  public: cMapElement_symbolTableForBlockOptimization (const GALGAS_lstring & inKey,
                                                       const GALGAS_uint & in_mDefinitionBlockIndex
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
// Phase 1: @symbolTableForBlockOptimization_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForBlockOptimization_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mDefinitionBlockIndex ;
  public: inline GALGAS_uint readProperty_mDefinitionBlockIndex (void) const {
    return mProperty_mDefinitionBlockIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_symbolTableForBlockOptimization_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_symbolTableForBlockOptimization_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionBlockIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionBlockIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_symbolTableForBlockOptimization_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_uint & in_mDefinitionBlockIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForBlockOptimization_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForBlockOptimization_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_symbolTableForBlockOptimization_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForClusterOrdering map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForClusterOrdering ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForClusterOrdering : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_symbolTableForClusterOrdering (void) ;

//--------------------------------- Handle copy
  public: GALGAS_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inSource) ;
  public: GALGAS_symbolTableForClusterOrdering & operator = (const GALGAS_symbolTableForClusterOrdering & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForClusterOrdering extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForClusterOrdering constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_symbolTableForClusterOrdering constructor_mapWithMapToOverride (const class GALGAS_symbolTableForClusterOrdering & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClusterForKey (class GALGAS_uint constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mClusterForKey (const class GALGAS_string & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_symbolTableForClusterOrdering getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForClusterOrdering * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForClusterOrdering ;
 
} ; // End of GALGAS_symbolTableForClusterOrdering class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForClusterOrdering : public cGenericAbstractEnumerator {
  public: cEnumerator_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mCluster (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_symbolTableForClusterOrdering_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@symbolTableForClusterOrdering' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForClusterOrdering : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mCluster ;

//--- Constructor
  public: cMapElement_symbolTableForClusterOrdering (const GALGAS_lstring & inKey,
                                                     const GALGAS_uint & in_mCluster
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
// Phase 1: @symbolTableForClusterOrdering_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForClusterOrdering_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mCluster ;
  public: inline GALGAS_uint readProperty_mCluster (void) const {
    return mProperty_mCluster ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_symbolTableForClusterOrdering_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_symbolTableForClusterOrdering_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCluster (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCluster = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_symbolTableForClusterOrdering_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_symbolTableForClusterOrdering_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_uint & in_mCluster) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForClusterOrdering_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForClusterOrdering_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_uint & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_symbolTableForClusterOrdering_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_symbolTableForClusterOrdering_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const class GALGAS_uint constin_inAddress,
                                                            const class GALGAS_string constin_inBlockLabel,
                                                            const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            class GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchOverflowMap list map
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchOverflowMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_branchOverflowMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_branchOverflowMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchOverflowMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_listForKey (const class GALGAS_string & constinOperand0
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_branchOverflowMap ;
 
} ; // End of GALGAS_branchOverflowMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_branchOverflowMap : public cGenericAbstractEnumerator {
  public: cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_branchOverflowMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForRelativesResolution map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForRelativesResolution ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForRelativesResolution : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_symbolTableForRelativesResolution (void) ;

//--------------------------------- Handle copy
  public: GALGAS_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inSource) ;
  public: GALGAS_symbolTableForRelativesResolution & operator = (const GALGAS_symbolTableForRelativesResolution & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForRelativesResolution extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForRelativesResolution constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_symbolTableForRelativesResolution constructor_mapWithMapToOverride (const class GALGAS_symbolTableForRelativesResolution & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelAddressForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLabelAddressForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_symbolTableForRelativesResolution getter_overriddenMap (C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForRelativesResolution * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForRelativesResolution ;
 
} ; // End of GALGAS_symbolTableForRelativesResolution class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForRelativesResolution : public cGenericAbstractEnumerator {
  public: cEnumerator_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mLabelAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_symbolTableForRelativesResolution_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@symbolTableForRelativesResolution' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForRelativesResolution : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mLabelAddress ;

//--- Constructor
  public: cMapElement_symbolTableForRelativesResolution (const GALGAS_lstring & inKey,
                                                         const GALGAS_uint & in_mLabelAddress
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
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const class GALGAS_uint constin_inAddress,
                                                           const class GALGAS_string constin_inBlockLabel,
                                                           const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const class GALGAS_string constin_inNextBlockLabel,
                                                           class GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const class GALGAS_uint constin_inAddress,
                                                                    const class GALGAS_string constin_inBlockLabel,
                                                                    const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const class GALGAS_string constin_inNextBlockLabel,
                                                                    class GALGAS_uint & io_ioConversionCount,
                                                                    class GALGAS_string & io_ioListFileContents,
                                                                    class GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForRelativesResolution_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForRelativesResolution_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mLabelAddress ;
  public: inline GALGAS_uint readProperty_mLabelAddress (void) const {
    return mProperty_mLabelAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_symbolTableForRelativesResolution_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_symbolTableForRelativesResolution_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelAddress = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_symbolTableForRelativesResolution_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_symbolTableForRelativesResolution_2D_element (const GALGAS_lstring & in_lkey,
                                                               const GALGAS_uint & in_mLabelAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForRelativesResolution_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForRelativesResolution_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_uint & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_symbolTableForRelativesResolution_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_symbolTableForRelativesResolution_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @codeList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_codeList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_codeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mAssemblyCode,
                                                 const class GALGAS_uintlist & in_mBinaryCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_codeList extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_codeList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_codeList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_uintlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_codeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_codeList add_operation (const GALGAS_codeList & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_codeList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uintlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uintlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uintlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uintlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssemblyCodeAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBinaryCodeAtIndex (class GALGAS_uintlist constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uintlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uintlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mBinaryCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_codeList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_codeList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_codeList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_codeList ;
 
} ; // End of GALGAS_codeList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_codeList : public cGenericAbstractEnumerator {
  public: cEnumerator_codeList (const GALGAS_codeList & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GALGAS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_codeList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @codeList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mAssemblyCode ;
  public: inline GALGAS_string readProperty_mAssemblyCode (void) const {
    return mProperty_mAssemblyCode ;
  }

  public: GALGAS_uintlist mProperty_mBinaryCode ;
  public: inline GALGAS_uintlist readProperty_mBinaryCode (void) const {
    return mProperty_mBinaryCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_codeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_codeList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyCode (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyCode = inValue ;
  }

  public: inline void setter_setMBinaryCode (const GALGAS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBinaryCode = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_codeList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_codeList_2D_element (const GALGAS_string & in_mAssemblyCode,
                                      const GALGAS_uintlist & in_mBinaryCode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_codeList_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_codeList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_uintlist & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_codeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_codeList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18_dataAddressMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataAddressMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataAddressMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38__5F_dataAddressMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) ;
  public: GALGAS_pic_31__38__5F_dataAddressMap & operator = (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38__5F_dataAddressMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38__5F_dataAddressMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38__5F_dataAddressMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataAddressMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataAddressForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDataAddressForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38__5F_dataAddressMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataAddressMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_pic_31__38__5F_dataAddressMap ;
 
} ; // End of GALGAS_pic_31__38__5F_dataAddressMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38__5F_dataAddressMap : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mDataAddress (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38__5F_dataAddressMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@pic18_dataAddressMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataAddressMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mDataAddress ;

//--- Constructor
  public: cMapElement_pic_31__38__5F_dataAddressMap (const GALGAS_lstring & inKey,
                                                     const GALGAS_uint & in_mDataAddress
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
// Phase 1: @pic_31__38__5F_dataAddressMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataAddressMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mDataAddress ;
  public: inline GALGAS_uint readProperty_mDataAddress (void) const {
    return mProperty_mDataAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38__5F_dataAddressMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDataAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataAddress = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38__5F_dataAddressMap_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_uint & in_mDataAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38__5F_dataAddressMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38__5F_dataAddressMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_uint & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38__5F_dataAddressMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SequentialInstruction generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const class GALGAS_uint constin_inAddress,
                                       const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const class GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       class GALGAS_codeList & out_outCode,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateTerminatorCode (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const class GALGAS_uint constin_inAddress,
                                                 const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GALGAS_string constin_inNextBlockLabel,
                                                 class GALGAS_codeList & out_outCode,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isEqualToTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const class GALGAS_ipic_31__38_AbstractBlockTerminator constin_inTerminator,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_terminatorDisplay (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const class GALGAS_string constin_inNextBlockLabel,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint callExtensionGetter_terminatorSize (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const class GALGAS_string constin_inNextBlockLabel,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const class GALGAS_uint constin_inAddress,
                                                                     const class GALGAS_string constin_inBlockLabel,
                                                                     const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     class GALGAS_uint & io_ioConversionCount,
                                                                     class GALGAS_string & io_ioListFileContents,
                                                                     class GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringlist callExtensionGetter_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const class GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                          class GALGAS_stringset & io_ioUsedRoutines,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declaredRoutineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_declaredRoutineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_declaredRoutineMap (const GALGAS_declaredRoutineMap & inSource) ;
  public: GALGAS_declaredRoutineMap & operator = (const GALGAS_declaredRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_declaredRoutineMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint constinArgument1,
                                                  class GALGAS_luint constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  class GALGAS_pic_31__38_InstructionList constinArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
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

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankForKey (class GALGAS_luint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankForKey (class GALGAS_luint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declaredRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_luint & outOperand1,
                                                    class GALGAS_luint & outOperand2,
                                                    class GALGAS_bool & outOperand3,
                                                    class GALGAS_bool & outOperand4,
                                                    class GALGAS_pic_31__38_InstructionList & outOperand5) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_declaredRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredRoutineMap ;
 
} ; // End of GALGAS_declaredRoutineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declaredRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_declaredRoutineMap (const GALGAS_declaredRoutineMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@declaredRoutineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredRoutineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_luint mProperty_mRequiredBank ;
  public: GALGAS_luint mProperty_mReturnedBank ;
  public: GALGAS_bool mProperty_mPreservesBank ;
  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cMapElement_declaredRoutineMap (const GALGAS_lstring & inKey,
                                          const GALGAS_luint & in_mRequiredBank,
                                          const GALGAS_luint & in_mReturnedBank,
                                          const GALGAS_bool & in_mPreservesBank,
                                          const GALGAS_bool & in_mIsNoReturn,
                                          const GALGAS_pic_31__38_InstructionList & in_mInstructionList
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
// Phase 1: @declaredRoutineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_luint mProperty_mRequiredBank ;
  public: inline GALGAS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GALGAS_luint mProperty_mReturnedBank ;
  public: inline GALGAS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GALGAS_bool mProperty_mPreservesBank ;
  public: inline GALGAS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_declaredRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_luint & in_mRequiredBank,
                                                const GALGAS_luint & in_mReturnedBank,
                                                const GALGAS_bool & in_mPreservesBank,
                                                const GALGAS_bool & in_mIsNoReturn,
                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_luint & inOperand1,
                                                                             const class GALGAS_luint & inOperand2,
                                                                             const class GALGAS_bool & inOperand3,
                                                                             const class GALGAS_bool & inOperand4,
                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_declaredRoutineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@pic18PiccoloInstruction performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_performInlining (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const class GALGAS_stringset constin_inInlinedRoutineSet,
                                          const class GALGAS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const class GALGAS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          class GALGAS_pic_31__38_InstructionList & io_ioInstructionList,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const class GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const class GALGAS_routineMap constin_inRoutineMap,
                                                   const class GALGAS_registerTable constin_inRegisterTable,
                                                   const class GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const class GALGAS_constantMap constin_inConstantMap,
                                                   class GALGAS_uint & io_ioCurrentBank,
                                                   const class GALGAS_bool constin_inShouldPreserveBSR,
                                                   class GALGAS_stringset & io_ioUsedRegisters,
                                                   class GALGAS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const class GALGAS_uint constin_inAccessBankSplitOffset,
                                  class GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const class GALGAS_routineMap constin_inRoutineMap,
                                  const class GALGAS_registerTable constin_inRegisterTable,
                                  const class GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const class GALGAS_constantMap constin_inConstantMap,
                                  const class GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                  class GALGAS_uint & io_ioLocalLabelIndex,
                                  class GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  class GALGAS_lstring & io_ioBlockLabel,
                                  class GALGAS_string & io_ioListFileContents,
                                  class GALGAS_uint & io_ioCurrentBank,
                                  const class GALGAS_bool constin_inShouldPreserveBSR,
                                  const class GALGAS_routineKind constin_inRoutineKind,
                                  class GALGAS_stringset & io_ioUsedRegisters,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

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
  public: GALGAS_blockInstructionBlockMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inSource) ;
  public: GALGAS_blockInstructionBlockMap & operator = (const GALGAS_blockInstructionBlockMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockInstructionBlockMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockInstructionBlockMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_blockInstructionBlockMap constructor_mapWithMapToOverride (const class GALGAS_blockInstructionBlockMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                     const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                  class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                  class GALGAS_location constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionForKey (class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                      class GALGAS_string constinArgument1,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockForKey (class GALGAS_location constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                  class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlockForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_blockInstructionBlockMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_pic_31__38_InstructionList & outOperand1,
                                                    class GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                    class GALGAS_location & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockInstructionBlockMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockInstructionBlockMap ;
 
} ; // End of GALGAS_blockInstructionBlockMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockInstructionBlockMap : public cGenericAbstractEnumerator {
  public: cEnumerator_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_blockInstructionBlockMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: GALGAS_location mProperty_mEndOfBlock ;

//--- Constructor
  public: cMapElement_blockInstructionBlockMap (const GALGAS_lstring & inKey,
                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                const GALGAS_location & in_mEndOfBlock
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
// Phase 1: @blockInstructionBlockMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInstructionBlockMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: inline GALGAS_abstractBlockTerminationForBlockInstruction readProperty_mBlockTerminaisonForBlockInstruction (void) const {
    return mProperty_mBlockTerminaisonForBlockInstruction ;
  }

  public: GALGAS_location mProperty_mEndOfBlock ;
  public: inline GALGAS_location readProperty_mEndOfBlock (void) const {
    return mProperty_mEndOfBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_blockInstructionBlockMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMBlockTerminaisonForBlockInstruction (const GALGAS_abstractBlockTerminationForBlockInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
  }

  public: inline void setter_setMEndOfBlock (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBlock = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_blockInstructionBlockMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                      const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                      const GALGAS_location & in_mEndOfBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockInstructionBlockMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockInstructionBlockMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                   const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                   const class GALGAS_location & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_blockInitialBankSelectionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inSource) ;
  public: GALGAS_blockInitialBankSelectionMap & operator = (const GALGAS_blockInitialBankSelectionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockInitialBankSelectionMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockInitialBankSelectionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_blockInitialBankSelectionMap constructor_mapWithMapToOverride (const class GALGAS_blockInitialBankSelectionMap & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialBankSelectionForKey (class GALGAS_uint constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceBlockForKey (class GALGAS_string constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialBankSelectionForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceBlockForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_blockInitialBankSelectionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_string & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockInitialBankSelectionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockInitialBankSelectionMap ;
 
} ; // End of GALGAS_blockInitialBankSelectionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockInitialBankSelectionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSourceBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_blockInitialBankSelectionMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mInitialBankSelection ;
  public: GALGAS_string mProperty_mSourceBlock ;

//--- Constructor
  public: cMapElement_blockInitialBankSelectionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_uint & in_mInitialBankSelection,
                                                    const GALGAS_string & in_mSourceBlock
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
// Phase 1: @blockInitialBankSelectionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInitialBankSelectionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mInitialBankSelection ;
  public: inline GALGAS_uint readProperty_mInitialBankSelection (void) const {
    return mProperty_mInitialBankSelection ;
  }

  public: GALGAS_string mProperty_mSourceBlock ;
  public: inline GALGAS_string readProperty_mSourceBlock (void) const {
    return mProperty_mSourceBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_blockInitialBankSelectionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_blockInitialBankSelectionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialBankSelection (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialBankSelection = inValue ;
  }

  public: inline void setter_setMSourceBlock (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceBlock = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_blockInitialBankSelectionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_uint & in_mInitialBankSelection,
                                                          const GALGAS_string & in_mSourceBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockInitialBankSelectionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockInitialBankSelectionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_uint & inOperand1,
                                                                                       const class GALGAS_string & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_blockInitialBankSelectionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           class GALGAS_stringset & io_ioVisitedBlockSet,
                                           const class GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                           const class GALGAS_string constin_inCurrentBlockName,
                                           const class GALGAS_uint constin_inInitialBlockSetting,
                                           class GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           class GALGAS_bool & io_ioContinuesInSequence,
                                           class GALGAS_bool & io_ioContinueAccessibilityExploration,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const class GALGAS_uint constin_inAccessBankSplitOffset,
                                        const class GALGAS_uint constin_inCurrentBank,
                                        const class GALGAS_registerTable constin_inRegisterTable,
                                        const class GALGAS_constantMap constin_inConstantMap,
                                        class GALGAS_uint & io_ioLocalLabelIndex,
                                        class GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        class GALGAS_stringset & io_ioUsedRegisters,
                                        const class GALGAS_string constin_inLabelForBlock,
                                        class GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (class cPtr_pic_31__38_ConditionExpression * inObject,
                                           const class GALGAS_uint constin_inAccessBankSplitOffset,
                                           const class GALGAS_uint constin_inCurrentBank,
                                           const class GALGAS_registerTable constin_inRegisterTable,
                                           const class GALGAS_constantMap constin_inConstantMap,
                                           class GALGAS_uint & io_ioLocalLabelIndex,
                                           class GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const class GALGAS_lstring constin_inConditionTrueLabel,
                                           const class GALGAS_lstring constin_inConditionFalseLabel,
                                           class GALGAS_stringset & io_ioUsedRegisters,
                                           class GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const class GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const class GALGAS_string constin_inBlockLabel,
                                             class GALGAS_bool & io_ioOptimizationDone,
                                             class GALGAS_string & io_ioListFileContents,
                                             class GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optimizeFlagStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optimizeFlagStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mRemoveEmptyRoutine ;
  public: inline GALGAS_bool readProperty_mRemoveEmptyRoutine (void) const {
    return mProperty_mRemoveEmptyRoutine ;
  }

  public: GALGAS_bool mProperty_mJSRtoRETLWreplacedByMOVLW ;
  public: inline GALGAS_bool readProperty_mJSRtoRETLWreplacedByMOVLW (void) const {
    return mProperty_mJSRtoRETLWreplacedByMOVLW ;
  }

  public: GALGAS_bool mProperty_mJSRfollowedByRETreplacedByJUMP ;
  public: inline GALGAS_bool readProperty_mJSRfollowedByRETreplacedByJUMP (void) const {
    return mProperty_mJSRfollowedByRETreplacedByJUMP ;
  }

  public: GALGAS_bool mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  public: inline GALGAS_bool readProperty_mMOVLWfollowedByRETreplacedByRETLW (void) const {
    return mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  }

  public: GALGAS_bool mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  public: inline GALGAS_bool readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (void) const {
    return mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  }

  public: GALGAS_bool mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  public: inline GALGAS_bool readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (void) const {
    return mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  }

  public: GALGAS_bool mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  public: inline GALGAS_bool readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (void) const {
    return mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optimizeFlagStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRemoveEmptyRoutine (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRemoveEmptyRoutine = inValue ;
  }

  public: inline void setter_setMJSRtoRETLWreplacedByMOVLW (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoRETLWreplacedByMOVLW = inValue ;
  }

  public: inline void setter_setMJSRfollowedByRETreplacedByJUMP (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRfollowedByRETreplacedByJUMP = inValue ;
  }

  public: inline void setter_setMMOVLWfollowedByRETreplacedByRETLW (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMOVLWfollowedByRETreplacedByRETLW = inValue ;
  }

  public: inline void setter_setMJSRtoOneInstructionRoutineReplacedByInstruction (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction = inValue ;
  }

  public: inline void setter_setMJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction = inValue ;
  }

  public: inline void setter_setMJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Native constructor
  public: GALGAS_optimizeFlagStruct (const GALGAS_bool & in_mRemoveEmptyRoutine,
                                     const GALGAS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                     const GALGAS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                     const GALGAS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                     const GALGAS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                     const GALGAS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                     const GALGAS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optimizeFlagStruct extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optimizeFlagStruct constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_bool & inOperand3,
                                                                  const class GALGAS_bool & inOperand4,
                                                                  const class GALGAS_bool & inOperand5,
                                                                  const class GALGAS_bool & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optimizeFlagStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const class GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                  const class GALGAS_string constin_inBlockLabel,
                                                  class GALGAS_bool & io_ioOptimizationDone,
                                                  class GALGAS_string & io_ioListFileContents,
                                                  class GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  class GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  class GALGAS_bool & out_outIdenticalTerminators,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                          class GALGAS_stringset & io_ioReferencedBlockSet,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                           class GALGAS_stringset & io_ioReferencedBlockSet,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const class GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                              const class GALGAS_lstring constin_inBlockLabel,
                                              class GALGAS_bool & out_outOptimizationDone,
                                              class GALGAS_string & io_ioListFileContents,
                                              class GALGAS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              class GALGAS_bool & out_outNOPsubstitution,
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
  public: GALGAS_blockInvocationGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockInvocationGraph extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockInvocationGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_string inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_stringlist & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_stringlist & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_stringlist & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_stringlist & outArgument0,
                                                               class GALGAS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_stringlist & outArgument0,
                                                             class GALGAS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_stringlist & outArgument0,
                                                        class GALGAS_lstringlist & outArgument1,
                                                        class GALGAS_stringlist & outArgument2,
                                                        class GALGAS_lstringlist & outArgument3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_blockInvocationGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_blockInvocationGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                       const class GALGAS_stringset & constinOperand1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_blockInvocationGraph class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInvocationGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const class GALGAS_lstring constin_inBlockLabel,
                                                          class GALGAS_string & io_ioGraphVizString,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const class GALGAS_lstring constin_inBlockLabel,
                                                         class GALGAS_string & io_ioGraphVizString,
                                                         const class GALGAS_bool constin_inDottedArrow,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_needToInsertJumpInstruction (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                   const class GALGAS_string constin_inNextBlockLabel,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const class GALGAS_lstring constin_inBlockLabel,
                                                      class GALGAS_blockInvocationGraph & io_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @clusterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_clusterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_clusterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_clusterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_clusterList extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_clusterList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_clusterList constructor_listWithValue (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_clusterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_clusterList add_operation (const GALGAS_clusterList & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_clusterList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockListAtIndex (class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_mBlockListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_clusterList ;
 
} ; // End of GALGAS_clusterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_clusterList : public cGenericAbstractEnumerator {
  public: cEnumerator_clusterList (const GALGAS_clusterList & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_clusterList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_ipic_31__38_BlockList mProperty_mBlockList ;
  public: inline GALGAS_ipic_31__38_BlockList readProperty_mBlockList (void) const {
    return mProperty_mBlockList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_clusterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_clusterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlockList (const GALGAS_ipic_31__38_BlockList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_clusterList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_clusterList_2D_element (const GALGAS_ipic_31__38_BlockList & in_mBlockList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_clusterList_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_clusterList_2D_element constructor_new (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_clusterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_neededConversionForClusterOrder (void) ;

//--------------------------------- Handle copy
  public: GALGAS_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inSource) ;
  public: GALGAS_neededConversionForClusterOrder & operator = (const GALGAS_neededConversionForClusterOrder & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_neededConversionForClusterOrder extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_neededConversionForClusterOrder constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_neededConversionForClusterOrder constructor_mapWithMapToOverride (const class GALGAS_neededConversionForClusterOrder & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConversionsForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mConversionsForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_neededConversionForClusterOrder getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_neededConversionForClusterOrder * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_neededConversionForClusterOrder ;
 
} ; // End of GALGAS_neededConversionForClusterOrder class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_neededConversionForClusterOrder : public cGenericAbstractEnumerator {
  public: cEnumerator_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mConversions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_neededConversionForClusterOrder_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mConversions ;

//--- Constructor
  public: cMapElement_neededConversionForClusterOrder (const GALGAS_lstring & inKey,
                                                       const GALGAS_uint & in_mConversions
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
// Phase 1: @neededConversionForClusterOrder_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_neededConversionForClusterOrder_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mConversions ;
  public: inline GALGAS_uint readProperty_mConversions (void) const {
    return mProperty_mConversions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_neededConversionForClusterOrder_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_neededConversionForClusterOrder_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConversions (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConversions = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_neededConversionForClusterOrder_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_uint & in_mConversions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_neededConversionForClusterOrder_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_neededConversionForClusterOrder_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_generatedCodeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_generatedCodeMap (const GALGAS_generatedCodeMap & inSource) ;
  public: GALGAS_generatedCodeMap & operator = (const GALGAS_generatedCodeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_generatedCodeMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_generatedCodeMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_generatedCodeMap constructor_mapWithMapToOverride (const class GALGAS_generatedCodeMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_codeList & inOperand1,
                                                     const class GALGAS_ipic_31__38_SequentialInstruction & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_codeList constinArgument1,
                                                  class GALGAS_ipic_31__38_SequentialInstruction constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCodeForKey (class GALGAS_codeList constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionForKey (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_codeList & outArgument1,
                                                  class GALGAS_ipic_31__38_SequentialInstruction & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_codeList getter_mCodeForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstructionForKey (const class GALGAS_string & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_generatedCodeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_codeList & outOperand1,
                                                    class GALGAS_ipic_31__38_SequentialInstruction & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_generatedCodeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_generatedCodeMap ;
 
} ; // End of GALGAS_generatedCodeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_generatedCodeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_generatedCodeMap (const GALGAS_generatedCodeMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_codeList current_mCode (LOCATION_ARGS) const ;
  public: class GALGAS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_generatedCodeMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_codeList mProperty_mCode ;
  public: GALGAS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;

//--- Constructor
  public: cMapElement_generatedCodeMap (const GALGAS_lstring & inKey,
                                        const GALGAS_codeList & in_mCode,
                                        const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction
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
// Phase 1: @generatedCodeMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generatedCodeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_codeList mProperty_mCode ;
  public: inline GALGAS_codeList readProperty_mCode (void) const {
    return mProperty_mCode ;
  }

  public: GALGAS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;
  public: inline GALGAS_ipic_31__38_SequentialInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_generatedCodeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCode (const GALGAS_codeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCode = inValue ;
  }

  public: inline void setter_setMInstruction (const GALGAS_ipic_31__38_SequentialInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_generatedCodeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_codeList & in_mCode,
                                              const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_generatedCodeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_generatedCodeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_codeList & inOperand1,
                                                                           const class GALGAS_ipic_31__38_SequentialInstruction & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_blockMapForStackComputation (void) ;

//--------------------------------- Handle copy
  public: GALGAS_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inSource) ;
  public: GALGAS_blockMapForStackComputation & operator = (const GALGAS_blockMapForStackComputation & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockMapForStackComputation extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockMapForStackComputation constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_blockMapForStackComputation constructor_mapWithMapToOverride (const class GALGAS_blockMapForStackComputation & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_ipic_31__38_Block & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_ipic_31__38_Block constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockForKey (class GALGAS_ipic_31__38_Block constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_ipic_31__38_Block & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlockForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_blockMapForStackComputation getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_ipic_31__38_Block & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockMapForStackComputation * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockMapForStackComputation ;
 
} ; // End of GALGAS_blockMapForStackComputation class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockMapForStackComputation : public cGenericAbstractEnumerator {
  public: cEnumerator_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_blockMapForStackComputation_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_ipic_31__38_Block mProperty_mBlock ;

//--- Constructor
  public: cMapElement_blockMapForStackComputation (const GALGAS_lstring & inKey,
                                                   const GALGAS_ipic_31__38_Block & in_mBlock
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
// Phase 1: @blockMapForStackComputation_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockMapForStackComputation_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_ipic_31__38_Block mProperty_mBlock ;
  public: inline GALGAS_ipic_31__38_Block readProperty_mBlock (void) const {
    return mProperty_mBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_blockMapForStackComputation_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBlock (const GALGAS_ipic_31__38_Block & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlock = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_blockMapForStackComputation_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_ipic_31__38_Block & in_mBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockMapForStackComputation_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockMapForStackComputation_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_ipic_31__38_Block & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_routineCallMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineCallMap (const GALGAS_routineCallMap & inSource) ;
  public: GALGAS_routineCallMap & operator = (const GALGAS_routineCallMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineCallMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineCallMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_routineCallMap constructor_mapWithMapToOverride (const class GALGAS_routineCallMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_stringset & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCalledRoutineSetForKey (class GALGAS_stringset constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminatorStackNeedsForKey (class GALGAS_uint constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mCalledRoutineSetForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorStackNeedsForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineCallMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_stringset & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineCallMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineCallMap ;
 
} ; // End of GALGAS_routineCallMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineCallMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineCallMap (const GALGAS_routineCallMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineCallMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_stringset mProperty_mCalledRoutineSet ;
  public: GALGAS_uint mProperty_mTerminatorStackNeeds ;

//--- Constructor
  public: cMapElement_routineCallMap (const GALGAS_lstring & inKey,
                                      const GALGAS_stringset & in_mCalledRoutineSet,
                                      const GALGAS_uint & in_mTerminatorStackNeeds
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
// Phase 1: @routineCallMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineCallMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_stringset mProperty_mCalledRoutineSet ;
  public: inline GALGAS_stringset readProperty_mCalledRoutineSet (void) const {
    return mProperty_mCalledRoutineSet ;
  }

  public: GALGAS_uint mProperty_mTerminatorStackNeeds ;
  public: inline GALGAS_uint readProperty_mTerminatorStackNeeds (void) const {
    return mProperty_mTerminatorStackNeeds ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routineCallMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_routineCallMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCalledRoutineSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCalledRoutineSet = inValue ;
  }

  public: inline void setter_setMTerminatorStackNeeds (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorStackNeeds = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_routineCallMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_routineCallMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_stringset & in_mCalledRoutineSet,
                                            const GALGAS_uint & in_mTerminatorStackNeeds) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineCallMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineCallMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_stringset & inOperand1,
                                                                         const class GALGAS_uint & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_routineStackRequirementMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inSource) ;
  public: GALGAS_routineStackRequirementMap & operator = (const GALGAS_routineStackRequirementMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineStackRequirementMap extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineStackRequirementMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_routineStackRequirementMap constructor_mapWithMapToOverride (const class GALGAS_routineStackRequirementMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLevelsForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLevelsForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineStackRequirementMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineStackRequirementMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineStackRequirementMap ;
 
} ; // End of GALGAS_routineStackRequirementMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineStackRequirementMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mLevels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineStackRequirementMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mLevels ;

//--- Constructor
  public: cMapElement_routineStackRequirementMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & in_mLevels
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
// Phase 1: @routineStackRequirementMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineStackRequirementMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mLevels ;
  public: inline GALGAS_uint readProperty_mLevels (void) const {
    return mProperty_mLevels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routineStackRequirementMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_routineStackRequirementMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLevels (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLevels = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_routineStackRequirementMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & in_lkey,
                                                        const GALGAS_uint & in_mLevels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineStackRequirementMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineStackRequirementMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_uint & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineStackRequirementMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_exploreAccessibleBlocksForStackComputations (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                      class GALGAS_stringset & io_ioBlockToExploreSet,
                                                                      class GALGAS_stringset & io_ioExploredBlockSet,
                                                                      class GALGAS_uint & out_outStackNeeds,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildCalledRoutineSetForStackComputations (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    class GALGAS_stringset & io_ioRoutineCalledSet,
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
  public: GALGAS_blockDurationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_blockDurationMap (const GALGAS_blockDurationMap & inSource) ;
  public: GALGAS_blockDurationMap & operator = (const GALGAS_blockDurationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockDurationMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockDurationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_blockDurationMap constructor_mapWithMapToOverride (const class GALGAS_blockDurationMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaxDurationForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMinDurationForKey (class GALGAS_uint constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxDurationForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinDurationForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_blockDurationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_blockDurationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockDurationMap ;
 
} ; // End of GALGAS_blockDurationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockDurationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_blockDurationMap (const GALGAS_blockDurationMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mMaxDuration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_blockDurationMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_uint mProperty_mMinDuration ;
  public: GALGAS_uint mProperty_mMaxDuration ;

//--- Constructor
  public: cMapElement_blockDurationMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mMinDuration,
                                        const GALGAS_uint & in_mMaxDuration
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
// Phase 1: @blockDurationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockDurationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mMinDuration ;
  public: inline GALGAS_uint readProperty_mMinDuration (void) const {
    return mProperty_mMinDuration ;
  }

  public: GALGAS_uint mProperty_mMaxDuration ;
  public: inline GALGAS_uint readProperty_mMaxDuration (void) const {
    return mProperty_mMaxDuration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_blockDurationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_blockDurationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMMinDuration (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinDuration = inValue ;
  }

  public: inline void setter_setMMaxDuration (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaxDuration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_blockDurationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mMinDuration,
                                              const GALGAS_uint & in_mMaxDuration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_blockDurationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_blockDurationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1,
                                                                           const class GALGAS_uint & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_blockDurationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GALGAS_blockDurationMap constin_inExploredBlockMap,
                                                   const class GALGAS_string constin_inNextLabel,
                                                   class GALGAS_uint & out_outMin,
                                                   class GALGAS_uint & out_outMax,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (class cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const class GALGAS_blockDurationMap constin_inExploredBlockMap,
                                   const class GALGAS_string constin_inNextLabel,
                                   class GALGAS_uint & out_outMin,
                                   class GALGAS_uint & out_outMax,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         class GALGAS_blockDurationMap in_inExploredBlockMap,
                                         class GALGAS_uint & out_outMin,
                                         class GALGAS_uint & out_outMax,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationInRam handleDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_handleDeclaration (class cPtr_declarationInRam * inObject,
                                            const class GALGAS_constantMap constin_inConstantMap,
                                            class GALGAS_stringset & io_ioUsedRegisters,
                                            class GALGAS_ramBankTable & io_ioRamBank,
                                            class GALGAS_registerTable & io_ioRegisterTable,
                                            const class GALGAS_lstring constin_inCurrentRamBank,
                                            class GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                            class C_Compiler * inCompiler
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
  public: GALGAS_declaredByteMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_declaredByteMap (const GALGAS_declaredByteMap & inSource) ;
  public: GALGAS_declaredByteMap & operator = (const GALGAS_declaredByteMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declaredByteMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declaredByteMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_declaredByteMap constructor_mapWithMapToOverride (const class GALGAS_declaredByteMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_declaredByteMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_declaredByteMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredByteMap ;
 
} ; // End of GALGAS_declaredByteMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declaredByteMap : public cGenericAbstractEnumerator {
  public: cEnumerator_declaredByteMap (const GALGAS_declaredByteMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_declaredByteMap_2D_element current (LOCATION_ARGS) const ;
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
  public: cMapElement_declaredByteMap (const GALGAS_lstring & inKey
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
  public: utf32 mLexicalAttribute_charValue ;
  public: C_String mLexicalAttribute_identifierString ;
  public: C_String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccoloDevice_5F_lexique (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_piccoloDevice_5F_lexique : public C_Lexique {
//--- Constructors
  public: C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_piccoloDevice_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
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
  public: static int16_t search_into_controlKeyWordList (const C_String & inSearchedString) ;

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

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccoloDevice_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int16_t terminalVocabularyCount (void) const override { return 33 ; }

//--- Get Token String
  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declaredByteMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredByteMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_declaredByteMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_declaredByteMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_declaredByteMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declaredByteMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declaredByteMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uintlist mProperty_mRegisterAddressList ;
  public: inline GALGAS_uintlist readProperty_mRegisterAddressList (void) const {
    return mProperty_mRegisterAddressList ;
  }

  public: GALGAS_uint mProperty_mSize ;
  public: inline GALGAS_uint readProperty_mSize (void) const {
    return mProperty_mSize ;
  }

  public: GALGAS_bitSliceTable mProperty_mBitSliceTable ;
  public: inline GALGAS_bitSliceTable readProperty_mBitSliceTable (void) const {
    return mProperty_mBitSliceTable ;
  }

  public: GALGAS_string mProperty_mBitDefinitionString ;
  public: inline GALGAS_string readProperty_mBitDefinitionString (void) const {
    return mProperty_mBitDefinitionString ;
  }

  public: GALGAS_registerProtection mProperty_mProtection ;
  public: inline GALGAS_registerProtection readProperty_mProtection (void) const {
    return mProperty_mProtection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddressList (const GALGAS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddressList = inValue ;
  }

  public: inline void setter_setMSize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSize = inValue ;
  }

  public: inline void setter_setMBitSliceTable (const GALGAS_bitSliceTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitSliceTable = inValue ;
  }

  public: inline void setter_setMBitDefinitionString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitDefinitionString = inValue ;
  }

  public: inline void setter_setMProtection (const GALGAS_registerProtection & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProtection = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_registerTable_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_uintlist & in_mRegisterAddressList,
                                           const GALGAS_uint & in_mSize,
                                           const GALGAS_bitSliceTable & in_mBitSliceTable,
                                           const GALGAS_string & in_mBitDefinitionString,
                                           const GALGAS_registerProtection & in_mProtection) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_uintlist & inOperand1,
                                                                        const class GALGAS_uint & inOperand2,
                                                                        const class GALGAS_bitSliceTable & inOperand3,
                                                                        const class GALGAS_string & inOperand4,
                                                                        const class GALGAS_registerProtection & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mFirstAddress ;
  public: inline GALGAS_uint readProperty_mFirstAddress (void) const {
    return mProperty_mFirstAddress ;
  }

  public: GALGAS_uint mProperty_mFirstFreeAddress ;
  public: inline GALGAS_uint readProperty_mFirstFreeAddress (void) const {
    return mProperty_mFirstFreeAddress ;
  }

  public: GALGAS_uint mProperty_mLastAddressPlusOne ;
  public: inline GALGAS_uint readProperty_mLastAddressPlusOne (void) const {
    return mProperty_mLastAddressPlusOne ;
  }

  public: GALGAS_uintlist mProperty_mMirrorOffsetList ;
  public: inline GALGAS_uintlist readProperty_mMirrorOffsetList (void) const {
    return mProperty_mMirrorOffsetList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ramBankTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_ramBankTable_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFirstAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstAddress = inValue ;
  }

  public: inline void setter_setMFirstFreeAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstFreeAddress = inValue ;
  }

  public: inline void setter_setMLastAddressPlusOne (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLastAddressPlusOne = inValue ;
  }

  public: inline void setter_setMMirrorOffsetList (const GALGAS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMirrorOffsetList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ramBankTable_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ramBankTable_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_uint & in_mFirstAddress,
                                          const GALGAS_uint & in_mFirstFreeAddress,
                                          const GALGAS_uint & in_mLastAddressPlusOne,
                                          const GALGAS_uintlist & in_mMirrorOffsetList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ramBankTable_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ramBankTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_uint & inOperand1,
                                                                       const class GALGAS_uint & inOperand2,
                                                                       const class GALGAS_uint & inOperand3,
                                                                       const class GALGAS_uintlist & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_illegalMaskList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_illegalMaskList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_luint & in_mIllegalValue,
                                                 const class GALGAS_luint & in_mIllegalMask,
                                                 const class GALGAS_lstring & in_mDescription
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_illegalMaskList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_illegalMaskList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_illegalMaskList constructor_listWithValue (const class GALGAS_luint & inOperand0,
                                                                         const class GALGAS_luint & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_illegalMaskList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_luint & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_illegalMaskList add_operation (const GALGAS_illegalMaskList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_illegalMaskList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_luint constinArgument0,
                                                      class GALGAS_luint constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_luint & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_luint & outArgument0,
                                                class GALGAS_luint & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_luint & outArgument0,
                                                      class GALGAS_luint & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDescriptionAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalMaskAtIndex (class GALGAS_luint constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalValueAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_luint & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_luint & outArgument0,
                                             class GALGAS_luint & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescriptionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalMaskAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_illegalMaskList ;
 
} ; // End of GALGAS_illegalMaskList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_illegalMaskList : public cGenericAbstractEnumerator {
  public: cEnumerator_illegalMaskList (const GALGAS_illegalMaskList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_illegalMaskList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_luint mProperty_mIllegalValue ;
  public: inline GALGAS_luint readProperty_mIllegalValue (void) const {
    return mProperty_mIllegalValue ;
  }

  public: GALGAS_luint mProperty_mIllegalMask ;
  public: inline GALGAS_luint readProperty_mIllegalMask (void) const {
    return mProperty_mIllegalMask ;
  }

  public: GALGAS_lstring mProperty_mDescription ;
  public: inline GALGAS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_illegalMaskList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_illegalMaskList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIllegalValue (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalValue = inValue ;
  }

  public: inline void setter_setMIllegalMask (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalMask = inValue ;
  }

  public: inline void setter_setMDescription (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_illegalMaskList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_illegalMaskList_2D_element (const GALGAS_luint & in_mIllegalValue,
                                             const GALGAS_luint & in_mIllegalMask,
                                             const GALGAS_lstring & in_mDescription) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_illegalMaskList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_illegalMaskList_2D_element constructor_new (const class GALGAS_luint & inOperand0,
                                                                          const class GALGAS_luint & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_configRegisterMaskMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inSource) ;
  public: GALGAS_configRegisterMaskMap & operator = (const GALGAS_configRegisterMaskMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configRegisterMaskMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configRegisterMaskMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_configRegisterMaskMap constructor_mapWithMapToOverride (const class GALGAS_configRegisterMaskMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_fieldSettingMap & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint constinArgument1,
                                                  class GALGAS_lstring constinArgument2,
                                                  class GALGAS_fieldSettingMap constinArgument3,
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


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_fieldSettingMap & outArgument3,
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

  public: VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_luint & outOperand1,
                                                    class GALGAS_lstring & outOperand2,
                                                    class GALGAS_fieldSettingMap & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_configRegisterMaskMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMaskMap ;
 
} ; // End of GALGAS_configRegisterMaskMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMaskMap : public cGenericAbstractEnumerator {
  public: cEnumerator_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GALGAS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_configRegisterMaskMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_luint mProperty_mMaskValue ;
  public: GALGAS_lstring mProperty_mDescription ;
  public: GALGAS_fieldSettingMap mProperty_mFieldSettingMap ;

//--- Constructor
  public: cMapElement_configRegisterMaskMap (const GALGAS_lstring & inKey,
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
// Phase 1: @configRegisterMaskMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMaskMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
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
  public: static GALGAS_configRegisterMaskMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_configRegisterMaskMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
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
  public: virtual ~ GALGAS_configRegisterMaskMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_luint & in_mMaskValue,
                                                   const GALGAS_lstring & in_mDescription,
                                                   const GALGAS_fieldSettingMap & in_mFieldSettingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configRegisterMaskMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configRegisterMaskMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_luint & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_fieldSettingMap & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_luint mProperty_mRegisterAddress ;
  public: GALGAS_luint mProperty_mRegisterWidth ;
  public: GALGAS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;
  public: GALGAS_illegalMaskList mProperty_mIllegalMaskList ;

//--- Constructor
  public: cMapElement_configRegisterMap (const GALGAS_lstring & inKey,
                                         const GALGAS_luint & in_mRegisterAddress,
                                         const GALGAS_luint & in_mRegisterWidth,
                                         const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                         const GALGAS_illegalMaskList & in_mIllegalMaskList
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
// Phase 1: @configRegisterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_luint mProperty_mRegisterAddress ;
  public: inline GALGAS_luint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GALGAS_luint mProperty_mRegisterWidth ;
  public: inline GALGAS_luint readProperty_mRegisterWidth (void) const {
    return mProperty_mRegisterWidth ;
  }

  public: GALGAS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;
  public: inline GALGAS_configRegisterMaskMap readProperty_mConfigRegisterMaskMap (void) const {
    return mProperty_mConfigRegisterMaskMap ;
  }

  public: GALGAS_illegalMaskList mProperty_mIllegalMaskList ;
  public: inline GALGAS_illegalMaskList readProperty_mIllegalMaskList (void) const {
    return mProperty_mIllegalMaskList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_configRegisterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterWidth (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterWidth = inValue ;
  }

  public: inline void setter_setMConfigRegisterMaskMap (const GALGAS_configRegisterMaskMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMaskMap = inValue ;
  }

  public: inline void setter_setMIllegalMaskList (const GALGAS_illegalMaskList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalMaskList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_luint & in_mRegisterAddress,
                                               const GALGAS_luint & in_mRegisterWidth,
                                               const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                               const GALGAS_illegalMaskList & in_mIllegalMaskList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configRegisterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configRegisterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_luint & inOperand1,
                                                                            const class GALGAS_luint & inOperand2,
                                                                            const class GALGAS_configRegisterMaskMap & inOperand3,
                                                                            const class GALGAS_illegalMaskList & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual ~ cParser_piccoloDevice_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_start_5F_symbol_ (class GALGAS_piccoloDeviceModel & outArgument0,
                                               class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GALGAS_piccoloDeviceModel & outArgument0,
                                                                    C_Lexique_piccoloDevice_5F_lexique * inLexique) ;

  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccoloDevice_5F_lexique * inLexique) ;

  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_piccoloDevice_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchOverflowMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchOverflowMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_stringlist mProperty_mList ;
  public: inline GALGAS_stringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_branchOverflowMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_branchOverflowMap_2D_element (const GALGAS_string & in_key,
                                               const GALGAS_stringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_branchOverflowMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchOverflowMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_stringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_branchOverflowMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;

