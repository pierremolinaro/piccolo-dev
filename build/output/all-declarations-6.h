#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @piccoloDeviceModel struct
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

//--------------------------------- Copy constructor
  public: GGS_piccoloDeviceModel (const GGS_piccoloDeviceModel & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_piccoloDeviceModel & operator = (const GGS_piccoloDeviceModel & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_assembly_instruction length'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_length (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                                   const class GGS_string constin_inNextLabel,
                                                   class GGS_uint & out_outMin,
                                                   class GGS_uint & out_outMax,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         const class GGS_blockDurationMap constin_inExploredBlockMap,
                                         class GGS_uint & out_outMin,
                                         class GGS_uint & out_outMax,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

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
//Parser class 'piccoloDevice_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_piccoloDevice_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_piccoloDevice_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_start_5F_symbol_ (class GGS_piccoloDeviceModel & outArgument0,
                                               class Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GGS_piccoloDeviceModel & outArgument0,
                                                                    Lexique_piccoloDevice_5F_lexique * inLexique) ;

/*  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccoloDevice_5F_lexique * inLexique) ; */

  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccoloDevice_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_piccoloDevice_5F_syntax_0 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_1 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_2 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_3 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_4 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_5 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_6 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_7 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_8 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_9 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_10 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_11 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_12 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_13 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_14 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_15 (Lexique_piccoloDevice_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code basecode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_basecode (const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_SimpleConstantCaseItem (const class cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mCaseExpression (void) const ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SimpleConstantCaseItem init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SimpleConstantCaseItem extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_SimpleConstantCaseItem_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                               const class GGS_location & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mCaseExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (const GGS_immediatExpression & in_mCaseExpression,
                                                  const GGS_location & in_mCaseExpressionLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SimpleConstantCaseItem_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem_2E_weak : public GGS_pic_31__38_AbstractCaseItem_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (const class GGS_pic_31__38_SimpleConstantCaseItem & inSource) ;

  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & operator = (const class GGS_pic_31__38_SimpleConstantCaseItem & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_SimpleConstantCaseItem_2E_weak init_nil (void) {
    GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_SimpleConstantCaseItem bang_pic_31__38_SimpleConstantCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_SimpleConstantCaseItem unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_SimpleConstantCaseItem_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SimpleConstantCaseItem_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_switch reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_switch (const class cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_SwitchInstructionCaseList readProperty_mCaseList (void) const ;

  public: class GGS_location readProperty_mElseBranchStartLocation (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_switch init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_switch extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_SwitchInstructionCaseList mProperty_mCaseList ;
  public: GGS_location mProperty_mElseBranchStartLocation ;
  public: GGS_pic_31__38_InstructionList mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (const GGS_location & in_mInstructionLocation,
                                                 const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                 const GGS_location & in_mElseBranchStartLocation,
                                                 const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_switch_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak (const class GGS_pic_31__38_Instruction_5F_switch & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_switch & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_switch_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_switch bang_pic_31__38_Instruction_5F_switch_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_switch unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_Instruction_5F_switch_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_switch_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_terminatorDisplay (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const class GGS_string constin_inNextBlockLabel,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_terminatorSize (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GGS_string constin_inNextBlockLabel,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            class GGS_uint & io_ioCurrentWordAdress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_ (class GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

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

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_ (class GGS_checkpicList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_ (class GGS_dataList & ioArgument0,
                                                  class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GGS_pic_31__38_InstructionList & outArgument0,
                                                   class GGS_bool & ioArgument1,
                                                   class GGS_bool & ioArgument2,
                                                   class GGS_labelMap & ioArgument3,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       class GGS_bool & ioArgument1,
                                                       class GGS_bool & ioArgument2,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                     class GGS_bool & ioArgument1,
                                                     class GGS_bool & ioArgument2,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_ (class GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                               class GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_bool & ioArgument3,
                                                               class GGS_labelMap & ioArgument4,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_ (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GGS_bool & ioArgument1,
                                                         class GGS_bool & ioArgument2,
                                                         class GGS_labelMap & ioArgument3,
                                                         class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_syntax_body_i0_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                       GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                       GGS_lstringlist & ioArgument3,
                                                       GGS_lstringlist & ioArgument4,
                                                       GGS_ramDefinitionList & ioArgument5,
                                                       GGS_lstringlist & ioArgument6,
                                                       GGS_configDefinitionList & ioArgument7,
                                                       GGS_constantDefinitionList & ioArgument8,
                                                       GGS_checkpicList & ioArgument9,
                                                       GGS_dataList & ioArgument10,
                                                       GGS_bool & ioArgument11,
                                                       GGS_bool & ioArgument12,
                                                       Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GGS_checkpicList & ioArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                                      GGS_bool & ioArgument1,
                                                                      GGS_bool & ioArgument2,
                                                                      GGS_labelMap & ioArgument3,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                          GGS_bool & ioArgument1,
                                                                          GGS_bool & ioArgument2,
                                                                          Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                        GGS_bool & ioArgument1,
                                                                        GGS_bool & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                             GGS_bool & ioArgument1,
                                                                             GGS_bool & ioArgument2,
                                                                             GGS_labelMap & ioArgument3,
                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GGS_lstring constinArgument0,
                                                                                   GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   GGS_bool & ioArgument3,
                                                                                   GGS_labelMap & ioArgument4,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'communs' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_communs {
//--- Virtual destructor
  public: virtual ~ cParser_communs (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                              class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_ (class GGS_immediatExpression & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_communs_configuration_5F_definition_i0_ (GGS_configDefinitionList & ioArgument0,
                                                                Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_configuration_5F_definition_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_configuration_5F_definition_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_ (GGS_declarationInRam & outArgument0,
                                                             Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_declaration_5F_in_5F_ram_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_ (GGS_ramDefinitionList & ioArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_ram_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_ram_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_ (GGS_constantDefinitionList & ioArgument0,
                                                           Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_constant_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_constant_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_ (GGS_immediatExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_immediate_5F_expression_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_immediate_5F_expression_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_ (GGS_immediatExpression & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GGS_immediatExpression & outArgument0,
                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_ (GGS_immediatExpression & outArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_immediate_5F_term_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_immediate_5F_term_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_ (GGS_immediatExpression & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_immediate_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_immediate_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_immediate_5F_primary_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_immediate_5F_primary_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_ (GGS_registerExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_register_5F_parsing_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_register_5F_parsing_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_bit_5F_number_5F_parsing_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_bit_5F_number_5F_parsing_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_bit_5F_number_5F_parsing_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GGS_bool & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_include_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_include_5F_grammar : public cParser_pic_31__38__5F_syntax,
                                                   public cParser_communs {
//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
 /*  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
 /*  public: virtual void nt_block_5F_termination_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
 /*  public: virtual void nt_body_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_body_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_body_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                 GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                 GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                 GGS_lstringlist & ioArgument3,
                                 GGS_lstringlist & ioArgument4,
                                 GGS_ramDefinitionList & ioArgument5,
                                 GGS_lstringlist & ioArgument6,
                                 GGS_configDefinitionList & ioArgument7,
                                 GGS_constantDefinitionList & ioArgument8,
                                 GGS_checkpicList & ioArgument9,
                                 GGS_dataList & ioArgument10,
                                 GGS_bool & ioArgument11,
                                 GGS_bool & ioArgument12,
                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                  GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                  GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                  GGS_lstringlist & ioArgument3,
                                                  GGS_lstringlist & ioArgument4,
                                                  GGS_ramDefinitionList & ioArgument5,
                                                  GGS_lstringlist & ioArgument6,
                                                  GGS_configDefinitionList & ioArgument7,
                                                  GGS_constantDefinitionList & ioArgument8,
                                                  GGS_checkpicList & ioArgument9,
                                                  GGS_dataList & ioArgument10,
                                                  GGS_bool & ioArgument11,
                                                  GGS_bool & ioArgument12
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                    GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                    GGS_lstringlist & ioArgument3,
                                                    GGS_lstringlist & ioArgument4,
                                                    GGS_ramDefinitionList & ioArgument5,
                                                    GGS_lstringlist & ioArgument6,
                                                    GGS_configDefinitionList & ioArgument7,
                                                    GGS_constantDefinitionList & ioArgument8,
                                                    GGS_checkpicList & ioArgument9,
                                                    GGS_dataList & ioArgument10,
                                                    GGS_bool & ioArgument11,
                                                    GGS_bool & ioArgument12
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

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_checkpic_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GGS_checkpicList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GGS_pic_31__38_ConditionExpression & outArgument0,
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

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_data_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GGS_dataList & ioArgument0,
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

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                GGS_bool & ioArgument1,
                                                GGS_bool & ioArgument2,
                                                GGS_labelMap & ioArgument3,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_bool & ioArgument1,
                                                    GGS_bool & ioArgument2,
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

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GGS_bool & ioArgument1,
                                                  GGS_bool & ioArgument2,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                            GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GGS_bool & ioArgument2,
                                                            GGS_bool & ioArgument3,
                                                            GGS_labelMap & ioArgument4,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GGS_bool & ioArgument1,
                                                      GGS_bool & ioArgument2,
                                                      GGS_labelMap & ioArgument3,
                                                      Lexique_piccolo_5F_lexique * inCompiler) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) ;

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

/*  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (Lexique_piccolo_5F_lexique *) = 0 ;


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
// Phase 1: @pic_31__38_AST struct
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

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_AST (const GGS_pic_31__38_AST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_AST & operator = (const GGS_pic_31__38_AST & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

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

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_ (class GGS_midrange_5F_instructionList & outArgument0,
                                                               class GGS_bool & ioArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_labelMap & ioArgument3,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_ (class GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                   class GGS_bool & ioArgument1,
                                                                   class GGS_bool & ioArgument2,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_ (class GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                 class GGS_bool & ioArgument1,
                                                                 class GGS_bool & ioArgument2,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_ (class GGS_midrange_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                                           class GGS_midrange_5F_instruction & outArgument1,
                                                                           class GGS_bool & ioArgument2,
                                                                           class GGS_bool & ioArgument3,
                                                                           class GGS_labelMap & ioArgument4,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_ (class GGS_midrange_5F_instruction & outArgument0,
                                                                     class GGS_bool & ioArgument1,
                                                                     class GGS_bool & ioArgument2,
                                                                     class GGS_labelMap & ioArgument3,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

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

/*  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GGS_midrange_5F_instructionList & outArgument0,
                                                                               GGS_bool & ioArgument1,
                                                                               GGS_bool & ioArgument2,
                                                                               GGS_labelMap & ioArgument3,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                   GGS_bool & ioArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                 GGS_bool & ioArgument1,
                                                                                 GGS_bool & ioArgument2,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GGS_midrange_5F_instruction & outArgument0,
                                                                                     GGS_bool & ioArgument1,
                                                                                     GGS_bool & ioArgument2,
                                                                                     GGS_labelMap & ioArgument3,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GGS_lstring constinArgument0,
                                                                                           GGS_midrange_5F_instruction & outArgument1,
                                                                                           GGS_bool & ioArgument2,
                                                                                           GGS_bool & ioArgument3,
                                                                                           GGS_labelMap & ioArgument4,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GGS_midrange_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                              Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

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
// Phase 1: @midrange_5F_model struct
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

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_model (const GGS_midrange_5F_model & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_model & operator = (const GGS_midrange_5F_model & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_model ;

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

  protected: virtual void nt_baseline_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_ (class GGS_baseline_5F_instructionList & outArgument0,
                                                               class GGS_labelMap & ioArgument1,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_ (class GGS_baseline_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                                           class GGS_baseline_5F_instruction & outArgument1,
                                                                           class GGS_labelMap & ioArgument2,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_ (class GGS_baseline_5F_instruction & outArgument0,
                                                                     class GGS_labelMap & ioArgument1,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class GGS_ramDefinitionList & ioArgument2,
                                               class GGS_lstringlist & ioArgument3,
                                               class GGS_configDefinitionList & ioArgument4,
                                               class GGS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_syntax_section_5F_list_i0_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               GGS_lstringlist & ioArgument1,
                                                               GGS_ramDefinitionList & ioArgument2,
                                                               GGS_lstringlist & ioArgument3,
                                                               GGS_configDefinitionList & ioArgument4,
                                                               GGS_constantDefinitionList & ioArgument5,
                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_section_5F_list_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GGS_baseline_5F_instructionList & outArgument0,
                                                                               GGS_labelMap & ioArgument1,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GGS_baseline_5F_instruction & outArgument0,
                                                                                     GGS_labelMap & ioArgument1,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GGS_lstring constinArgument0,
                                                                                           GGS_baseline_5F_instruction & outArgument1,
                                                                                           GGS_labelMap & ioArgument2,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GGS_baseline_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                              Lexique_piccolo_5F_lexique * inLexique) ;

/*  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ; */

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

